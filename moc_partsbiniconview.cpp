/****************************************************************************
** Meta object code from reading C++ file 'partsbiniconview.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../fritzing-app/src/partsbinpalette/partsbiniconview.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'partsbiniconview.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN16PartsBinIconViewE_t {};
} // unnamed namespace

template <> constexpr inline auto PartsBinIconView::qt_create_metaobjectdata<qt_meta_tag_ZN16PartsBinIconViewE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "PartsBinIconView",
        "informItemMoved",
        "",
        "fromIndex",
        "toIndex",
        "selectionChanged",
        "index",
        "settingItem",
        "setSelected",
        "position",
        "doEmit",
        "informNewSelection",
        "itemMoved",
        "showContextMenu",
        "pos"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'informItemMoved'
        QtMocHelpers::SignalData<void(int, int)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 3 }, { QMetaType::Int, 4 },
        }}),
        // Signal 'selectionChanged'
        QtMocHelpers::SignalData<void(int)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 6 },
        }}),
        // Signal 'settingItem'
        QtMocHelpers::SignalData<void()>(7, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'setSelected'
        QtMocHelpers::SlotData<void(int, bool)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 9 }, { QMetaType::Bool, 10 },
        }}),
        // Slot 'setSelected'
        QtMocHelpers::SlotData<void(int)>(8, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void, {{
            { QMetaType::Int, 9 },
        }}),
        // Slot 'informNewSelection'
        QtMocHelpers::SlotData<void()>(11, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'itemMoved'
        QtMocHelpers::SlotData<void(int, int)>(12, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 3 }, { QMetaType::Int, 4 },
        }}),
        // Slot 'showContextMenu'
        QtMocHelpers::SlotData<void(const QPoint &)>(13, 2, QMC::AccessProtected, QMetaType::Void, {{
            { QMetaType::QPoint, 14 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<PartsBinIconView, qt_meta_tag_ZN16PartsBinIconViewE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject PartsBinIconView::staticMetaObject = { {
    QMetaObject::SuperData::link<InfoGraphicsView::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN16PartsBinIconViewE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN16PartsBinIconViewE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN16PartsBinIconViewE_t>.metaTypes,
    nullptr
} };

void PartsBinIconView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<PartsBinIconView *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->informItemMoved((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 1: _t->selectionChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->settingItem(); break;
        case 3: _t->setSelected((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 4: _t->setSelected((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 5: _t->informNewSelection(); break;
        case 6: _t->itemMoved((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 7: _t->showContextMenu((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (PartsBinIconView::*)(int , int )>(_a, &PartsBinIconView::informItemMoved, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (PartsBinIconView::*)(int )>(_a, &PartsBinIconView::selectionChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (PartsBinIconView::*)()>(_a, &PartsBinIconView::settingItem, 2))
            return;
    }
}

const QMetaObject *PartsBinIconView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PartsBinIconView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN16PartsBinIconViewE_t>.strings))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "PartsBinView"))
        return static_cast< PartsBinView*>(this);
    return InfoGraphicsView::qt_metacast(_clname);
}

int PartsBinIconView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = InfoGraphicsView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void PartsBinIconView::informItemMoved(int _t1, int _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1, _t2);
}

// SIGNAL 1
void PartsBinIconView::selectionChanged(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void PartsBinIconView::settingItem()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
