/****************************************************************************
** Meta object code from reading C++ file 'order_title.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../pays/order_title.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'order_title.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PAYS__Order__Title_t {
    QByteArrayData data[14];
    char stringdata0[116];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PAYS__Order__Title_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PAYS__Order__Title_t qt_meta_stringdata_PAYS__Order__Title = {
    {
QT_MOC_LITERAL(0, 0, 18), // "PAYS::Order::Title"
QT_MOC_LITERAL(1, 19, 11), // "raise_error"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 7), // "message"
QT_MOC_LITERAL(4, 40, 10), // "can_accept"
QT_MOC_LITERAL(5, 51, 5), // "bool*"
QT_MOC_LITERAL(6, 57, 2), // "OK"
QT_MOC_LITERAL(7, 60, 9), // "save_data"
QT_MOC_LITERAL(8, 70, 11), // "attach_data"
QT_MOC_LITERAL(9, 82, 4), // "data"
QT_MOC_LITERAL(10, 87, 6), // "number"
QT_MOC_LITERAL(11, 94, 4), // "date"
QT_MOC_LITERAL(12, 99, 4), // "kind"
QT_MOC_LITERAL(13, 104, 11) // "payerStatus"

    },
    "PAYS::Order::Title\0raise_error\0\0message\0"
    "can_accept\0bool*\0OK\0save_data\0attach_data\0"
    "data\0number\0date\0kind\0payerStatus"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PAYS__Order__Title[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       4,   46, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   37,    2, 0x0a /* Public */,
       7,    1,   40,    2, 0x0a /* Public */,
       8,    1,   43,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, QMetaType::QObjectStar,    9,

 // properties: name, type, flags
      10, QMetaType::QString, 0x00095103,
      11, QMetaType::QDateTime, 0x00095103,
      12, QMetaType::QString, 0x00095103,
      13, QMetaType::QString, 0x00095103,

       0        // eod
};

void PAYS::Order::Title::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Title *_t = static_cast<Title *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->raise_error((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->can_accept((*reinterpret_cast< bool*(*)>(_a[1]))); break;
        case 2: _t->save_data((*reinterpret_cast< bool*(*)>(_a[1]))); break;
        case 3: _t->attach_data((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (Title::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Title::raise_error)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        Title *_t = static_cast<Title *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->number(); break;
        case 1: *reinterpret_cast< QDateTime*>(_v) = _t->date(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->kind(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->payerStatus(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        Title *_t = static_cast<Title *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setNumber(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setDate(*reinterpret_cast< QDateTime*>(_v)); break;
        case 2: _t->setKind(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setPayerStatus(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject PAYS::Order::Title::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_PAYS__Order__Title.data,
      qt_meta_data_PAYS__Order__Title,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *PAYS::Order::Title::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PAYS::Order::Title::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PAYS__Order__Title.stringdata0))
        return static_cast<void*>(this);
    return QFrame::qt_metacast(_clname);
}

int PAYS::Order::Title::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void PAYS::Order::Title::raise_error(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
