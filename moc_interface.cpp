/****************************************************************************
** Meta object code from reading C++ file 'interface.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "interface.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'interface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TInterface_t {
    QByteArrayData data[13];
    char stringdata0[130];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TInterface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TInterface_t qt_meta_stringdata_TInterface = {
    {
QT_MOC_LITERAL(0, 0, 10), // "TInterface"
QT_MOC_LITERAL(1, 11, 5), // "value"
QT_MOC_LITERAL(2, 17, 0), // ""
QT_MOC_LITERAL(3, 18, 9), // "change_an"
QT_MOC_LITERAL(4, 28, 5), // "print"
QT_MOC_LITERAL(5, 34, 5), // "write"
QT_MOC_LITERAL(6, 40, 11), // "change_size"
QT_MOC_LITERAL(7, 52, 11), // "change_root"
QT_MOC_LITERAL(8, 64, 9), // "imp_value"
QT_MOC_LITERAL(9, 74, 13), // "imp_change_an"
QT_MOC_LITERAL(10, 88, 9), // "imp_print"
QT_MOC_LITERAL(11, 98, 15), // "imp_change_size"
QT_MOC_LITERAL(12, 114, 15) // "imp_change_root"

    },
    "TInterface\0value\0\0change_an\0print\0"
    "write\0change_size\0change_root\0imp_value\0"
    "imp_change_an\0imp_print\0imp_change_size\0"
    "imp_change_root"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TInterface[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x0a /* Public */,
       3,    0,   70,    2, 0x0a /* Public */,
       4,    0,   71,    2, 0x0a /* Public */,
       5,    0,   72,    2, 0x0a /* Public */,
       6,    0,   73,    2, 0x0a /* Public */,
       7,    0,   74,    2, 0x0a /* Public */,
       8,    0,   75,    2, 0x0a /* Public */,
       9,    0,   76,    2, 0x0a /* Public */,
      10,    0,   77,    2, 0x0a /* Public */,
      11,    0,   78,    2, 0x0a /* Public */,
      12,    0,   79,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void TInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TInterface *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->value(); break;
        case 1: _t->change_an(); break;
        case 2: _t->print(); break;
        case 3: _t->write(); break;
        case 4: _t->change_size(); break;
        case 5: _t->change_root(); break;
        case 6: _t->imp_value(); break;
        case 7: _t->imp_change_an(); break;
        case 8: _t->imp_print(); break;
        case 9: _t->imp_change_size(); break;
        case 10: _t->imp_change_root(); break;
        default: ;
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject TInterface::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_TInterface.data,
    qt_meta_data_TInterface,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TInterface.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int TInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
