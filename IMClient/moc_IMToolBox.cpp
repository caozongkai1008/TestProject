/****************************************************************************
** Meta object code from reading C++ file 'IMToolBox.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "view/IMToolBox.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'IMToolBox.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_IMToolItem[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      18,   12,   11,   11, 0x05,
      43,   12,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
      68,   11,   11,   11, 0x08,
      80,   11,   11,   11, 0x08,
      92,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_IMToolItem[] = {
    "IMToolItem\0\0title\0renameBoxSignal(QString)\0"
    "removeBoxSignal(QString)\0renameBox()\0"
    "removeBox()\0onClickRightButton()\0"
};

void IMToolItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        IMToolItem *_t = static_cast<IMToolItem *>(_o);
        switch (_id) {
        case 0: _t->renameBoxSignal((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->removeBoxSignal((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->renameBox(); break;
        case 3: _t->removeBox(); break;
        case 4: _t->onClickRightButton(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData IMToolItem::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject IMToolItem::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_IMToolItem,
      qt_meta_data_IMToolItem, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &IMToolItem::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *IMToolItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *IMToolItem::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_IMToolItem))
        return static_cast<void*>(const_cast< IMToolItem*>(this));
    return QWidget::qt_metacast(_clname);
}

int IMToolItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void IMToolItem::renameBoxSignal(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void IMToolItem::removeBoxSignal(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
static const uint qt_meta_data_IMToolBox[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_IMToolBox[] = {
    "IMToolBox\0"
};

void IMToolBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData IMToolBox::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject IMToolBox::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_IMToolBox,
      qt_meta_data_IMToolBox, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &IMToolBox::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *IMToolBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *IMToolBox::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_IMToolBox))
        return static_cast<void*>(const_cast< IMToolBox*>(this));
    return QWidget::qt_metacast(_clname);
}

int IMToolBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
