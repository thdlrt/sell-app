/****************************************************************************
** Meta object code from reading C++ file 'salecase.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../salecase.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'salecase.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_salecase_t {
    const uint offsetsAndSize[34];
    char stringdata0[203];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_salecase_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_salecase_t qt_meta_stringdata_salecase = {
    {
QT_MOC_LITERAL(0, 8), // "salecase"
QT_MOC_LITERAL(9, 12), // "completeshow"
QT_MOC_LITERAL(22, 0), // ""
QT_MOC_LITERAL(23, 4), // "mvs3"
QT_MOC_LITERAL(28, 5), // "sellf"
QT_MOC_LITERAL(34, 4), // "item"
QT_MOC_LITERAL(39, 3), // "sum"
QT_MOC_LITERAL(43, 7), // "report2"
QT_MOC_LITERAL(51, 14), // "slotCellEnter2"
QT_MOC_LITERAL(66, 1), // "r"
QT_MOC_LITERAL(68, 1), // "c"
QT_MOC_LITERAL(70, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(92, 23), // "on_pushButton_3_clicked"
QT_MOC_LITERAL(116, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(140, 14), // "slotCellEnter3"
QT_MOC_LITERAL(155, 23), // "on_pushButton_4_clicked"
QT_MOC_LITERAL(179, 23) // "on_pushButton_5_clicked"

    },
    "salecase\0completeshow\0\0mvs3\0sellf\0"
    "item\0sum\0report2\0slotCellEnter2\0r\0c\0"
    "on_pushButton_clicked\0on_pushButton_3_clicked\0"
    "on_pushButton_2_clicked\0slotCellEnter3\0"
    "on_pushButton_4_clicked\0on_pushButton_5_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_salecase[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   74,    2, 0x0a,    1 /* Public */,
       4,    1,   77,    2, 0x0a,    3 /* Public */,
       7,    0,   80,    2, 0x08,    5 /* Private */,
       8,    2,   81,    2, 0x08,    6 /* Private */,
      11,    0,   86,    2, 0x08,    9 /* Private */,
      12,    0,   87,    2, 0x08,   10 /* Private */,
      13,    0,   88,    2, 0x08,   11 /* Private */,
      14,    2,   89,    2, 0x08,   12 /* Private */,
      15,    0,   94,    2, 0x08,   15 /* Private */,
      16,    0,   95,    2, 0x08,   16 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    9,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    9,   10,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void salecase::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<salecase *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->completeshow((*reinterpret_cast< std::add_pointer_t<mvs3>>(_a[1]))); break;
        case 1: _t->sellf((*reinterpret_cast< std::add_pointer_t<item>>(_a[1]))); break;
        case 2: _t->report2(); break;
        case 3: _t->slotCellEnter2((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 4: _t->on_pushButton_clicked(); break;
        case 5: _t->on_pushButton_3_clicked(); break;
        case 6: _t->on_pushButton_2_clicked(); break;
        case 7: _t->slotCellEnter3((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 8: _t->on_pushButton_4_clicked(); break;
        case 9: _t->on_pushButton_5_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject salecase::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_salecase.offsetsAndSize,
    qt_meta_data_salecase,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_salecase_t
, QtPrivate::TypeAndForceComplete<salecase, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<mvs3, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<item, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *salecase::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *salecase::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_salecase.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int salecase::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
