# An Online Store

## Project Overview
It is a sophisticated Qt-based project designed to provide an online store management platform tailored for administrators. It encompasses crucial features such as:

- Admin Authentication
- Book Inventory Management System
- Order Processing and Management
- User Account Management
- Additional features (to be refined as the project evolves)

## Frameworks and Tools Used

- **Qt** for the backend logic and seamless UI interaction.
- **Vue** for creating highly dynamic and interactive user interfaces.
- **Bootstrap** for responsive, visually appealing UI design.
- Additional frameworks/tools will be determined as the project scales.

## Project Components

### 1. UI Design Approach
Initially, the project employed QWidget-based UI design; however, the resulting visual aesthetics were suboptimal. Transitioning to QSS offered greater flexibility in styling, albeit with a significant increase in complexity. Ultimately, QWebEngine was adopted, leveraging QWebChannel to integrate JavaScript. This allowed the use of mature frontend frameworks such as Vue and Bootstrap, leading to a modern and visually attractive interface while retaining the power of Qt's C++ backend.

### 2. Entity Class
The class serves as the core representation of a book entity, utilizing Qt's powerful reflection capabilities for efficient and dynamic development.

- The class inherits from `QObject` and employs the `Q_PROPERTY` macro to expose properties to the Qt meta-object system.
- Constructors and key methods are registered using the `Q_INVOKABLE` macro, enabling dynamic interaction and introspection at runtime.

Example Code:
```cpp
class Book : public QObject {
Q_OBJECT
    Q_PROPERTY(int id READ getId WRITE setId)
    Q_PROPERTY(QString bid READ getBid WRITE setBid)
    // ...
public:
    Q_INVOKABLE explicit Book(QObject *parent = nullptr) : QObject(parent) {}
};
```

### 3. Database Utilities
The `DataBaseUtils` class encapsulates various database operations, such as insertion, updates, deletion, and querying, using generic programming (template functions) in conjunction with Qt's reflection mechanism to simplify SQL query management and reduce boilerplate code.

Example Code:
```cpp
template<class T, class ...Args>
static QVector<T *> search(QString sql, Args...var) {
    QVector<QVariant> args{var...};
    QVector<T *> list;
    QSqlQuery *query = DataBaseBean::getConnection();
    query->prepare(sql);
    for (int i = 0; i < args.size(); i++) {
        query->bindValue(i, args[i]);
    }
    query->exec();
    // Populating the result list with reflection
    while (query->next()) {
        T *t = (T *) T::staticMetaObject.newInstance();
        // Setting properties using reflection
        for (const auto &fieldName : headList) {
            t->setProperty(fieldName.toStdString().data(), query->value(i));
        }
        list.push_back(t);
    }
    return list;
}
```
The above code utilizes `QSqlQuery` and `QMetaObject` for seamless integration between SQL operations and C++ object representation, ensuring type safety and reducing manual overhead in handling database results.

### 4. JSON Utilities
The `JSON` utility class provides mechanisms for serializing C++ objects into JSON format using Qt's reflection, enabling easy integration between the backend and frontend.

- Metadata from an object is read using `QMetaObject` to create a corresponding `QJsonObject`. Lists of objects are handled by converting each element into a `QJsonObject` and aggregating them into a `QJsonArray`.
- Special data types such as `QDateTime` and `QByteArray` are handled to ensure compatibility in serialization.

Example Code:
```cpp
template<class T>
static QJsonObject toJSONObject(T *object) {
    QJsonObject qJsonObject;
    QMetaObject metaObject = T::staticMetaObject;
    for (int i = metaObject.propertyOffset(); i < metaObject.propertyCount(); i++) {
        QMetaProperty property = metaObject.property(i);
        QVariant propertyValue = object->property(property.name());
        qJsonObject[property.name()] = propertyValue.toJsonValue();
    }
    return qJsonObject;
}
```
This approach leverages Qt's meta-object system, ensuring that serialization logic remains decoupled from specific entity classes, thus enhancing code reusability and maintainability.

### 5. Data Access and Service Layers

- **BookDao**: Implements data access operations specific to the `Book` entity, akin to the Data Access Object (DAO) pattern commonly employed in Java enterprise applications. This layer abstracts raw SQL operations, providing a clean API for higher-level services.
- **BookService**: Defines the business logic concerning books, acting as an intermediary between the BookDao and the controllers. It encapsulates domain-specific rules and manages transactional workflows.
- **Integration with Web Frontend**: Achieved through `BookController`, which uses `QWebChannel` for seamless interaction with JavaScript on the web client. This architecture adheres to a clean separation of concerns, where each layer has a distinct responsibility.
- **Qt Slots and Signals**: These are used for asynchronous communication, enabling JavaScript to invoke backend methods and vice versa, ensuring a responsive and interactive user experience.

### 6. ProxyService
The `ProxyService` class acts as a dynamic middleware layer, facilitating the invocation of registered backend services using reflection.

- By leveraging Qt's reflection and meta-object capabilities, ProxyService minimizes the complexity associated with managing multiple `QWebChannel` instances, especially when numerous backend services are involved.

Example Code:
```cpp
class ProxyService : public QObject {
Q_OBJECT
public slots:
    QVariant executeService(QJsonObject param) {
        QString className = param["class"].toString();
        QString methodName = param["method"].toString();
        QMetaType metaType = QMetaType::fromName(className.toUtf8());
        QMetaObject metaObject = *metaType.metaObject();
        QObject *object = metaObject.newInstance();
        QVariant result;
        QMetaObject::invokeMethod(object, methodName.toUtf8().constData(),
                                  Q_RETURN_ARG(QVariant, result),
                                  Q_ARG(QJsonObject, param));
        delete object;
        return result;
    }
};
```
The `ProxyService` exemplifies a sophisticated design approach to frontend-backend communication, drawing parallels to service-oriented architectures (SOA) found in enterprise systems. This enables a consistent interface for JavaScript clients, akin to RESTful APIs in traditional web applications.

### 7. Web Integration with Qt
Integration between Vue (frontend) and Qt (backend) is achieved using `QWebChannel`. This allows for full-duplex communication, where both the frontend and backend can invoke methods on each other. The use of a "proxy pattern" reduces boilerplate and simplifies the integration of multiple services.

Example JavaScript Code:
```javascript
new QWebChannel(qt.webChannelTransport, function (channel) {
    let proxyService = channel.objects.proxyService;
    proxyService.executeService({class: "BookService", method: "getBookList"}, function (response) {
        // Handle the response
    });
});
```
The design ensures efficient communication between the web and native layers, similar to how remote procedure calls (RPCs) function in distributed systems, enabling complex operations to be abstracted away from the client logic.