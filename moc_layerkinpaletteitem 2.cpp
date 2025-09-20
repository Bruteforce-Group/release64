/****************************************************************************
** Meta object code from reading C++ file 'layerkinpaletteitem.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../fritzing-app/src/items/layerkinpaletteitem.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'layerkinpaletteitem.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN19LayerKinPaletteItemE_t {};
} // unnamed namespace

template <> constexpr inline auto LayerKinPaletteItem::qt_create_metaobjectdata<qt_meta_tag_ZN19LayerKinPaletteItemE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "LayerKinPaletteItem"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<LayerKinPaletteItem, qt_meta_tag_ZN19LayerKinPaletteItemE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject LayerKinPaletteItem::staticMetaObject = { {
    QMetaObject::SuperData::link<PaletteItemBase::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN19LayerKinPaletteItemE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN19LayerKinPaletteItemE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN19LayerKinPaletteItemE_t>.metaTypes,
    nullptr
} };

void LayerKinPaletteItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<LayerKinPaletteItem *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *LayerKinPaletteItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LayerKinPaletteItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN19LayerKinPaletteItemE_t>.strings))
        return static_cast<void*>(this);
    return PaletteItemBase::qt_metacast(_clname);
}

int LayerKinPaletteItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PaletteItemBase::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {
struct qt_meta_tag_ZN32SchematicTextLayerKinPaletteItemE_t {};
} // unnamed namespace

template <> constexpr inline auto SchematicTextLayerKinPaletteItem::qt_create_metaobjectdata<qt_meta_tag_ZN32SchematicTextLayerKinPaletteItemE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "SchematicTextLayerKinPaletteItem"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<SchematicTextLayerKinPaletteItem, qt_meta_tag_ZN32SchematicTextLayerKinPaletteItemE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject SchematicTextLayerKinPaletteItem::staticMetaObject = { {
    QMetaObject::SuperData::link<LayerKinPaletteItem::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN32SchematicTextLayerKinPaletteItemE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN32SchematicTextLayerKinPaletteItemE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN32SchematicTextLayerKinPaletteItemE_t>.metaTypes,
    nullptr
} };

void SchematicTextLayerKinPaletteItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<SchematicTextLayerKinPaletteItem *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *SchematicTextLayerKinPaletteItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SchematicTextLayerKinPaletteItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN32SchematicTextLayerKinPaletteItemE_t>.strings))
        return static_cast<void*>(this);
    return LayerKinPaletteItem::qt_metacast(_clname);
}

int SchematicTextLayerKinPaletteItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = LayerKinPaletteItem::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
