/****************************************************************************
** Meta object code from reading C++ file 'screenshottool.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../screenshottool.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'screenshottool.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ScreenShotTool_t {
    QByteArrayData data[19];
    char stringdata0[237];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ScreenShotTool_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ScreenShotTool_t qt_meta_stringdata_ScreenShotTool = {
    {
QT_MOC_LITERAL(0, 0, 14), // "ScreenShotTool"
QT_MOC_LITERAL(1, 15, 7), // "appQuit"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 13), // "slt_clickTray"
QT_MOC_LITERAL(4, 38, 33), // "QSystemTrayIcon::ActivationRe..."
QT_MOC_LITERAL(5, 72, 6), // "reason"
QT_MOC_LITERAL(6, 79, 13), // "slt_setAction"
QT_MOC_LITERAL(7, 93, 15), // "slt_aboutAction"
QT_MOC_LITERAL(8, 109, 14), // "slt_exitAction"
QT_MOC_LITERAL(9, 124, 16), // "slt_changeHotKey"
QT_MOC_LITERAL(10, 141, 7), // "Qt::Key"
QT_MOC_LITERAL(11, 149, 5), // "t_key"
QT_MOC_LITERAL(12, 155, 21), // "Qt::KeyboardModifiers"
QT_MOC_LITERAL(13, 177, 5), // "t_mod"
QT_MOC_LITERAL(14, 183, 12), // "slt_auto_run"
QT_MOC_LITERAL(15, 196, 6), // "states"
QT_MOC_LITERAL(16, 203, 16), // "slt_language_set"
QT_MOC_LITERAL(17, 220, 5), // "index"
QT_MOC_LITERAL(18, 226, 10) // "slt_doShot"

    },
    "ScreenShotTool\0appQuit\0\0slt_clickTray\0"
    "QSystemTrayIcon::ActivationReason\0"
    "reason\0slt_setAction\0slt_aboutAction\0"
    "slt_exitAction\0slt_changeHotKey\0Qt::Key\0"
    "t_key\0Qt::KeyboardModifiers\0t_mod\0"
    "slt_auto_run\0states\0slt_language_set\0"
    "index\0slt_doShot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ScreenShotTool[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   60,    2, 0x08 /* Private */,
       6,    0,   63,    2, 0x08 /* Private */,
       7,    0,   64,    2, 0x08 /* Private */,
       8,    0,   65,    2, 0x08 /* Private */,
       9,    2,   66,    2, 0x08 /* Private */,
      14,    1,   71,    2, 0x08 /* Private */,
      16,    1,   74,    2, 0x08 /* Private */,
      18,    0,   77,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10, 0x80000000 | 12,   11,   13,
    QMetaType::Void, QMetaType::Int,   15,
    QMetaType::Void, QMetaType::Int,   17,
    QMetaType::Void,

       0        // eod
};

void ScreenShotTool::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ScreenShotTool *_t = static_cast<ScreenShotTool *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->appQuit(); break;
        case 1: _t->slt_clickTray((*reinterpret_cast< QSystemTrayIcon::ActivationReason(*)>(_a[1]))); break;
        case 2: _t->slt_setAction(); break;
        case 3: _t->slt_aboutAction(); break;
        case 4: _t->slt_exitAction(); break;
        case 5: _t->slt_changeHotKey((*reinterpret_cast< Qt::Key(*)>(_a[1])),(*reinterpret_cast< Qt::KeyboardModifiers(*)>(_a[2]))); break;
        case 6: _t->slt_auto_run((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->slt_language_set((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->slt_doShot(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ScreenShotTool::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ScreenShotTool::appQuit)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject ScreenShotTool::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ScreenShotTool.data,
      qt_meta_data_ScreenShotTool,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ScreenShotTool::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ScreenShotTool::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ScreenShotTool.stringdata0))
        return static_cast<void*>(const_cast< ScreenShotTool*>(this));
    return QWidget::qt_metacast(_clname);
}

int ScreenShotTool::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void ScreenShotTool::appQuit()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
