/****************************************************************************
** Meta object code from reading C++ file 'IMServerMessageCtrl.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "control/IMServerMessageCtrl.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'IMServerMessageCtrl.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_IMServerMessageCtrl[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      21,   20,   20,   20, 0x08,
      45,   20,   20,   20, 0x08,
      81,   78,   20,   20, 0x08,
     103,   78,   20,   20, 0x08,
     133,  125,   20,   20, 0x08,
     160,  125,   20,   20, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_IMServerMessageCtrl[] = {
    "IMServerMessageCtrl\0\0showConnectedMedssage()\0"
    "readMessage(IMClientSocketCtrl*)\0id\0"
    "insertIDData(QString)\0deleteIDData(QString)\0"
    "address\0insertAddressData(QString)\0"
    "deleteAddressData(QString)\0"
};

void IMServerMessageCtrl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        IMServerMessageCtrl *_t = static_cast<IMServerMessageCtrl *>(_o);
        switch (_id) {
        case 0: _t->showConnectedMedssage(); break;
        case 1: _t->readMessage((*reinterpret_cast< IMClientSocketCtrl*(*)>(_a[1]))); break;
        case 2: _t->insertIDData((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->deleteIDData((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->insertAddressData((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->deleteAddressData((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData IMServerMessageCtrl::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject IMServerMessageCtrl::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_IMServerMessageCtrl,
      qt_meta_data_IMServerMessageCtrl, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &IMServerMessageCtrl::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *IMServerMessageCtrl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *IMServerMessageCtrl::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_IMServerMessageCtrl))
        return static_cast<void*>(const_cast< IMServerMessageCtrl*>(this));
    return QObject::qt_metacast(_clname);
}

int IMServerMessageCtrl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
