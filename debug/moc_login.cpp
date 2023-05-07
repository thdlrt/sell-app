/****************************************************************************
** Meta object code from reading C++ file 'login.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../login.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'login.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_login_t {
    const uint offsetsAndSize[34];
    char stringdata0[187];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_login_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_login_t qt_meta_stringdata_login = {
    {
QT_MOC_LITERAL(0, 5), // "login"
QT_MOC_LITERAL(6, 12), // "buy_complete"
QT_MOC_LITERAL(19, 0), // ""
QT_MOC_LITERAL(20, 4), // "mvs3"
QT_MOC_LITERAL(25, 3), // "sum"
QT_MOC_LITERAL(29, 9), // "buy_false"
QT_MOC_LITERAL(39, 1), // "a"
QT_MOC_LITERAL(41, 1), // "b"
QT_MOC_LITERAL(43, 13), // "sell_complete"
QT_MOC_LITERAL(57, 10), // "sell_false"
QT_MOC_LITERAL(68, 4), // "item"
QT_MOC_LITERAL(73, 14), // "admin_complete"
QT_MOC_LITERAL(88, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(110, 23), // "on_pushButton_5_clicked"
QT_MOC_LITERAL(134, 23), // "on_pushButton_3_clicked"
QT_MOC_LITERAL(158, 23), // "on_pushButton_4_clicked"
QT_MOC_LITERAL(182, 4) // "core"

    },
    "login\0buy_complete\0\0mvs3\0sum\0buy_false\0"
    "a\0b\0sell_complete\0sell_false\0item\0"
    "admin_complete\0on_pushButton_clicked\0"
    "on_pushButton_5_clicked\0on_pushButton_3_clicked\0"
    "on_pushButton_4_clicked\0core"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_login[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   74,    2, 0x06,    1 /* Public */,
       5,    2,   77,    2, 0x06,    3 /* Public */,
       8,    1,   82,    2, 0x06,    6 /* Public */,
       9,    1,   85,    2, 0x06,    8 /* Public */,
      11,    1,   88,    2, 0x06,   10 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      12,    0,   91,    2, 0x08,   12 /* Private */,
      13,    0,   92,    2, 0x08,   13 /* Private */,
      14,    0,   93,    2, 0x08,   14 /* Private */,
      15,    0,   94,    2, 0x08,   15 /* Private */,
      16,    0,   95,    2, 0x08,   16 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    6,    7,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 10,    4,
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void login::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<login *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->buy_complete((*reinterpret_cast< std::add_pointer_t<mvs3>>(_a[1]))); break;
        case 1: _t->buy_false((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 2: _t->sell_complete((*reinterpret_cast< std::add_pointer_t<mvs3>>(_a[1]))); break;
        case 3: _t->sell_false((*reinterpret_cast< std::add_pointer_t<item>>(_a[1]))); break;
        case 4: _t->admin_complete((*reinterpret_cast< std::add_pointer_t<mvs3>>(_a[1]))); break;
        case 5: _t->on_pushButton_clicked(); break;
        case 6: _t->on_pushButton_5_clicked(); break;
        case 7: _t->on_pushButton_3_clicked(); break;
        case 8: _t->on_pushButton_4_clicked(); break;
        case 9: _t->core(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (login::*)(mvs3 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&login::buy_complete)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (login::*)(QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&login::buy_false)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (login::*)(mvs3 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&login::sell_complete)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (login::*)(item );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&login::sell_false)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (login::*)(mvs3 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&login::admin_complete)) {
                *result = 4;
                return;
            }
        }
    }
}

const QMetaObject login::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_login.offsetsAndSize,
    qt_meta_data_login,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_login_t
, QtPrivate::TypeAndForceComplete<login, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<mvs3, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<mvs3, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<item, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<mvs3, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *login::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *login::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_login.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int login::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void login::buy_complete(mvs3 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void login::buy_false(QString _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void login::sell_complete(mvs3 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void login::sell_false(item _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void login::admin_complete(mvs3 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
