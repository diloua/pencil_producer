/****************************************************************************
** Meta object code from reading C++ file 'debugger.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "debugger.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'debugger.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Debugger_t {
    QByteArrayData data[8];
    char stringdata0[173];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Debugger_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Debugger_t qt_meta_stringdata_Debugger = {
    {
QT_MOC_LITERAL(0, 0, 8), // "Debugger"
QT_MOC_LITERAL(1, 9, 20), // "on_add_money_clicked"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 31), // "on_add_inventory_pencil_clicked"
QT_MOC_LITERAL(4, 63, 27), // "on_add_total_pencil_clicked"
QT_MOC_LITERAL(5, 91, 28), // "on_add_wood_graphite_clicked"
QT_MOC_LITERAL(6, 120, 27), // "on_add_intelligence_clicked"
QT_MOC_LITERAL(7, 148, 24) // "on_add_marketing_clicked"

    },
    "Debugger\0on_add_money_clicked\0\0"
    "on_add_inventory_pencil_clicked\0"
    "on_add_total_pencil_clicked\0"
    "on_add_wood_graphite_clicked\0"
    "on_add_intelligence_clicked\0"
    "on_add_marketing_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Debugger[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,
       3,    0,   45,    2, 0x06 /* Public */,
       4,    0,   46,    2, 0x06 /* Public */,
       5,    0,   47,    2, 0x06 /* Public */,
       6,    0,   48,    2, 0x06 /* Public */,
       7,    0,   49,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Debugger::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Debugger *_t = static_cast<Debugger *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_add_money_clicked(); break;
        case 1: _t->on_add_inventory_pencil_clicked(); break;
        case 2: _t->on_add_total_pencil_clicked(); break;
        case 3: _t->on_add_wood_graphite_clicked(); break;
        case 4: _t->on_add_intelligence_clicked(); break;
        case 5: _t->on_add_marketing_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Debugger::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Debugger::on_add_money_clicked)) {
                *result = 0;
            }
        }
        {
            typedef void (Debugger::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Debugger::on_add_inventory_pencil_clicked)) {
                *result = 1;
            }
        }
        {
            typedef void (Debugger::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Debugger::on_add_total_pencil_clicked)) {
                *result = 2;
            }
        }
        {
            typedef void (Debugger::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Debugger::on_add_wood_graphite_clicked)) {
                *result = 3;
            }
        }
        {
            typedef void (Debugger::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Debugger::on_add_intelligence_clicked)) {
                *result = 4;
            }
        }
        {
            typedef void (Debugger::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Debugger::on_add_marketing_clicked)) {
                *result = 5;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject Debugger::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_Debugger.data,
      qt_meta_data_Debugger,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Debugger::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Debugger::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Debugger.stringdata0))
        return static_cast<void*>(const_cast< Debugger*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int Debugger::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void Debugger::on_add_money_clicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void Debugger::on_add_inventory_pencil_clicked()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void Debugger::on_add_total_pencil_clicked()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void Debugger::on_add_wood_graphite_clicked()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void Debugger::on_add_intelligence_clicked()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}

// SIGNAL 5
void Debugger::on_add_marketing_clicked()
{
    QMetaObject::activate(this, &staticMetaObject, 5, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
