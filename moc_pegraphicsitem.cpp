/****************************************************************************
** Meta object code from reading C++ file 'pegraphicsitem.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../fritzing-app/src/partseditor/pegraphicsitem.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pegraphicsitem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 69
#error "This file was generated using the moc from 6.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {
struct qt_meta_tag_ZN14PEGraphicsItemE_t {};
} // unnamed namespace

template <> constexpr inline auto PEGraphicsItem::qt_create_metaobjectdata<qt_meta_tag_ZN14PEGraphicsItemE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "PEGraphicsItem",
        "highlightSignal",
        "",
        "PEGraphicsItem*",
        "mousePressedSignal",
        "bool&",
        "ignore",
        "mouseReleasedSignal",
        "terminalPointMoved",
        "terminalPointChanged",
        "before",
        "after",
        "restoreColor"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'highlightSignal'
        QtMocHelpers::SignalData<void(PEGraphicsItem *)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 2 },
        }}),
        // Signal 'mousePressedSignal'
        QtMocHelpers::SignalData<void(PEGraphicsItem *, bool &)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 2 }, { 0x80000000 | 5, 6 },
        }}),
        // Signal 'mouseReleasedSignal'
        QtMocHelpers::SignalData<void(PEGraphicsItem *)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 2 },
        }}),
        // Signal 'terminalPointMoved'
        QtMocHelpers::SignalData<void(PEGraphicsItem *, QPointF)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 2 }, { QMetaType::QPointF, 2 },
        }}),
        // Signal 'terminalPointChanged'
        QtMocHelpers::SignalData<void(PEGraphicsItem *, QPointF, QPointF)>(9, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 2 }, { QMetaType::QPointF, 10 }, { QMetaType::QPointF, 11 },
        }}),
        // Slot 'restoreColor'
        QtMocHelpers::SlotData<void()>(12, 2, QMC::AccessProtected, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<PEGraphicsItem, qt_meta_tag_ZN14PEGraphicsItemE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject PEGraphicsItem::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14PEGraphicsItemE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14PEGraphicsItemE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN14PEGraphicsItemE_t>.metaTypes,
    nullptr
} };

void PEGraphicsItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<PEGraphicsItem *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->highlightSignal((*reinterpret_cast< std::add_pointer_t<PEGraphicsItem*>>(_a[1]))); break;
        case 1: _t->mousePressedSignal((*reinterpret_cast< std::add_pointer_t<PEGraphicsItem*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool&>>(_a[2]))); break;
        case 2: _t->mouseReleasedSignal((*reinterpret_cast< std::add_pointer_t<PEGraphicsItem*>>(_a[1]))); break;
        case 3: _t->terminalPointMoved((*reinterpret_cast< std::add_pointer_t<PEGraphicsItem*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QPointF>>(_a[2]))); break;
        case 4: _t->terminalPointChanged((*reinterpret_cast< std::add_pointer_t<PEGraphicsItem*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QPointF>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QPointF>>(_a[3]))); break;
        case 5: _t->restoreColor(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< PEGraphicsItem* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< PEGraphicsItem* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< PEGraphicsItem* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< PEGraphicsItem* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< PEGraphicsItem* >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (PEGraphicsItem::*)(PEGraphicsItem * )>(_a, &PEGraphicsItem::highlightSignal, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (PEGraphicsItem::*)(PEGraphicsItem * , bool & )>(_a, &PEGraphicsItem::mousePressedSignal, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (PEGraphicsItem::*)(PEGraphicsItem * )>(_a, &PEGraphicsItem::mouseReleasedSignal, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (PEGraphicsItem::*)(PEGraphicsItem * , QPointF )>(_a, &PEGraphicsItem::terminalPointMoved, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (PEGraphicsItem::*)(PEGraphicsItem * , QPointF , QPointF )>(_a, &PEGraphicsItem::terminalPointChanged, 4))
            return;
    }
}

const QMetaObject *PEGraphicsItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PEGraphicsItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14PEGraphicsItemE_t>.strings))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QGraphicsRectItem"))
        return static_cast< QGraphicsRectItem*>(this);
    return QObject::qt_metacast(_clname);
}

int PEGraphicsItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void PEGraphicsItem::highlightSignal(PEGraphicsItem * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void PEGraphicsItem::mousePressedSignal(PEGraphicsItem * _t1, bool & _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1, _t2);
}

// SIGNAL 2
void PEGraphicsItem::mouseReleasedSignal(PEGraphicsItem * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void PEGraphicsItem::terminalPointMoved(PEGraphicsItem * _t1, QPointF _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1, _t2);
}

// SIGNAL 4
void PEGraphicsItem::terminalPointChanged(PEGraphicsItem * _t1, QPointF _t2, QPointF _t3)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1, _t2, _t3);
}
QT_WARNING_POP
