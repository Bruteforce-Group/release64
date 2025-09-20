/****************************************************************************
** Meta object code from reading C++ file 'wire.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../fritzing-app/src/items/wire.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'wire.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN10WireActionE_t {};
} // unnamed namespace

template <> constexpr inline auto WireAction::qt_create_metaobjectdata<qt_meta_tag_ZN10WireActionE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "WireAction"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<WireAction, qt_meta_tag_ZN10WireActionE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject WireAction::staticMetaObject = { {
    QMetaObject::SuperData::link<QAction::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10WireActionE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10WireActionE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN10WireActionE_t>.metaTypes,
    nullptr
} };

void WireAction::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<WireAction *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *WireAction::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WireAction::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10WireActionE_t>.strings))
        return static_cast<void*>(this);
    return QAction::qt_metacast(_clname);
}

int WireAction::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAction::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {
struct qt_meta_tag_ZN4WireE_t {};
} // unnamed namespace

template <> constexpr inline auto Wire::qt_create_metaobjectdata<qt_meta_tag_ZN4WireE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Wire",
        "wireChangedSignal",
        "",
        "Wire*",
        "me",
        "oldLine",
        "newLine",
        "oldPos",
        "newPos",
        "ConnectorItem*",
        "from",
        "to",
        "wireChangedCurveSignal",
        "const Bezier*",
        "oldB",
        "newB",
        "triggerFirstTime",
        "wireSplitSignal",
        "wireJoinSignal",
        "clickedConnectorItem",
        "colorEntry",
        "index",
        "setBandedProp"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'wireChangedSignal'
        QtMocHelpers::SignalData<void(Wire *, const QLineF &, const QLineF &, QPointF, QPointF, ConnectorItem *, ConnectorItem *)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { QMetaType::QLineF, 5 }, { QMetaType::QLineF, 6 }, { QMetaType::QPointF, 7 },
            { QMetaType::QPointF, 8 }, { 0x80000000 | 9, 10 }, { 0x80000000 | 9, 11 },
        }}),
        // Signal 'wireChangedCurveSignal'
        QtMocHelpers::SignalData<void(Wire *, const Bezier *, const Bezier *, bool)>(12, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { 0x80000000 | 13, 14 }, { 0x80000000 | 13, 15 }, { QMetaType::Bool, 16 },
        }}),
        // Signal 'wireSplitSignal'
        QtMocHelpers::SignalData<void(Wire *, QPointF, QPointF, const QLineF &)>(17, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { QMetaType::QPointF, 8 }, { QMetaType::QPointF, 7 }, { QMetaType::QLineF, 5 },
        }}),
        // Signal 'wireJoinSignal'
        QtMocHelpers::SignalData<void(Wire *, ConnectorItem *)>(18, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { 0x80000000 | 9, 19 },
        }}),
        // Slot 'colorEntry'
        QtMocHelpers::SlotData<void(int)>(20, 2, QMC::AccessProtected, QMetaType::Void, {{
            { QMetaType::Int, 21 },
        }}),
        // Slot 'setBandedProp'
        QtMocHelpers::SlotData<void(bool)>(22, 2, QMC::AccessProtected, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<Wire, qt_meta_tag_ZN4WireE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject Wire::staticMetaObject = { {
    QMetaObject::SuperData::link<ItemBase::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4WireE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4WireE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4WireE_t>.metaTypes,
    nullptr
} };

void Wire::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<Wire *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->wireChangedSignal((*reinterpret_cast< std::add_pointer_t<Wire*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QLineF>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QLineF>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QPointF>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<QPointF>>(_a[5])),(*reinterpret_cast< std::add_pointer_t<ConnectorItem*>>(_a[6])),(*reinterpret_cast< std::add_pointer_t<ConnectorItem*>>(_a[7]))); break;
        case 1: _t->wireChangedCurveSignal((*reinterpret_cast< std::add_pointer_t<Wire*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<const Bezier*>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<const Bezier*>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[4]))); break;
        case 2: _t->wireSplitSignal((*reinterpret_cast< std::add_pointer_t<Wire*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QPointF>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QPointF>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QLineF>>(_a[4]))); break;
        case 3: _t->wireJoinSignal((*reinterpret_cast< std::add_pointer_t<Wire*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<ConnectorItem*>>(_a[2]))); break;
        case 4: _t->colorEntry((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 5: _t->setBandedProp((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
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
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< Wire* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< Wire* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< Wire* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< Wire* >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (Wire::*)(Wire * , const QLineF & , const QLineF & , QPointF , QPointF , ConnectorItem * , ConnectorItem * )>(_a, &Wire::wireChangedSignal, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (Wire::*)(Wire * , const Bezier * , const Bezier * , bool )>(_a, &Wire::wireChangedCurveSignal, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (Wire::*)(Wire * , QPointF , QPointF , const QLineF & )>(_a, &Wire::wireSplitSignal, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (Wire::*)(Wire * , ConnectorItem * )>(_a, &Wire::wireJoinSignal, 3))
            return;
    }
}

const QMetaObject *Wire::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Wire::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4WireE_t>.strings))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "CursorKeyListener"))
        return static_cast< CursorKeyListener*>(this);
    return ItemBase::qt_metacast(_clname);
}

int Wire::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ItemBase::qt_metacall(_c, _id, _a);
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
void Wire::wireChangedSignal(Wire * _t1, const QLineF & _t2, const QLineF & _t3, QPointF _t4, QPointF _t5, ConnectorItem * _t6, ConnectorItem * _t7)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1, _t2, _t3, _t4, _t5, _t6, _t7);
}

// SIGNAL 1
void Wire::wireChangedCurveSignal(Wire * _t1, const Bezier * _t2, const Bezier * _t3, bool _t4)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1, _t2, _t3, _t4);
}

// SIGNAL 2
void Wire::wireSplitSignal(Wire * _t1, QPointF _t2, QPointF _t3, const QLineF & _t4)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1, _t2, _t3, _t4);
}

// SIGNAL 3
void Wire::wireJoinSignal(Wire * _t1, ConnectorItem * _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1, _t2);
}
QT_WARNING_POP
