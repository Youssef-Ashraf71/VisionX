/****************************************************************************
** Meta object code from reading C++ file 'activecontourwidget.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Task1/UI/activecontourwidget.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'activecontourwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.4.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
namespace {
struct qt_meta_stringdata_ActiveContourWidget_t {
    uint offsetsAndSizes[16];
    char stringdata0[20];
    char stringdata1[22];
    char stringdata2[1];
    char stringdata3[17];
    char stringdata4[21];
    char stringdata5[23];
    char stringdata6[5];
    char stringdata7[24];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_ActiveContourWidget_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_ActiveContourWidget_t qt_meta_stringdata_ActiveContourWidget = {
    {
        QT_MOC_LITERAL(0, 19),  // "ActiveContourWidget"
        QT_MOC_LITERAL(20, 21),  // "on_upload_btn_clicked"
        QT_MOC_LITERAL(42, 0),  // ""
        QT_MOC_LITERAL(43, 16),  // "on_clear_clicked"
        QT_MOC_LITERAL(60, 20),  // "reloadInitialContour"
        QT_MOC_LITERAL(81, 22),  // "on_raduis_valueChanged"
        QT_MOC_LITERAL(104, 4),  // "arg1"
        QT_MOC_LITERAL(109, 23)   // "on_generate_btn_clicked"
    },
    "ActiveContourWidget",
    "on_upload_btn_clicked",
    "",
    "on_clear_clicked",
    "reloadInitialContour",
    "on_raduis_valueChanged",
    "arg1",
    "on_generate_btn_clicked"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_ActiveContourWidget[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   44,    2, 0x08,    1 /* Private */,
       3,    0,   45,    2, 0x08,    2 /* Private */,
       4,    0,   46,    2, 0x08,    3 /* Private */,
       5,    1,   47,    2, 0x08,    4 /* Private */,
       7,    0,   50,    2, 0x08,    6 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject ActiveContourWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_ActiveContourWidget.offsetsAndSizes,
    qt_meta_data_ActiveContourWidget,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_ActiveContourWidget_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ActiveContourWidget, std::true_type>,
        // method 'on_upload_btn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_clear_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'reloadInitialContour'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_raduis_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_generate_btn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void ActiveContourWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ActiveContourWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_upload_btn_clicked(); break;
        case 1: _t->on_clear_clicked(); break;
        case 2: _t->reloadInitialContour(); break;
        case 3: _t->on_raduis_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->on_generate_btn_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject *ActiveContourWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ActiveContourWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ActiveContourWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ActiveContourWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
