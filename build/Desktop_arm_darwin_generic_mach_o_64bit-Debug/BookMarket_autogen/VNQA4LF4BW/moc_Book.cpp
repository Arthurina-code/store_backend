/****************************************************************************
** Meta object code from reading C++ file 'Book.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/model/Book.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Book.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.7.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSBookENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSBookENDCLASS = QtMocHelpers::stringData(
    "Book",
    "",
    "parent",
    "id",
    "bid",
    "cid",
    "cname",
    "bname",
    "author",
    "publisher",
    "publish_time",
    "image",
    "price",
    "discount",
    "count",
    "description",
    "status"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSBookENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
      14,   18, // properties
       0,    0, // enums/sets
       2,   88, // constructors
       0,       // flags
       0,       // signalCount

 // constructors: parameters
    0x80000000 | 1, QMetaType::QObjectStar,    2,
    0x80000000 | 1,

 // properties: name, type, flags
       3, QMetaType::Int, 0x00015103, uint(-1), 0,
       4, QMetaType::QString, 0x00015103, uint(-1), 0,
       5, QMetaType::Int, 0x00015103, uint(-1), 0,
       6, QMetaType::QString, 0x00015103, uint(-1), 0,
       7, QMetaType::QString, 0x00015103, uint(-1), 0,
       8, QMetaType::QString, 0x00015103, uint(-1), 0,
       9, QMetaType::QString, 0x00015103, uint(-1), 0,
      10, QMetaType::QDateTime, 0x00015003, uint(-1), 0,
      11, QMetaType::QByteArray, 0x00015103, uint(-1), 0,
      12, QMetaType::Double, 0x00015103, uint(-1), 0,
      13, QMetaType::Double, 0x00015103, uint(-1), 0,
      14, QMetaType::Int, 0x00015103, uint(-1), 0,
      15, QMetaType::QString, 0x00015103, uint(-1), 0,
      16, QMetaType::Int, 0x00015103, uint(-1), 0,

 // constructors: name, argc, parameters, tag, flags, initial metatype offsets
       0,    1,   14,    1, 0x0e,   15 /* Public */,
       0,    0,   17,    1, 0x2e,   16 /* Public | MethodCloned */,

       0        // eod
};

Q_CONSTINIT const QMetaObject Book::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSBookENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSBookENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSBookENDCLASS_t,
        // property 'id'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'bid'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'cid'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'cname'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'bname'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'author'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'publisher'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'publish_time'
        QtPrivate::TypeAndForceComplete<QDateTime, std::true_type>,
        // property 'image'
        QtPrivate::TypeAndForceComplete<QByteArray, std::true_type>,
        // property 'price'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'discount'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'count'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'description'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'status'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Book, std::true_type>,
        // constructor 'Book'
        QtPrivate::TypeAndForceComplete<QObject *, std::false_type>
    >,
    nullptr
} };

void Book::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::CreateInstance) {
        switch (_id) {
        case 0: { Book *_r = new Book((*reinterpret_cast<std::add_pointer_t<QObject*>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QObject**>(_a[0]) = _r; } break;
        case 1: { Book *_r = new Book();
            if (_a[0]) *reinterpret_cast<QObject**>(_a[0]) = _r; } break;
        default: break;
        }
    } else if (_c == QMetaObject::ConstructInPlace) {
        switch (_id) {
        case 0: { new (_a[0]) Book((*reinterpret_cast<std::add_pointer_t<QObject*>>(_a[1]))); } break;
        case 1: { new (_a[0]) Book(); } break;
        default: break;
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<Book *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->getId(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->getBid(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->getCid(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->getCname(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->getBname(); break;
        case 5: *reinterpret_cast< QString*>(_v) = _t->getAuthor(); break;
        case 6: *reinterpret_cast< QString*>(_v) = _t->getPublisher(); break;
        case 7: *reinterpret_cast< QDateTime*>(_v) = _t->getPublishTime(); break;
        case 8: *reinterpret_cast< QByteArray*>(_v) = _t->getImage(); break;
        case 9: *reinterpret_cast< double*>(_v) = _t->getPrice(); break;
        case 10: *reinterpret_cast< double*>(_v) = _t->getDiscount(); break;
        case 11: *reinterpret_cast< int*>(_v) = _t->getCount(); break;
        case 12: *reinterpret_cast< QString*>(_v) = _t->getDescription(); break;
        case 13: *reinterpret_cast< int*>(_v) = _t->getStatus(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<Book *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setId(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setBid(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setCid(*reinterpret_cast< int*>(_v)); break;
        case 3: _t->setCname(*reinterpret_cast< QString*>(_v)); break;
        case 4: _t->setBname(*reinterpret_cast< QString*>(_v)); break;
        case 5: _t->setAuthor(*reinterpret_cast< QString*>(_v)); break;
        case 6: _t->setPublisher(*reinterpret_cast< QString*>(_v)); break;
        case 7: _t->setPublishTime(*reinterpret_cast< QDateTime*>(_v)); break;
        case 8: _t->setImage(*reinterpret_cast< QByteArray*>(_v)); break;
        case 9: _t->setPrice(*reinterpret_cast< double*>(_v)); break;
        case 10: _t->setDiscount(*reinterpret_cast< double*>(_v)); break;
        case 11: _t->setCount(*reinterpret_cast< int*>(_v)); break;
        case 12: _t->setDescription(*reinterpret_cast< QString*>(_v)); break;
        case 13: _t->setStatus(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_o;
}

const QMetaObject *Book::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Book::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSBookENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Book::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    return _id;
}
QT_WARNING_POP
