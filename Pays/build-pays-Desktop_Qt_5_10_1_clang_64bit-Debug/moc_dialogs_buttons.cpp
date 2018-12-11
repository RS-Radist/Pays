/****************************************************************************
** Meta object code from reading C++ file 'dialogs_buttons.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../pays/dialogs_buttons.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dialogs_buttons.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PAYS__DIALOGS__Buttons_t {
    QByteArrayData data[11];
    char stringdata0[113];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PAYS__DIALOGS__Buttons_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PAYS__DIALOGS__Buttons_t qt_meta_stringdata_PAYS__DIALOGS__Buttons = {
    {
QT_MOC_LITERAL(0, 0, 22), // "PAYS::DIALOGS::Buttons"
QT_MOC_LITERAL(1, 23, 8), // "rejected"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 8), // "accepted"
QT_MOC_LITERAL(4, 42, 14), // "accept_request"
QT_MOC_LITERAL(5, 57, 5), // "bool*"
QT_MOC_LITERAL(6, 63, 2), // "OK"
QT_MOC_LITERAL(7, 66, 12), // "save_request"
QT_MOC_LITERAL(8, 79, 11), // "on_ok_press"
QT_MOC_LITERAL(9, 91, 13), // "error_message"
QT_MOC_LITERAL(10, 105, 7) // "message"

    },
    "PAYS::DIALOGS::Buttons\0rejected\0\0"
    "accepted\0accept_request\0bool*\0OK\0"
    "save_request\0on_ok_press\0error_message\0"
    "message"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PAYS__DIALOGS__Buttons[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,
       3,    0,   45,    2, 0x06 /* Public */,
       4,    1,   46,    2, 0x06 /* Public */,
       7,    1,   49,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   52,    2, 0x08 /* Private */,
       9,    1,   53,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 5,    6,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   10,

       0        // eod
};

void PAYS::DIALOGS::Buttons::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Buttons *_t = static_cast<Buttons *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->rejected(); break;
        case 1: _t->accepted(); break;
        case 2: _t->accept_request((*reinterpret_cast< bool*(*)>(_a[1]))); break;
        case 3: _t->save_request((*reinterpret_cast< bool*(*)>(_a[1]))); break;
        case 4: _t->on_ok_press(); break;
        case 5: _t->error_message((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (Buttons::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Buttons::rejected)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Buttons::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Buttons::accepted)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (Buttons::*_t)(bool * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Buttons::accept_request)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (Buttons::*_t)(bool * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Buttons::save_request)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PAYS::DIALOGS::Buttons::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_PAYS__DIALOGS__Buttons.data,
      qt_meta_data_PAYS__DIALOGS__Buttons,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *PAYS::DIALOGS::Buttons::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PAYS::DIALOGS::Buttons::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PAYS__DIALOGS__Buttons.stringdata0))
        return static_cast<void*>(this);
    return QFrame::qt_metacast(_clname);
}

int PAYS::DIALOGS::Buttons::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
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
void PAYS::DIALOGS::Buttons::rejected()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void PAYS::DIALOGS::Buttons::accepted()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void PAYS::DIALOGS::Buttons::accept_request(bool * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void PAYS::DIALOGS::Buttons::save_request(bool * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
