/****************************************************************************
** Meta object code from reading C++ file 'Order.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/model/Order.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Order.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSOrderENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSOrderENDCLASS = QtMocHelpers::stringData(
    "Order",
    "",
    "parent",
    "id",
    "oid",
    "uid",
    "aid",
    "address",
    "Address*",
    "books",
    "QList<OrderBook*>",
    "price",
    "status",
    "created_time",
    "pay_time",
    "send_time",
    "finish_time"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSOrderENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
      12,   18, // properties
       0,    0, // enums/sets
       2,   78, // constructors
       0,       // flags
       0,       // signalCount

 // constructors: parameters
    0x80000000 | 1, QMetaType::QObjectStar,    2,
    0x80000000 | 1,

 // properties: name, type, flags
       3, QMetaType::Int, 0x00015103, uint(-1), 0,
       4, QMetaType::QString, 0x00015103, uint(-1), 0,
       5, QMetaType::QString, 0x00015103, uint(-1), 0,
       6, QMetaType::Int, 0x00015103, uint(-1), 0,
       7, 0x80000000 | 8, 0x0001510b, uint(-1), 0,
       9, 0x80000000 | 10, 0x0001510b, uint(-1), 0,
      11, QMetaType::Double, 0x00015103, uint(-1), 0,
      12, QMetaType::Int, 0x00015103, uint(-1), 0,
      13, QMetaType::QDateTime, 0x00015003, uint(-1), 0,
      14, QMetaType::QDateTime, 0x00015003, uint(-1), 0,
      15, QMetaType::QDateTime, 0x00015003, uint(-1), 0,
      16, QMetaType::QDateTime, 0x00015003, uint(-1), 0,

 // constructors: name, argc, parameters, tag, flags, initial metatype offsets
       0,    1,   14,    1, 0x0e,   13 /* Public */,
       0,    0,   17,    1, 0x2e,   14 /* Public | MethodCloned */,

       0        // eod
};

Q_CONSTINIT const QMetaObject Order::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSOrderENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSOrderENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSOrderENDCLASS_t,
        // property 'id'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'oid'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'uid'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'aid'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'address'
        QtPrivate::TypeAndForceComplete<Address*, std::true_type>,
        // property 'books'
        QtPrivate::TypeAndForceComplete<QList<OrderBook*>, std::true_type>,
        // property 'price'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'status'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'created_time'
        QtPrivate::TypeAndForceComplete<QDateTime, std::true_type>,
        // property 'pay_time'
        QtPrivate::TypeAndForceComplete<QDateTime, std::true_type>,
        // property 'send_time'
        QtPrivate::TypeAndForceComplete<QDateTime, std::true_type>,
        // property 'finish_time'
        QtPrivate::TypeAndForceComplete<QDateTime, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Order, std::true_type>,
        // constructor 'Order'
        QtPrivate::TypeAndForceComplete<QObject *, std::false_type>
    >,
    nullptr
} };

void Order::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::CreateInstance) {
        switch (_id) {
        case 0: { Order *_r = new Order((*reinterpret_cast<std::add_pointer_t<QObject*>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QObject**>(_a[0]) = _r; } break;
        case 1: { Order *_r = new Order();
            if (_a[0]) *reinterpret_cast<QObject**>(_a[0]) = _r; } break;
        default: break;
        }
    } else if (_c == QMetaObject::ConstructInPlace) {
        switch (_id) {
        case 0: { new (_a[0]) Order((*reinterpret_cast<std::add_pointer_t<QObject*>>(_a[1]))); } break;
        case 1: { new (_a[0]) Order(); } break;
        default: break;
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Address* >(); break;
        case 5:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<OrderBook*> >(); break;
        }
    }  else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<Order *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->getId(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->getOid(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->getUid(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->getAid(); break;
        case 4: *reinterpret_cast< Address**>(_v) = _t->getAddress(); break;
        case 5: *reinterpret_cast< QList<OrderBook*>*>(_v) = _t->getBooks(); break;
        case 6: *reinterpret_cast< double*>(_v) = _t->getPrice(); break;
        case 7: *reinterpret_cast< int*>(_v) = _t->getStatus(); break;
        case 8: *reinterpret_cast< QDateTime*>(_v) = _t->getCreatedTime(); break;
        case 9: *reinterpret_cast< QDateTime*>(_v) = _t->getPayTime(); break;
        case 10: *reinterpret_cast< QDateTime*>(_v) = _t->getSendTime(); break;
        case 11: *reinterpret_cast< QDateTime*>(_v) = _t->getFinishTime(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<Order *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setId(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setOid(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setUid(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setAid(*reinterpret_cast< int*>(_v)); break;
        case 4: _t->setAddress(*reinterpret_cast< Address**>(_v)); break;
        case 5: _t->setBooks(*reinterpret_cast< QList<OrderBook*>*>(_v)); break;
        case 6: _t->setPrice(*reinterpret_cast< double*>(_v)); break;
        case 7: _t->setStatus(*reinterpret_cast< int*>(_v)); break;
        case 8: _t->setCreatedTime(*reinterpret_cast< QDateTime*>(_v)); break;
        case 9: _t->setPayTime(*reinterpret_cast< QDateTime*>(_v)); break;
        case 10: _t->setSendTime(*reinterpret_cast< QDateTime*>(_v)); break;
        case 11: _t->setFinishTime(*reinterpret_cast< QDateTime*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_o;
}

const QMetaObject *Order::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Order::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSOrderENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Order::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
