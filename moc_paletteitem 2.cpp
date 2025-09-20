/****************************************************************************
** Meta object code from reading C++ file 'paletteitem.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../fritzing-app/src/items/paletteitem.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'paletteitem.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN11PaletteItemE_t {};
} // unnamed namespace

template <> constexpr inline auto PaletteItem::qt_create_metaobjectdata<qt_meta_tag_ZN11PaletteItemE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "PaletteItem",
        "pinLabelSwap",
        "",
        "ItemBase*",
        "moduleID",
        "openPinLabelDialog",
        "changeHoleSize",
        "changeUnits",
        "changeDiameter",
        "changeThickness"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'pinLabelSwap'
        QtMocHelpers::SignalData<void(ItemBase *, const QString &)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 2 }, { QMetaType::QString, 4 },
        }}),
        // Slot 'openPinLabelDialog'
        QtMocHelpers::SlotData<void()>(5, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'changeHoleSize'
        QtMocHelpers::SlotData<void(int)>(6, 2, QMC::AccessProtected, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Slot 'changeUnits'
        QtMocHelpers::SlotData<void(bool)>(7, 2, QMC::AccessProtected, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Slot 'changeDiameter'
        QtMocHelpers::SlotData<void()>(8, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'changeThickness'
        QtMocHelpers::SlotData<void()>(9, 2, QMC::AccessProtected, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<PaletteItem, qt_meta_tag_ZN11PaletteItemE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject PaletteItem::staticMetaObject = { {
    QMetaObject::SuperData::link<PaletteItemBase::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11PaletteItemE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11PaletteItemE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN11PaletteItemE_t>.metaTypes,
    nullptr
} };

void PaletteItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<PaletteItem *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->pinLabelSwap((*reinterpret_cast< std::add_pointer_t<ItemBase*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 1: _t->openPinLabelDialog(); break;
        case 2: _t->changeHoleSize((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->changeUnits((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 4: _t->changeDiameter(); break;
        case 5: _t->changeThickness(); break;
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
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< ItemBase* >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (PaletteItem::*)(ItemBase * , const QString & )>(_a, &PaletteItem::pinLabelSwap, 0))
            return;
    }
}

const QMetaObject *PaletteItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PaletteItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11PaletteItemE_t>.strings))
        return static_cast<void*>(this);
    return PaletteItemBase::qt_metacast(_clname);
}

int PaletteItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PaletteItemBase::qt_metacall(_c, _id, _a);
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
void PaletteItem::pinLabelSwap(ItemBase * _t1, const QString & _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1, _t2);
}
QT_WARNING_POP
