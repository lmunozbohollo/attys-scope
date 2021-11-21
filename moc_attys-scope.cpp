/****************************************************************************
** Meta object code from reading C++ file 'attys-scope.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "attys-scope.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'attys-scope.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Attys_scope_t {
    QByteArrayData data[11];
    char stringdata0[136];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Attys_scope_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Attys_scope_t qt_meta_stringdata_Attys_scope = {
    {
QT_MOC_LITERAL(0, 0, 11), // "Attys_scope"
QT_MOC_LITERAL(1, 12, 16), // "slotSaveSettings"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 16), // "slotLoadSettings"
QT_MOC_LITERAL(4, 47, 10), // "incTbEvent"
QT_MOC_LITERAL(5, 58, 12), // "resetTbEvent"
QT_MOC_LITERAL(6, 71, 10), // "decTbEvent"
QT_MOC_LITERAL(7, 82, 13), // "enterFileName"
QT_MOC_LITERAL(8, 96, 12), // "recstartstop"
QT_MOC_LITERAL(9, 109, 11), // "udpTransmit"
QT_MOC_LITERAL(10, 121, 14) // "specialChanged"

    },
    "Attys_scope\0slotSaveSettings\0\0"
    "slotLoadSettings\0incTbEvent\0resetTbEvent\0"
    "decTbEvent\0enterFileName\0recstartstop\0"
    "udpTransmit\0specialChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Attys_scope[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x08 /* Private */,
       3,    0,   60,    2, 0x08 /* Private */,
       4,    0,   61,    2, 0x08 /* Private */,
       5,    0,   62,    2, 0x08 /* Private */,
       6,    0,   63,    2, 0x08 /* Private */,
       7,    0,   64,    2, 0x08 /* Private */,
       8,    1,   65,    2, 0x08 /* Private */,
       9,    0,   68,    2, 0x08 /* Private */,
      10,    0,   69,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Attys_scope::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Attys_scope *_t = static_cast<Attys_scope *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotSaveSettings(); break;
        case 1: _t->slotLoadSettings(); break;
        case 2: _t->incTbEvent(); break;
        case 3: _t->resetTbEvent(); break;
        case 4: _t->decTbEvent(); break;
        case 5: _t->enterFileName(); break;
        case 6: _t->recstartstop((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->udpTransmit(); break;
        case 8: _t->specialChanged(); break;
        default: ;
        }
    }
}

const QMetaObject Attys_scope::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Attys_scope.data,
      qt_meta_data_Attys_scope,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Attys_scope::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Attys_scope::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Attys_scope.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Attys_scope::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
