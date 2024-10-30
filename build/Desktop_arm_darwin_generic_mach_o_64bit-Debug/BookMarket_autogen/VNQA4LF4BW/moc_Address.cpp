/****************************************************************************
** Meta object code from reading C++ file 'Address.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/model/Address.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Address.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSAddressENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSAddressENDCLASS = QtMocHelpers::stringData(
    "Address",
    "",
    "parent",
    "id",
    "uid",
    "province",
    "city",
    "district",
    "address",
    "receiver_name",
    "phone",
    "is_default",
    "status"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSAddressENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
      10,   18, // properties
       0,    0, // enums/sets
       2,   68, // constructors
       0,       // flags
       0,       // signalCount

 // constructors: parameters
    0x80000000 | 1, QMetaType::QObjectStar,    2,
    0x80000000 | 1,

 // properties: name, type, flags
       3, QMetaType::Int, 0x00015103, uint(-1), 0,
       4, QMetaType::QString, 0x00015103, uint(-1), 0,
       5, QMetaType::QString, 0x00015103, uint(-1), 0,
       6, QMetaType::QString, 0x00015103, uint(-1), 0,
       7, QMetaType::QString, 0x00015103, uint(-1), 0,
       8, QMetaType::QString, 0x00015103, uint(-1), 0,
       9, QMetaType::QString, 0x00015003, uint(-1), 0,
      10, QMetaType::QString, 0x00015103, uint(-1), 0,
      11, QMetaType::Int, 0x00015003, uint(-1), 0,
      12, QMetaType::Int, 0x00015103, uint(-1), 0,

 // constructors: name, argc, parameters, tag, flags, initial metatype offsets
       0,    1,   14,    1, 0x0e,   11 /* Public */,
       0,    0,   17,    1, 0x2e,   12 /* Public | MethodCloned */,

       0        // eod
};

Q_CONSTINIT const QMetaObject Address::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSAddressENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSAddressENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSAddressENDCLASS_t,
        // property 'id'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'uid'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'province'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'city'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'district'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'address'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'receiver_name'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'phone'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'is_default'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'status'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Address, std::true_type>,
        // constructor 'Address'
        QtPrivate::TypeAndForceComplete<QObject *, std::false_type>
    >,
    nullptr
} };

void Address::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::CreateInstance) {
        switch (_id) {
        case 0: { Address *_r = new Address((*reinterpret_cast<std::add_pointer_t<QObject*>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QObject**>(_a[0]) = _r; } break;
        case 1: { Address *_r = new Address();
            if (_a[0]) *reinterpret_cast<QObject**>(_a[0]) = _r; } break;
        default: break;
        }
    } else if (_c == QMetaObject::ConstructInPlace) {
        switch (_id) {
        case 0: { new (_a[0]) Address((*reinterpret_cast<std::add_pointer_t<QObject*>>(_a[1]))); } break;
        case 1: { new (_a[0]) Address(); } break;
        default: break;
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<Address *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->getId(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->getUid(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->getProvince(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->getCity(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->getDistrict(); break;
        case 5: *reinterpret_cast< QString*>(_v) = _t->getAddress(); break;
        case 6: *reinterpret_cast< QString*>(_v) = _t->getReceiverName(); break;
        case 7: *reinterpret_cast< QString*>(_v) = _t->getPhone(); break;
        case 8: *reinterpret_cast< int*>(_v) = _t->getIsDefault(); break;
        case 9: *reinterpret_cast< int*>(_v) = _t->getStatus(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<Address *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setId(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setUid(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setProvince(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setCity(*reinterpret_cast< QString*>(_v)); break;
        case 4: _t->setDistrict(*reinterpret_cast< QString*>(_v)); break;
        case 5: _t->setAddress(*reinterpret_cast< QString*>(_v)); break;
        case 6: _t->setReceiverName(*reinterpret_cast< QString*>(_v)); break;
        case 7: _t->setPhone(*reinterpret_cast< QString*>(_v)); break;
        case 8: _t->setIsDefault(*reinterpret_cast< int*>(_v)); break;
        case 9: _t->setStatus(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_o;
}

const QMetaObject *Address::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Address::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSAddressENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Address::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
