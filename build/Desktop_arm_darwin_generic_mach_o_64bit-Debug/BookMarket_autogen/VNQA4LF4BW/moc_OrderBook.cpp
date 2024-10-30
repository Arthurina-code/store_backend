/****************************************************************************
** Meta object code from reading C++ file 'OrderBook.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/model/OrderBook.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'OrderBook.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSOrderBookENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSOrderBookENDCLASS = QtMocHelpers::stringData(
    "OrderBook",
    "",
    "parent",
    "id",
    "oid",
    "bid",
    "book",
    "Book*",
    "count",
    "price",
    "discount"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSOrderBookENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       7,   18, // properties
       0,    0, // enums/sets
       2,   53, // constructors
       0,       // flags
       0,       // signalCount

 // constructors: parameters
    0x80000000 | 1, QMetaType::QObjectStar,    2,
    0x80000000 | 1,

 // properties: name, type, flags
       3, QMetaType::Int, 0x00015103, uint(-1), 0,
       4, QMetaType::QString, 0x00015103, uint(-1), 0,
       5, QMetaType::QString, 0x00015103, uint(-1), 0,
       6, 0x80000000 | 7, 0x0001510b, uint(-1), 0,
       8, QMetaType::Int, 0x00015103, uint(-1), 0,
       9, QMetaType::Double, 0x00015103, uint(-1), 0,
      10, QMetaType::Double, 0x00015103, uint(-1), 0,

 // constructors: name, argc, parameters, tag, flags, initial metatype offsets
       0,    1,   14,    1, 0x0e,    8 /* Public */,
       0,    0,   17,    1, 0x2e,    9 /* Public | MethodCloned */,

       0        // eod
};

Q_CONSTINIT const QMetaObject OrderBook::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSOrderBookENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSOrderBookENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSOrderBookENDCLASS_t,
        // property 'id'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'oid'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'bid'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'book'
        QtPrivate::TypeAndForceComplete<Book*, std::true_type>,
        // property 'count'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'price'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'discount'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<OrderBook, std::true_type>,
        // constructor 'OrderBook'
        QtPrivate::TypeAndForceComplete<QObject *, std::false_type>
    >,
    nullptr
} };

void OrderBook::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::CreateInstance) {
        switch (_id) {
        case 0: { OrderBook *_r = new OrderBook((*reinterpret_cast<std::add_pointer_t<QObject*>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QObject**>(_a[0]) = _r; } break;
        case 1: { OrderBook *_r = new OrderBook();
            if (_a[0]) *reinterpret_cast<QObject**>(_a[0]) = _r; } break;
        default: break;
        }
    } else if (_c == QMetaObject::ConstructInPlace) {
        switch (_id) {
        case 0: { new (_a[0]) OrderBook((*reinterpret_cast<std::add_pointer_t<QObject*>>(_a[1]))); } break;
        case 1: { new (_a[0]) OrderBook(); } break;
        default: break;
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Book* >(); break;
        }
    }  else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<OrderBook *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->getId(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->getOid(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->getBid(); break;
        case 3: *reinterpret_cast< Book**>(_v) = _t->getBook(); break;
        case 4: *reinterpret_cast< int*>(_v) = _t->getCount(); break;
        case 5: *reinterpret_cast< double*>(_v) = _t->getPrice(); break;
        case 6: *reinterpret_cast< double*>(_v) = _t->getDiscount(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<OrderBook *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setId(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setOid(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setBid(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setBook(*reinterpret_cast< Book**>(_v)); break;
        case 4: _t->setCount(*reinterpret_cast< int*>(_v)); break;
        case 5: _t->setPrice(*reinterpret_cast< double*>(_v)); break;
        case 6: _t->setDiscount(*reinterpret_cast< double*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_o;
}

const QMetaObject *OrderBook::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OrderBook::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSOrderBookENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int OrderBook::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
