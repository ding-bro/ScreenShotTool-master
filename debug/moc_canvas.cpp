/****************************************************************************
** Meta object code from reading C++ file 'canvas.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../canvas.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'canvas.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Canvas_t {
    QByteArrayData data[16];
    char stringdata0[209];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Canvas_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Canvas_t qt_meta_stringdata_Canvas = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Canvas"
QT_MOC_LITERAL(1, 7, 12), // "slt_drawLine"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 12), // "slt_drawRect"
QT_MOC_LITERAL(4, 34, 15), // "slt_drawEllipse"
QT_MOC_LITERAL(5, 50, 12), // "slt_drawText"
QT_MOC_LITERAL(6, 63, 12), // "slt_saveFile"
QT_MOC_LITERAL(7, 76, 17), // "slt_saveClipboard"
QT_MOC_LITERAL(8, 94, 10), // "slt_cancel"
QT_MOC_LITERAL(9, 105, 18), // "slt_changePenWidth"
QT_MOC_LITERAL(10, 124, 1), // "s"
QT_MOC_LITERAL(11, 126, 18), // "slt_changePenColor"
QT_MOC_LITERAL(12, 145, 18), // "slt_changePenStyle"
QT_MOC_LITERAL(13, 164, 5), // "index"
QT_MOC_LITERAL(14, 170, 19), // "slt_changeTextColor"
QT_MOC_LITERAL(15, 190, 18) // "slt_changeTextFont"

    },
    "Canvas\0slt_drawLine\0\0slt_drawRect\0"
    "slt_drawEllipse\0slt_drawText\0slt_saveFile\0"
    "slt_saveClipboard\0slt_cancel\0"
    "slt_changePenWidth\0s\0slt_changePenColor\0"
    "slt_changePenStyle\0index\0slt_changeTextColor\0"
    "slt_changeTextFont"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Canvas[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x0a /* Public */,
       3,    0,   75,    2, 0x0a /* Public */,
       4,    0,   76,    2, 0x0a /* Public */,
       5,    0,   77,    2, 0x0a /* Public */,
       6,    0,   78,    2, 0x0a /* Public */,
       7,    0,   79,    2, 0x0a /* Public */,
       8,    0,   80,    2, 0x0a /* Public */,
       9,    1,   81,    2, 0x0a /* Public */,
      11,    0,   84,    2, 0x0a /* Public */,
      12,    1,   85,    2, 0x0a /* Public */,
      14,    0,   88,    2, 0x0a /* Public */,
      15,    0,   89,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Canvas::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Canvas *_t = static_cast<Canvas *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slt_drawLine(); break;
        case 1: _t->slt_drawRect(); break;
        case 2: _t->slt_drawEllipse(); break;
        case 3: _t->slt_drawText(); break;
        case 4: _t->slt_saveFile(); break;
        case 5: _t->slt_saveClipboard(); break;
        case 6: _t->slt_cancel(); break;
        case 7: _t->slt_changePenWidth((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: _t->slt_changePenColor(); break;
        case 9: _t->slt_changePenStyle((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->slt_changeTextColor(); break;
        case 11: _t->slt_changeTextFont(); break;
        default: ;
        }
    }
}

const QMetaObject Canvas::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Canvas.data,
      qt_meta_data_Canvas,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Canvas::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Canvas::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Canvas.stringdata0))
        return static_cast<void*>(const_cast< Canvas*>(this));
    return QWidget::qt_metacast(_clname);
}

int Canvas::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
