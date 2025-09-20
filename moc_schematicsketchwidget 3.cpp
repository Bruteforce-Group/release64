/****************************************************************************
** Meta object code from reading C++ file 'schematicsketchwidget.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../fritzing-app/src/sketch/schematicsketchwidget.h"
#include <QtGui/qtextcursor.h>
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'schematicsketchwidget.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN21SchematicSketchWidgetE_t {};
} // unnamed namespace

template <> constexpr inline auto SchematicSketchWidget::qt_create_metaobjectdata<qt_meta_tag_ZN21SchematicSketchWidgetE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "SchematicSketchWidget",
        "setVoltage",
        "",
        "voltage",
        "doEmit",
        "setProp",
        "ItemBase*",
        "propName",
        "translatedPropName",
        "oldValue",
        "newValue",
        "redraw",
        "setInstanceTitleForCommand",
        "id",
        "oldTitle",
        "newTitle",
        "isUndoable",
        "updateBigDots",
        "getDroppedItemViewLayerPlacement",
        "ModelPart*",
        "modelPart",
        "ViewLayer::ViewLayerPlacement&"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'setVoltage'
        QtMocHelpers::SlotData<void(double, bool)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Double, 3 }, { QMetaType::Bool, 4 },
        }}),
        // Slot 'setProp'
        QtMocHelpers::SlotData<void(ItemBase *, const QString &, const QString &, const QString &, const QString &, bool)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 6, 2 }, { QMetaType::QString, 7 }, { QMetaType::QString, 8 }, { QMetaType::QString, 9 },
            { QMetaType::QString, 10 }, { QMetaType::Bool, 11 },
        }}),
        // Slot 'setInstanceTitleForCommand'
        QtMocHelpers::SlotData<void(long, const QString &, const QString &, bool, bool)>(12, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Long, 13 }, { QMetaType::QString, 14 }, { QMetaType::QString, 15 }, { QMetaType::Bool, 16 },
            { QMetaType::Bool, 4 },
        }}),
        // Slot 'updateBigDots'
        QtMocHelpers::SlotData<void()>(17, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'getDroppedItemViewLayerPlacement'
        QtMocHelpers::SlotData<void(ModelPart *, ViewLayer::ViewLayerPlacement &)>(18, 2, QMC::AccessProtected, QMetaType::Void, {{
            { 0x80000000 | 19, 20 }, { 0x80000000 | 21, 2 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<SchematicSketchWidget, qt_meta_tag_ZN21SchematicSketchWidgetE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject SchematicSketchWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<PCBSketchWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN21SchematicSketchWidgetE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN21SchematicSketchWidgetE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN21SchematicSketchWidgetE_t>.metaTypes,
    nullptr
} };

void SchematicSketchWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<SchematicSketchWidget *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->setVoltage((*reinterpret_cast< std::add_pointer_t<double>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 1: _t->setProp((*reinterpret_cast< std::add_pointer_t<ItemBase*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[5])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[6]))); break;
        case 2: _t->setInstanceTitleForCommand((*reinterpret_cast< std::add_pointer_t<long>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[5]))); break;
        case 3: _t->updateBigDots(); break;
        case 4: _t->getDroppedItemViewLayerPlacement((*reinterpret_cast< std::add_pointer_t<ModelPart*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<ViewLayer::ViewLayerPlacement&>>(_a[2]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< ItemBase* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< ModelPart* >(); break;
            }
            break;
        }
    }
}

const QMetaObject *SchematicSketchWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SchematicSketchWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN21SchematicSketchWidgetE_t>.strings))
        return static_cast<void*>(this);
    return PCBSketchWidget::qt_metacast(_clname);
}

int SchematicSketchWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PCBSketchWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
