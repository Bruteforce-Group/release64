/****************************************************************************
** Meta object code from reading C++ file 'sketchwidget.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../fritzing-app/src/sketch/sketchwidget.h"
#include <QtGui/qtextcursor.h>
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#include <QtCore/QSet>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sketchwidget.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN8SizeItemE_t {};
} // unnamed namespace

template <> constexpr inline auto SizeItem::qt_create_metaobjectdata<qt_meta_tag_ZN8SizeItemE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "SizeItem"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<SizeItem, qt_meta_tag_ZN8SizeItemE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject SizeItem::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN8SizeItemE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN8SizeItemE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN8SizeItemE_t>.metaTypes,
    nullptr
} };

void SizeItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<SizeItem *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *SizeItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SizeItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN8SizeItemE_t>.strings))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QGraphicsLineItem"))
        return static_cast< QGraphicsLineItem*>(this);
    return QObject::qt_metacast(_clname);
}

int SizeItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {
struct qt_meta_tag_ZN12SketchWidgetE_t {};
} // unnamed namespace

template <> constexpr inline auto SketchWidget::qt_create_metaobjectdata<qt_meta_tag_ZN12SketchWidgetE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "SketchWidget",
        "itemAddedSignal",
        "",
        "ModelPart*",
        "ItemBase*",
        "ViewLayer::ViewLayerPlacement",
        "ViewGeometry",
        "id",
        "SketchWidget*",
        "dropOrigin",
        "itemDeletedSignal",
        "clearSelectionSignal",
        "itemSelectedSignal",
        "state",
        "itemMovedSignal",
        "wireDisconnectedSignal",
        "fromID",
        "fromConnectorID",
        "wireConnectedSignal",
        "toID",
        "toConnectorID",
        "changeConnectionSignal",
        "connect",
        "updateConnections",
        "copyBoundingRectsSignal",
        "QHash<QString,QRectF>&",
        "cleanUpWiresSignal",
        "CleanUpWiresCommand*",
        "selectionChangedSignal",
        "resizeSignal",
        "dropSignal",
        "pos",
        "routingStatusSignal",
        "RoutingStatus",
        "movingSignal",
        "QUndoCommand*",
        "parentCommand",
        "selectAllItemsSignal",
        "doEmit",
        "checkStickySignal",
        "checkCurrent",
        "CheckStickyCommand*",
        "disconnectAllSignal",
        "QList<ConnectorItem*>",
        "QHash<ItemBase*,SketchWidget*>&",
        "itemsToDelete",
        "setResistanceSignal",
        "itemID",
        "resistance",
        "pinSpacing",
        "setPropSignal",
        "prop",
        "value",
        "doRedraw",
        "setInstanceTitleSignal",
        "oldTitle",
        "newTitle",
        "isUndoable",
        "statusMessageSignal",
        "timeout",
        "showLabelFirstTimeSignal",
        "show",
        "dropPasteSignal",
        "changeBoardLayersSignal",
        "deleteTracesSignal",
        "QSet<ItemBase*>&",
        "deletedItems",
        "otherDeletedItems",
        "QList<long>&",
        "deletedIDs",
        "isForeign",
        "makeDeleteItemCommandPrepSignal",
        "itemBase",
        "foreign",
        "makeDeleteItemCommandFinalSignal",
        "cursorLocationSignal",
        "xinches",
        "yinches",
        "width",
        "height",
        "ratsnestConnectSignal",
        "connectorID",
        "updatePartLabelInstanceTitleSignal",
        "filenameIfSignal",
        "QString&",
        "filename",
        "collectRatsnestSignal",
        "QList<SketchWidget*>&",
        "foreignSketchWidgets",
        "removeRatsnestSignal",
        "QList<ConnectorEdge*>&",
        "cutSet",
        "updateLayerMenuSignal",
        "swapBoardImageSignal",
        "sketchWidget",
        "moduleID",
        "addName",
        "canConnectSignal",
        "Wire*",
        "from",
        "to",
        "bool&",
        "swapStartSignal",
        "SwapThing&",
        "swapThing",
        "master",
        "showing",
        "clickedItemCandidateSignal",
        "QGraphicsItem*",
        "ok",
        "resizedSignal",
        "cleanupRatsnestsSignal",
        "addSubpartSignal",
        "subpartID",
        "removeSubpartSignal",
        "getDroppedItemViewLayerPlacementSignal",
        "modelPart",
        "ViewLayer::ViewLayerPlacement&",
        "packItemsSignal",
        "columns",
        "QList<long>",
        "ids",
        "parent",
        "routingCheckSignal",
        "disableUndoRedo",
        "enableUndoRedo",
        "undoSignal",
        "itemAddedSlot",
        "itemDeletedSlot",
        "clearSelectionSlot",
        "itemSelectedSlot",
        "selectionChangedSlot",
        "wireChangedSlot",
        "oldLine",
        "newLine",
        "oldPos",
        "newPos",
        "ConnectorItem*",
        "wireChangedCurveSlot",
        "const Bezier*",
        "oldB",
        "newB",
        "triggerFirstTime",
        "wireSplitSlot",
        "wireJoinSlot",
        "clickedConnectorItem",
        "toggleLayerVisibility",
        "wireConnectedSlot",
        "wireDisconnectedSlot",
        "changeConnectionSlot",
        "restartPasteCount",
        "dragIsDoneSlot",
        "ItemDrag*",
        "statusMessage",
        "message",
        "cleanUpWiresSlot",
        "updateInfoViewSlot",
        "spaceBarIsPressedSlot",
        "autoScrollTimeout",
        "dragAutoScrollTimeout",
        "moveAutoScrollTimeout",
        "rememberSticky",
        "copyBoundingRectsSlot",
        "deleteRatsnest",
        "deleteTracesSlot",
        "vScrollToZero",
        "arrowTimerTimeout",
        "makeDeleteItemCommandPrepSlot",
        "makeDeleteItemCommandFinalSlot",
        "updatePartLabelInstanceTitleSlot",
        "changePinLabelsSlot",
        "changePinLabels",
        "collectRatsnestSlot",
        "removeRatsnestSlot",
        "deleteTemporary",
        "canConnect",
        "swapStart",
        "getDroppedItemViewLayerPlacement",
        "changeWireColor",
        "newColor",
        "changeWireWidthMils",
        "newWidth",
        "selectAllItems",
        "setInstanceTitleForCommand",
        "checkStickyForCommand",
        "resizeBoard",
        "w",
        "h",
        "disconnectAllSlot",
        "setResistance",
        "setProp",
        "redraw",
        "propName",
        "translatedPropName",
        "oldValue",
        "newValue",
        "setHoleSize",
        "QRectF&",
        "oldRect",
        "newRect",
        "showLabelFirstTimeForCommand",
        "changeBoardLayers",
        "layers",
        "updateConnectors",
        "ratsnestConnectForCommand",
        "cleanupRatsnestsForCommand",
        "addSubpartForCommand",
        "subpartid",
        "removeSubpartForCommand",
        "packItemsForCommand",
        "triggerArrowTimer",
        "gridColor",
        "ratsnestWidth",
        "ratsnestOpacity"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'itemAddedSignal'
        QtMocHelpers::SignalData<void(ModelPart *, ItemBase *, ViewLayer::ViewLayerPlacement, const ViewGeometry &, long, SketchWidget *)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 2 }, { 0x80000000 | 4, 2 }, { 0x80000000 | 5, 2 }, { 0x80000000 | 6, 2 },
            { QMetaType::Long, 7 }, { 0x80000000 | 8, 9 },
        }}),
        // Signal 'itemDeletedSignal'
        QtMocHelpers::SignalData<void(long)>(10, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Long, 7 },
        }}),
        // Signal 'clearSelectionSignal'
        QtMocHelpers::SignalData<void()>(11, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'itemSelectedSignal'
        QtMocHelpers::SignalData<void(long, bool)>(12, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Long, 7 }, { QMetaType::Bool, 13 },
        }}),
        // Signal 'itemMovedSignal'
        QtMocHelpers::SignalData<void(ItemBase *)>(14, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 4, 2 },
        }}),
        // Signal 'wireDisconnectedSignal'
        QtMocHelpers::SignalData<void(long, QString)>(15, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Long, 16 }, { QMetaType::QString, 17 },
        }}),
        // Signal 'wireConnectedSignal'
        QtMocHelpers::SignalData<void(long, QString, long, QString)>(18, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Long, 16 }, { QMetaType::QString, 17 }, { QMetaType::Long, 19 }, { QMetaType::QString, 20 },
        }}),
        // Signal 'changeConnectionSignal'
        QtMocHelpers::SignalData<void(long, QString, long, QString, ViewLayer::ViewLayerPlacement, bool, bool)>(21, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Long, 16 }, { QMetaType::QString, 17 }, { QMetaType::Long, 19 }, { QMetaType::QString, 20 },
            { 0x80000000 | 5, 2 }, { QMetaType::Bool, 22 }, { QMetaType::Bool, 23 },
        }}),
        // Signal 'copyBoundingRectsSignal'
        QtMocHelpers::SignalData<void(QHash<QString,QRectF> &)>(24, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 25, 2 },
        }}),
        // Signal 'cleanUpWiresSignal'
        QtMocHelpers::SignalData<void(CleanUpWiresCommand *)>(26, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 27, 2 },
        }}),
        // Signal 'selectionChangedSignal'
        QtMocHelpers::SignalData<void()>(28, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'resizeSignal'
        QtMocHelpers::SignalData<void()>(29, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'dropSignal'
        QtMocHelpers::SignalData<void(const QPoint &)>(30, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QPoint, 31 },
        }}),
        // Signal 'routingStatusSignal'
        QtMocHelpers::SignalData<void(SketchWidget *, const RoutingStatus &)>(32, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 8, 2 }, { 0x80000000 | 33, 2 },
        }}),
        // Signal 'movingSignal'
        QtMocHelpers::SignalData<void(SketchWidget *, QUndoCommand *)>(34, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 8, 2 }, { 0x80000000 | 35, 36 },
        }}),
        // Signal 'selectAllItemsSignal'
        QtMocHelpers::SignalData<void(bool, bool)>(37, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 13 }, { QMetaType::Bool, 38 },
        }}),
        // Signal 'checkStickySignal'
        QtMocHelpers::SignalData<void(long, bool, bool, CheckStickyCommand *)>(39, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Long, 7 }, { QMetaType::Bool, 38 }, { QMetaType::Bool, 40 }, { 0x80000000 | 41, 2 },
        }}),
        // Signal 'disconnectAllSignal'
        QtMocHelpers::SignalData<void(QList<ConnectorItem*>, QHash<ItemBase*,SketchWidget*> &, QUndoCommand *)>(42, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 43, 2 }, { 0x80000000 | 44, 45 }, { 0x80000000 | 35, 36 },
        }}),
        // Signal 'setResistanceSignal'
        QtMocHelpers::SignalData<void(long, QString, QString, bool)>(46, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Long, 47 }, { QMetaType::QString, 48 }, { QMetaType::QString, 49 }, { QMetaType::Bool, 38 },
        }}),
        // Signal 'setPropSignal'
        QtMocHelpers::SignalData<void(long, const QString &, const QString &, bool, bool)>(50, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Long, 47 }, { QMetaType::QString, 51 }, { QMetaType::QString, 52 }, { QMetaType::Bool, 53 },
            { QMetaType::Bool, 38 },
        }}),
        // Signal 'setInstanceTitleSignal'
        QtMocHelpers::SignalData<void(long, const QString &, const QString &, bool, bool)>(54, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Long, 7 }, { QMetaType::QString, 55 }, { QMetaType::QString, 56 }, { QMetaType::Bool, 57 },
            { QMetaType::Bool, 38 },
        }}),
        // Signal 'statusMessageSignal'
        QtMocHelpers::SignalData<void(QString, int)>(58, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 2 }, { QMetaType::Int, 59 },
        }}),
        // Signal 'showLabelFirstTimeSignal'
        QtMocHelpers::SignalData<void(long, bool, bool)>(60, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Long, 47 }, { QMetaType::Bool, 61 }, { QMetaType::Bool, 38 },
        }}),
        // Signal 'dropPasteSignal'
        QtMocHelpers::SignalData<void(SketchWidget *)>(62, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 8, 2 },
        }}),
        // Signal 'changeBoardLayersSignal'
        QtMocHelpers::SignalData<void(int, bool)>(63, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 2 }, { QMetaType::Bool, 38 },
        }}),
        // Signal 'deleteTracesSignal'
        QtMocHelpers::SignalData<void(QSet<ItemBase*> &, QHash<ItemBase*,SketchWidget*> &, QList<long> &, bool, QUndoCommand *)>(64, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 65, 66 }, { 0x80000000 | 44, 67 }, { 0x80000000 | 68, 69 }, { QMetaType::Bool, 70 },
            { 0x80000000 | 35, 36 },
        }}),
        // Signal 'makeDeleteItemCommandPrepSignal'
        QtMocHelpers::SignalData<void(ItemBase *, bool, QUndoCommand *)>(71, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 4, 72 }, { QMetaType::Bool, 73 }, { 0x80000000 | 35, 36 },
        }}),
        // Signal 'makeDeleteItemCommandFinalSignal'
        QtMocHelpers::SignalData<void(ItemBase *, bool, QUndoCommand *)>(74, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 4, 72 }, { QMetaType::Bool, 73 }, { 0x80000000 | 35, 36 },
        }}),
        // Signal 'cursorLocationSignal'
        QtMocHelpers::SignalData<void(double, double, double, double)>(75, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Double, 76 }, { QMetaType::Double, 77 }, { QMetaType::Double, 78 }, { QMetaType::Double, 79 },
        }}),
        // Signal 'cursorLocationSignal'
        QtMocHelpers::SignalData<void(double, double, double)>(75, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void, {{
            { QMetaType::Double, 76 }, { QMetaType::Double, 77 }, { QMetaType::Double, 78 },
        }}),
        // Signal 'cursorLocationSignal'
        QtMocHelpers::SignalData<void(double, double)>(75, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void, {{
            { QMetaType::Double, 76 }, { QMetaType::Double, 77 },
        }}),
        // Signal 'ratsnestConnectSignal'
        QtMocHelpers::SignalData<void(long, const QString &, bool, bool)>(80, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Long, 7 }, { QMetaType::QString, 81 }, { QMetaType::Bool, 22 }, { QMetaType::Bool, 38 },
        }}),
        // Signal 'updatePartLabelInstanceTitleSignal'
        QtMocHelpers::SignalData<void(long)>(82, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Long, 47 },
        }}),
        // Signal 'filenameIfSignal'
        QtMocHelpers::SignalData<void(QString &)>(83, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 84, 85 },
        }}),
        // Signal 'collectRatsnestSignal'
        QtMocHelpers::SignalData<void(QList<SketchWidget*> &)>(86, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 87, 88 },
        }}),
        // Signal 'removeRatsnestSignal'
        QtMocHelpers::SignalData<void(QList<struct ConnectorEdge*> &, QUndoCommand *)>(89, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 90, 91 }, { 0x80000000 | 35, 36 },
        }}),
        // Signal 'updateLayerMenuSignal'
        QtMocHelpers::SignalData<void()>(92, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'swapBoardImageSignal'
        QtMocHelpers::SignalData<void(SketchWidget *, ItemBase *, const QString &, const QString &, bool)>(93, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 8, 94 }, { 0x80000000 | 4, 72 }, { QMetaType::QString, 85 }, { QMetaType::QString, 95 },
            { QMetaType::Bool, 96 },
        }}),
        // Signal 'canConnectSignal'
        QtMocHelpers::SignalData<void(Wire *, ItemBase *, bool &)>(97, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 98, 99 }, { 0x80000000 | 4, 100 }, { 0x80000000 | 101, 22 },
        }}),
        // Signal 'swapStartSignal'
        QtMocHelpers::SignalData<void(SwapThing &, bool)>(102, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 103, 104 }, { QMetaType::Bool, 105 },
        }}),
        // Signal 'showing'
        QtMocHelpers::SignalData<void(SketchWidget *)>(106, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 8, 2 },
        }}),
        // Signal 'clickedItemCandidateSignal'
        QtMocHelpers::SignalData<void(QGraphicsItem *, bool &)>(107, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 108, 2 }, { 0x80000000 | 101, 109 },
        }}),
        // Signal 'resizedSignal'
        QtMocHelpers::SignalData<void(ItemBase *)>(110, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 4, 2 },
        }}),
        // Signal 'cleanupRatsnestsSignal'
        QtMocHelpers::SignalData<void(bool)>(111, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 38 },
        }}),
        // Signal 'addSubpartSignal'
        QtMocHelpers::SignalData<void(long, long, bool)>(112, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Long, 7 }, { QMetaType::Long, 113 }, { QMetaType::Bool, 38 },
        }}),
        // Signal 'removeSubpartSignal'
        QtMocHelpers::SignalData<void(long, long, bool)>(114, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Long, 7 }, { QMetaType::Long, 113 }, { QMetaType::Bool, 38 },
        }}),
        // Signal 'getDroppedItemViewLayerPlacementSignal'
        QtMocHelpers::SignalData<void(ModelPart *, ViewLayer::ViewLayerPlacement &)>(115, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 116 }, { 0x80000000 | 117, 2 },
        }}),
        // Signal 'packItemsSignal'
        QtMocHelpers::SignalData<void(int, const QList<long> &, QUndoCommand *, bool)>(118, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 119 }, { 0x80000000 | 120, 121 }, { 0x80000000 | 35, 122 }, { QMetaType::Bool, 38 },
        }}),
        // Signal 'routingCheckSignal'
        QtMocHelpers::SignalData<void()>(123, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'disableUndoRedo'
        QtMocHelpers::SignalData<void()>(124, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'enableUndoRedo'
        QtMocHelpers::SignalData<void()>(125, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'undoSignal'
        QtMocHelpers::SignalData<void()>(126, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'itemAddedSlot'
        QtMocHelpers::SlotData<void(ModelPart *, ItemBase *, ViewLayer::ViewLayerPlacement, const ViewGeometry &, long, SketchWidget *)>(127, 2, QMC::AccessProtected, QMetaType::Void, {{
            { 0x80000000 | 3, 2 }, { 0x80000000 | 4, 2 }, { 0x80000000 | 5, 2 }, { 0x80000000 | 6, 2 },
            { QMetaType::Long, 7 }, { 0x80000000 | 8, 9 },
        }}),
        // Slot 'itemDeletedSlot'
        QtMocHelpers::SlotData<void(long)>(128, 2, QMC::AccessProtected, QMetaType::Void, {{
            { QMetaType::Long, 7 },
        }}),
        // Slot 'clearSelectionSlot'
        QtMocHelpers::SlotData<void()>(129, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'itemSelectedSlot'
        QtMocHelpers::SlotData<void(long, bool)>(130, 2, QMC::AccessProtected, QMetaType::Void, {{
            { QMetaType::Long, 7 }, { QMetaType::Bool, 13 },
        }}),
        // Slot 'selectionChangedSlot'
        QtMocHelpers::SlotData<void()>(131, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'wireChangedSlot'
        QtMocHelpers::SlotData<void(Wire *, const QLineF &, const QLineF &, QPointF, QPointF, ConnectorItem *, ConnectorItem *)>(132, 2, QMC::AccessProtected, QMetaType::Void, {{
            { 0x80000000 | 98, 2 }, { QMetaType::QLineF, 133 }, { QMetaType::QLineF, 134 }, { QMetaType::QPointF, 135 },
            { QMetaType::QPointF, 136 }, { 0x80000000 | 137, 99 }, { 0x80000000 | 137, 100 },
        }}),
        // Slot 'wireChangedCurveSlot'
        QtMocHelpers::SlotData<void(Wire *, const Bezier *, const Bezier *, bool)>(138, 2, QMC::AccessProtected, QMetaType::Void, {{
            { 0x80000000 | 98, 2 }, { 0x80000000 | 139, 140 }, { 0x80000000 | 139, 141 }, { QMetaType::Bool, 142 },
        }}),
        // Slot 'wireSplitSlot'
        QtMocHelpers::SlotData<void(Wire *, QPointF, QPointF, const QLineF &)>(143, 2, QMC::AccessProtected, QMetaType::Void, {{
            { 0x80000000 | 98, 2 }, { QMetaType::QPointF, 136 }, { QMetaType::QPointF, 135 }, { QMetaType::QLineF, 133 },
        }}),
        // Slot 'wireJoinSlot'
        QtMocHelpers::SlotData<void(Wire *, ConnectorItem *)>(144, 2, QMC::AccessProtected, QMetaType::Void, {{
            { 0x80000000 | 98, 2 }, { 0x80000000 | 137, 145 },
        }}),
        // Slot 'toggleLayerVisibility'
        QtMocHelpers::SlotData<void()>(146, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'wireConnectedSlot'
        QtMocHelpers::SlotData<void(long, QString, long, QString)>(147, 2, QMC::AccessProtected, QMetaType::Void, {{
            { QMetaType::Long, 16 }, { QMetaType::QString, 17 }, { QMetaType::Long, 19 }, { QMetaType::QString, 20 },
        }}),
        // Slot 'wireDisconnectedSlot'
        QtMocHelpers::SlotData<void(long, QString)>(148, 2, QMC::AccessProtected, QMetaType::Void, {{
            { QMetaType::Long, 16 }, { QMetaType::QString, 17 },
        }}),
        // Slot 'changeConnectionSlot'
        QtMocHelpers::SlotData<void(long, QString, long, QString, ViewLayer::ViewLayerPlacement, bool, bool)>(149, 2, QMC::AccessProtected, QMetaType::Void, {{
            { QMetaType::Long, 16 }, { QMetaType::QString, 17 }, { QMetaType::Long, 19 }, { QMetaType::QString, 20 },
            { 0x80000000 | 5, 2 }, { QMetaType::Bool, 22 }, { QMetaType::Bool, 23 },
        }}),
        // Slot 'restartPasteCount'
        QtMocHelpers::SlotData<void()>(150, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'dragIsDoneSlot'
        QtMocHelpers::SlotData<void(ItemDrag *)>(151, 2, QMC::AccessProtected, QMetaType::Void, {{
            { 0x80000000 | 152, 2 },
        }}),
        // Slot 'statusMessage'
        QtMocHelpers::SlotData<void(QString, int)>(153, 2, QMC::AccessProtected, QMetaType::Void, {{
            { QMetaType::QString, 154 }, { QMetaType::Int, 59 },
        }}),
        // Slot 'statusMessage'
        QtMocHelpers::SlotData<void(QString)>(153, 2, QMC::AccessProtected | QMC::MethodCloned, QMetaType::Void, {{
            { QMetaType::QString, 154 },
        }}),
        // Slot 'cleanUpWiresSlot'
        QtMocHelpers::SlotData<void(CleanUpWiresCommand *)>(155, 2, QMC::AccessProtected, QMetaType::Void, {{
            { 0x80000000 | 27, 2 },
        }}),
        // Slot 'updateInfoViewSlot'
        QtMocHelpers::SlotData<void()>(156, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'spaceBarIsPressedSlot'
        QtMocHelpers::SlotData<void(bool)>(157, 2, QMC::AccessProtected, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Slot 'autoScrollTimeout'
        QtMocHelpers::SlotData<void()>(158, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'dragAutoScrollTimeout'
        QtMocHelpers::SlotData<void()>(159, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'moveAutoScrollTimeout'
        QtMocHelpers::SlotData<void()>(160, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'rememberSticky'
        QtMocHelpers::SlotData<void(long, QUndoCommand *)>(161, 2, QMC::AccessProtected, QMetaType::Void, {{
            { QMetaType::Long, 7 }, { 0x80000000 | 35, 36 },
        }}),
        // Slot 'rememberSticky'
        QtMocHelpers::SlotData<void(ItemBase *, QUndoCommand *)>(161, 2, QMC::AccessProtected, QMetaType::Void, {{
            { 0x80000000 | 4, 2 }, { 0x80000000 | 35, 36 },
        }}),
        // Slot 'copyBoundingRectsSlot'
        QtMocHelpers::SlotData<void(QHash<QString,QRectF> &)>(162, 2, QMC::AccessProtected, QMetaType::Void, {{
            { 0x80000000 | 25, 2 },
        }}),
        // Slot 'deleteRatsnest'
        QtMocHelpers::SlotData<void(Wire *, QUndoCommand *)>(163, 2, QMC::AccessProtected, QMetaType::Void, {{
            { 0x80000000 | 98, 2 }, { 0x80000000 | 35, 36 },
        }}),
        // Slot 'deleteTracesSlot'
        QtMocHelpers::SlotData<void(QSet<ItemBase*> &, QHash<ItemBase*,SketchWidget*> &, QList<long> &, bool, QUndoCommand *)>(164, 2, QMC::AccessProtected, QMetaType::Void, {{
            { 0x80000000 | 65, 66 }, { 0x80000000 | 44, 67 }, { 0x80000000 | 68, 69 }, { QMetaType::Bool, 70 },
            { 0x80000000 | 35, 36 },
        }}),
        // Slot 'vScrollToZero'
        QtMocHelpers::SlotData<void()>(165, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'arrowTimerTimeout'
        QtMocHelpers::SlotData<void()>(166, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'makeDeleteItemCommandPrepSlot'
        QtMocHelpers::SlotData<void(ItemBase *, bool, QUndoCommand *)>(167, 2, QMC::AccessProtected, QMetaType::Void, {{
            { 0x80000000 | 4, 72 }, { QMetaType::Bool, 73 }, { 0x80000000 | 35, 36 },
        }}),
        // Slot 'makeDeleteItemCommandFinalSlot'
        QtMocHelpers::SlotData<void(ItemBase *, bool, QUndoCommand *)>(168, 2, QMC::AccessProtected, QMetaType::Void, {{
            { 0x80000000 | 4, 72 }, { QMetaType::Bool, 73 }, { 0x80000000 | 35, 36 },
        }}),
        // Slot 'updatePartLabelInstanceTitleSlot'
        QtMocHelpers::SlotData<void(long)>(169, 2, QMC::AccessProtected, QMetaType::Void, {{
            { QMetaType::Long, 47 },
        }}),
        // Slot 'changePinLabelsSlot'
        QtMocHelpers::SlotData<void(ItemBase *)>(170, 2, QMC::AccessProtected, QMetaType::Void, {{
            { 0x80000000 | 4, 72 },
        }}),
        // Slot 'changePinLabels'
        QtMocHelpers::SlotData<void(ItemBase *)>(171, 2, QMC::AccessProtected, QMetaType::Void, {{
            { 0x80000000 | 4, 2 },
        }}),
        // Slot 'collectRatsnestSlot'
        QtMocHelpers::SlotData<void(QList<SketchWidget*> &)>(172, 2, QMC::AccessProtected, QMetaType::Void, {{
            { 0x80000000 | 87, 88 },
        }}),
        // Slot 'removeRatsnestSlot'
        QtMocHelpers::SlotData<void(QList<struct ConnectorEdge*> &, QUndoCommand *)>(173, 2, QMC::AccessProtected, QMetaType::Void, {{
            { 0x80000000 | 90, 91 }, { 0x80000000 | 35, 36 },
        }}),
        // Slot 'deleteTemporary'
        QtMocHelpers::SlotData<void()>(174, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'canConnect'
        QtMocHelpers::SlotData<void(Wire *, ItemBase *, bool &)>(175, 2, QMC::AccessProtected, QMetaType::Void, {{
            { 0x80000000 | 98, 99 }, { 0x80000000 | 4, 100 }, { 0x80000000 | 101, 22 },
        }}),
        // Slot 'swapStart'
        QtMocHelpers::SlotData<long(SwapThing &, bool)>(176, 2, QMC::AccessProtected, QMetaType::Long, {{
            { 0x80000000 | 103, 104 }, { QMetaType::Bool, 105 },
        }}),
        // Slot 'getDroppedItemViewLayerPlacement'
        QtMocHelpers::SlotData<void(ModelPart *, ViewLayer::ViewLayerPlacement &)>(177, 2, QMC::AccessProtected, QMetaType::Void, {{
            { 0x80000000 | 3, 116 }, { 0x80000000 | 117, 2 },
        }}),
        // Slot 'changeWireColor'
        QtMocHelpers::SlotData<void(const QString)>(178, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 179 },
        }}),
        // Slot 'changeWireWidthMils'
        QtMocHelpers::SlotData<void(const QString)>(180, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 181 },
        }}),
        // Slot 'selectAllItems'
        QtMocHelpers::SlotData<void(bool, bool)>(182, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 13 }, { QMetaType::Bool, 38 },
        }}),
        // Slot 'setInstanceTitleForCommand'
        QtMocHelpers::SlotData<void(long, const QString &, const QString &, bool, bool)>(183, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Long, 7 }, { QMetaType::QString, 55 }, { QMetaType::QString, 56 }, { QMetaType::Bool, 57 },
            { QMetaType::Bool, 38 },
        }}),
        // Slot 'checkStickyForCommand'
        QtMocHelpers::SlotData<void(long, bool, bool, CheckStickyCommand *)>(184, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Long, 7 }, { QMetaType::Bool, 38 }, { QMetaType::Bool, 40 }, { 0x80000000 | 41, 2 },
        }}),
        // Slot 'resizeBoard'
        QtMocHelpers::SlotData<ItemBase *(long, double, double)>(185, 2, QMC::AccessPublic, 0x80000000 | 4, {{
            { QMetaType::Long, 7 }, { QMetaType::Double, 186 }, { QMetaType::Double, 187 },
        }}),
        // Slot 'disconnectAllSlot'
        QtMocHelpers::SlotData<void(QList<ConnectorItem*>, QHash<ItemBase*,SketchWidget*> &, QUndoCommand *)>(188, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 43, 2 }, { 0x80000000 | 44, 45 }, { 0x80000000 | 35, 36 },
        }}),
        // Slot 'setResistance'
        QtMocHelpers::SlotData<void(long, QString, QString, bool)>(189, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Long, 47 }, { QMetaType::QString, 48 }, { QMetaType::QString, 49 }, { QMetaType::Bool, 38 },
        }}),
        // Slot 'setResistance'
        QtMocHelpers::SlotData<void(QString, QString)>(189, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 48 }, { QMetaType::QString, 49 },
        }}),
        // Slot 'setProp'
        QtMocHelpers::SlotData<void(long, const QString &, const QString &, bool, bool)>(190, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Long, 47 }, { QMetaType::QString, 51 }, { QMetaType::QString, 52 }, { QMetaType::Bool, 191 },
            { QMetaType::Bool, 38 },
        }}),
        // Slot 'setProp'
        QtMocHelpers::SlotData<void(ItemBase *, const QString &, const QString &, const QString &, const QString &, bool)>(190, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 4, 2 }, { QMetaType::QString, 192 }, { QMetaType::QString, 193 }, { QMetaType::QString, 194 },
            { QMetaType::QString, 195 }, { QMetaType::Bool, 191 },
        }}),
        // Slot 'setHoleSize'
        QtMocHelpers::SlotData<void(ItemBase *, const QString &, const QString &, const QString &, const QString &, QRectF &, QRectF &, bool)>(196, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 4, 2 }, { QMetaType::QString, 192 }, { QMetaType::QString, 193 }, { QMetaType::QString, 194 },
            { QMetaType::QString, 195 }, { 0x80000000 | 197, 198 }, { 0x80000000 | 197, 199 }, { QMetaType::Bool, 191 },
        }}),
        // Slot 'showLabelFirstTimeForCommand'
        QtMocHelpers::SlotData<void(long, bool, bool)>(200, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Long, 47 }, { QMetaType::Bool, 61 }, { QMetaType::Bool, 38 },
        }}),
        // Slot 'resizeBoard'
        QtMocHelpers::SlotData<void(double, double, bool)>(185, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Double, 186 }, { QMetaType::Double, 187 }, { QMetaType::Bool, 38 },
        }}),
        // Slot 'changeBoardLayers'
        QtMocHelpers::SlotData<void(int, bool)>(201, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 202 }, { QMetaType::Bool, 38 },
        }}),
        // Slot 'updateConnectors'
        QtMocHelpers::SlotData<void()>(203, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'ratsnestConnectForCommand'
        QtMocHelpers::SlotData<void(long, const QString &, bool, bool)>(204, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Long, 7 }, { QMetaType::QString, 81 }, { QMetaType::Bool, 22 }, { QMetaType::Bool, 38 },
        }}),
        // Slot 'cleanupRatsnestsForCommand'
        QtMocHelpers::SlotData<void(bool)>(205, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 38 },
        }}),
        // Slot 'addSubpartForCommand'
        QtMocHelpers::SlotData<void(long, long, bool)>(206, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Long, 7 }, { QMetaType::Long, 207 }, { QMetaType::Bool, 38 },
        }}),
        // Slot 'removeSubpartForCommand'
        QtMocHelpers::SlotData<void(long, long, bool)>(208, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Long, 7 }, { QMetaType::Long, 113 }, { QMetaType::Bool, 38 },
        }}),
        // Slot 'packItemsForCommand'
        QtMocHelpers::SlotData<void(int, const QList<long> &, QUndoCommand *, bool)>(209, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 119 }, { 0x80000000 | 120, 121 }, { 0x80000000 | 35, 122 }, { QMetaType::Bool, 38 },
        }}),
        // Slot 'triggerArrowTimer'
        QtMocHelpers::SlotData<void()>(210, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'gridColor'
        QtMocHelpers::PropertyData<QColor>(211, QMetaType::QColor, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'ratsnestWidth'
        QtMocHelpers::PropertyData<double>(212, QMetaType::Double, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'ratsnestOpacity'
        QtMocHelpers::PropertyData<double>(213, QMetaType::Double, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<SketchWidget, qt_meta_tag_ZN12SketchWidgetE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject SketchWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<InfoGraphicsView::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12SketchWidgetE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12SketchWidgetE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN12SketchWidgetE_t>.metaTypes,
    nullptr
} };

void SketchWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<SketchWidget *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->itemAddedSignal((*reinterpret_cast< std::add_pointer_t<ModelPart*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<ItemBase*>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<ViewLayer::ViewLayerPlacement>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<ViewGeometry>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<long>>(_a[5])),(*reinterpret_cast< std::add_pointer_t<SketchWidget*>>(_a[6]))); break;
        case 1: _t->itemDeletedSignal((*reinterpret_cast< std::add_pointer_t<long>>(_a[1]))); break;
        case 2: _t->clearSelectionSignal(); break;
        case 3: _t->itemSelectedSignal((*reinterpret_cast< std::add_pointer_t<long>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 4: _t->itemMovedSignal((*reinterpret_cast< std::add_pointer_t<ItemBase*>>(_a[1]))); break;
        case 5: _t->wireDisconnectedSignal((*reinterpret_cast< std::add_pointer_t<long>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 6: _t->wireConnectedSignal((*reinterpret_cast< std::add_pointer_t<long>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<long>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[4]))); break;
        case 7: _t->changeConnectionSignal((*reinterpret_cast< std::add_pointer_t<long>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<long>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<ViewLayer::ViewLayerPlacement>>(_a[5])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[6])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[7]))); break;
        case 8: _t->copyBoundingRectsSignal((*reinterpret_cast< std::add_pointer_t<QHash<QString,QRectF>&>>(_a[1]))); break;
        case 9: _t->cleanUpWiresSignal((*reinterpret_cast< std::add_pointer_t<CleanUpWiresCommand*>>(_a[1]))); break;
        case 10: _t->selectionChangedSignal(); break;
        case 11: _t->resizeSignal(); break;
        case 12: _t->dropSignal((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 13: _t->routingStatusSignal((*reinterpret_cast< std::add_pointer_t<SketchWidget*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<RoutingStatus>>(_a[2]))); break;
        case 14: _t->movingSignal((*reinterpret_cast< std::add_pointer_t<SketchWidget*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QUndoCommand*>>(_a[2]))); break;
        case 15: _t->selectAllItemsSignal((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 16: _t->checkStickySignal((*reinterpret_cast< std::add_pointer_t<long>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<CheckStickyCommand*>>(_a[4]))); break;
        case 17: _t->disconnectAllSignal((*reinterpret_cast< std::add_pointer_t<QList<ConnectorItem*>>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QHash<ItemBase*,SketchWidget*>&>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QUndoCommand*>>(_a[3]))); break;
        case 18: _t->setResistanceSignal((*reinterpret_cast< std::add_pointer_t<long>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[4]))); break;
        case 19: _t->setPropSignal((*reinterpret_cast< std::add_pointer_t<long>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[5]))); break;
        case 20: _t->setInstanceTitleSignal((*reinterpret_cast< std::add_pointer_t<long>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[5]))); break;
        case 21: _t->statusMessageSignal((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 22: _t->showLabelFirstTimeSignal((*reinterpret_cast< std::add_pointer_t<long>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[3]))); break;
        case 23: _t->dropPasteSignal((*reinterpret_cast< std::add_pointer_t<SketchWidget*>>(_a[1]))); break;
        case 24: _t->changeBoardLayersSignal((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 25: _t->deleteTracesSignal((*reinterpret_cast< std::add_pointer_t<QSet<ItemBase*>&>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QHash<ItemBase*,SketchWidget*>&>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QList<long>&>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<QUndoCommand*>>(_a[5]))); break;
        case 26: _t->makeDeleteItemCommandPrepSignal((*reinterpret_cast< std::add_pointer_t<ItemBase*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QUndoCommand*>>(_a[3]))); break;
        case 27: _t->makeDeleteItemCommandFinalSignal((*reinterpret_cast< std::add_pointer_t<ItemBase*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QUndoCommand*>>(_a[3]))); break;
        case 28: _t->cursorLocationSignal((*reinterpret_cast< std::add_pointer_t<double>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[4]))); break;
        case 29: _t->cursorLocationSignal((*reinterpret_cast< std::add_pointer_t<double>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[3]))); break;
        case 30: _t->cursorLocationSignal((*reinterpret_cast< std::add_pointer_t<double>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[2]))); break;
        case 31: _t->ratsnestConnectSignal((*reinterpret_cast< std::add_pointer_t<long>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[4]))); break;
        case 32: _t->updatePartLabelInstanceTitleSignal((*reinterpret_cast< std::add_pointer_t<long>>(_a[1]))); break;
        case 33: _t->filenameIfSignal((*reinterpret_cast< std::add_pointer_t<QString&>>(_a[1]))); break;
        case 34: _t->collectRatsnestSignal((*reinterpret_cast< std::add_pointer_t<QList<SketchWidget*>&>>(_a[1]))); break;
        case 35: _t->removeRatsnestSignal((*reinterpret_cast< std::add_pointer_t<QList<ConnectorEdge*>&>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QUndoCommand*>>(_a[2]))); break;
        case 36: _t->updateLayerMenuSignal(); break;
        case 37: _t->swapBoardImageSignal((*reinterpret_cast< std::add_pointer_t<SketchWidget*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<ItemBase*>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[5]))); break;
        case 38: _t->canConnectSignal((*reinterpret_cast< std::add_pointer_t<Wire*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<ItemBase*>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<bool&>>(_a[3]))); break;
        case 39: _t->swapStartSignal((*reinterpret_cast< std::add_pointer_t<SwapThing&>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 40: _t->showing((*reinterpret_cast< std::add_pointer_t<SketchWidget*>>(_a[1]))); break;
        case 41: _t->clickedItemCandidateSignal((*reinterpret_cast< std::add_pointer_t<QGraphicsItem*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool&>>(_a[2]))); break;
        case 42: _t->resizedSignal((*reinterpret_cast< std::add_pointer_t<ItemBase*>>(_a[1]))); break;
        case 43: _t->cleanupRatsnestsSignal((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 44: _t->addSubpartSignal((*reinterpret_cast< std::add_pointer_t<long>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<long>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[3]))); break;
        case 45: _t->removeSubpartSignal((*reinterpret_cast< std::add_pointer_t<long>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<long>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[3]))); break;
        case 46: _t->getDroppedItemViewLayerPlacementSignal((*reinterpret_cast< std::add_pointer_t<ModelPart*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<ViewLayer::ViewLayerPlacement&>>(_a[2]))); break;
        case 47: _t->packItemsSignal((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QList<long>>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QUndoCommand*>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[4]))); break;
        case 48: _t->routingCheckSignal(); break;
        case 49: _t->disableUndoRedo(); break;
        case 50: _t->enableUndoRedo(); break;
        case 51: _t->undoSignal(); break;
        case 52: _t->itemAddedSlot((*reinterpret_cast< std::add_pointer_t<ModelPart*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<ItemBase*>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<ViewLayer::ViewLayerPlacement>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<ViewGeometry>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<long>>(_a[5])),(*reinterpret_cast< std::add_pointer_t<SketchWidget*>>(_a[6]))); break;
        case 53: _t->itemDeletedSlot((*reinterpret_cast< std::add_pointer_t<long>>(_a[1]))); break;
        case 54: _t->clearSelectionSlot(); break;
        case 55: _t->itemSelectedSlot((*reinterpret_cast< std::add_pointer_t<long>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 56: _t->selectionChangedSlot(); break;
        case 57: _t->wireChangedSlot((*reinterpret_cast< std::add_pointer_t<Wire*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QLineF>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QLineF>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QPointF>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<QPointF>>(_a[5])),(*reinterpret_cast< std::add_pointer_t<ConnectorItem*>>(_a[6])),(*reinterpret_cast< std::add_pointer_t<ConnectorItem*>>(_a[7]))); break;
        case 58: _t->wireChangedCurveSlot((*reinterpret_cast< std::add_pointer_t<Wire*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<const Bezier*>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<const Bezier*>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[4]))); break;
        case 59: _t->wireSplitSlot((*reinterpret_cast< std::add_pointer_t<Wire*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QPointF>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QPointF>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QLineF>>(_a[4]))); break;
        case 60: _t->wireJoinSlot((*reinterpret_cast< std::add_pointer_t<Wire*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<ConnectorItem*>>(_a[2]))); break;
        case 61: _t->toggleLayerVisibility(); break;
        case 62: _t->wireConnectedSlot((*reinterpret_cast< std::add_pointer_t<long>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<long>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[4]))); break;
        case 63: _t->wireDisconnectedSlot((*reinterpret_cast< std::add_pointer_t<long>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 64: _t->changeConnectionSlot((*reinterpret_cast< std::add_pointer_t<long>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<long>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<ViewLayer::ViewLayerPlacement>>(_a[5])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[6])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[7]))); break;
        case 65: _t->restartPasteCount(); break;
        case 66: _t->dragIsDoneSlot((*reinterpret_cast< std::add_pointer_t<ItemDrag*>>(_a[1]))); break;
        case 67: _t->statusMessage((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 68: _t->statusMessage((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 69: _t->cleanUpWiresSlot((*reinterpret_cast< std::add_pointer_t<CleanUpWiresCommand*>>(_a[1]))); break;
        case 70: _t->updateInfoViewSlot(); break;
        case 71: _t->spaceBarIsPressedSlot((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 72: _t->autoScrollTimeout(); break;
        case 73: _t->dragAutoScrollTimeout(); break;
        case 74: _t->moveAutoScrollTimeout(); break;
        case 75: _t->rememberSticky((*reinterpret_cast< std::add_pointer_t<long>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QUndoCommand*>>(_a[2]))); break;
        case 76: _t->rememberSticky((*reinterpret_cast< std::add_pointer_t<ItemBase*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QUndoCommand*>>(_a[2]))); break;
        case 77: _t->copyBoundingRectsSlot((*reinterpret_cast< std::add_pointer_t<QHash<QString,QRectF>&>>(_a[1]))); break;
        case 78: _t->deleteRatsnest((*reinterpret_cast< std::add_pointer_t<Wire*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QUndoCommand*>>(_a[2]))); break;
        case 79: _t->deleteTracesSlot((*reinterpret_cast< std::add_pointer_t<QSet<ItemBase*>&>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QHash<ItemBase*,SketchWidget*>&>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QList<long>&>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<QUndoCommand*>>(_a[5]))); break;
        case 80: _t->vScrollToZero(); break;
        case 81: _t->arrowTimerTimeout(); break;
        case 82: _t->makeDeleteItemCommandPrepSlot((*reinterpret_cast< std::add_pointer_t<ItemBase*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QUndoCommand*>>(_a[3]))); break;
        case 83: _t->makeDeleteItemCommandFinalSlot((*reinterpret_cast< std::add_pointer_t<ItemBase*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QUndoCommand*>>(_a[3]))); break;
        case 84: _t->updatePartLabelInstanceTitleSlot((*reinterpret_cast< std::add_pointer_t<long>>(_a[1]))); break;
        case 85: _t->changePinLabelsSlot((*reinterpret_cast< std::add_pointer_t<ItemBase*>>(_a[1]))); break;
        case 86: _t->changePinLabels((*reinterpret_cast< std::add_pointer_t<ItemBase*>>(_a[1]))); break;
        case 87: _t->collectRatsnestSlot((*reinterpret_cast< std::add_pointer_t<QList<SketchWidget*>&>>(_a[1]))); break;
        case 88: _t->removeRatsnestSlot((*reinterpret_cast< std::add_pointer_t<QList<ConnectorEdge*>&>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QUndoCommand*>>(_a[2]))); break;
        case 89: _t->deleteTemporary(); break;
        case 90: _t->canConnect((*reinterpret_cast< std::add_pointer_t<Wire*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<ItemBase*>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<bool&>>(_a[3]))); break;
        case 91: { long _r = _t->swapStart((*reinterpret_cast< std::add_pointer_t<SwapThing&>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2])));
            if (_a[0]) *reinterpret_cast< long*>(_a[0]) = std::move(_r); }  break;
        case 92: _t->getDroppedItemViewLayerPlacement((*reinterpret_cast< std::add_pointer_t<ModelPart*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<ViewLayer::ViewLayerPlacement&>>(_a[2]))); break;
        case 93: _t->changeWireColor((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 94: _t->changeWireWidthMils((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 95: _t->selectAllItems((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 96: _t->setInstanceTitleForCommand((*reinterpret_cast< std::add_pointer_t<long>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[5]))); break;
        case 97: _t->checkStickyForCommand((*reinterpret_cast< std::add_pointer_t<long>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<CheckStickyCommand*>>(_a[4]))); break;
        case 98: { ItemBase* _r = _t->resizeBoard((*reinterpret_cast< std::add_pointer_t<long>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[3])));
            if (_a[0]) *reinterpret_cast< ItemBase**>(_a[0]) = std::move(_r); }  break;
        case 99: _t->disconnectAllSlot((*reinterpret_cast< std::add_pointer_t<QList<ConnectorItem*>>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QHash<ItemBase*,SketchWidget*>&>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QUndoCommand*>>(_a[3]))); break;
        case 100: _t->setResistance((*reinterpret_cast< std::add_pointer_t<long>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[4]))); break;
        case 101: _t->setResistance((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 102: _t->setProp((*reinterpret_cast< std::add_pointer_t<long>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[5]))); break;
        case 103: _t->setProp((*reinterpret_cast< std::add_pointer_t<ItemBase*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[5])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[6]))); break;
        case 104: _t->setHoleSize((*reinterpret_cast< std::add_pointer_t<ItemBase*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[5])),(*reinterpret_cast< std::add_pointer_t<QRectF&>>(_a[6])),(*reinterpret_cast< std::add_pointer_t<QRectF&>>(_a[7])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[8]))); break;
        case 105: _t->showLabelFirstTimeForCommand((*reinterpret_cast< std::add_pointer_t<long>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[3]))); break;
        case 106: _t->resizeBoard((*reinterpret_cast< std::add_pointer_t<double>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[3]))); break;
        case 107: _t->changeBoardLayers((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 108: _t->updateConnectors(); break;
        case 109: _t->ratsnestConnectForCommand((*reinterpret_cast< std::add_pointer_t<long>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[4]))); break;
        case 110: _t->cleanupRatsnestsForCommand((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 111: _t->addSubpartForCommand((*reinterpret_cast< std::add_pointer_t<long>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<long>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[3]))); break;
        case 112: _t->removeSubpartForCommand((*reinterpret_cast< std::add_pointer_t<long>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<long>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[3]))); break;
        case 113: _t->packItemsForCommand((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QList<long>>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QUndoCommand*>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[4]))); break;
        case 114: _t->triggerArrowTimer(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< ItemBase* >(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< ModelPart* >(); break;
            case 5:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< SketchWidget* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< ItemBase* >(); break;
            }
            break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< SketchWidget* >(); break;
            }
            break;
        case 14:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< SketchWidget* >(); break;
            }
            break;
        case 17:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<ConnectorItem*> >(); break;
            }
            break;
        case 23:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< SketchWidget* >(); break;
            }
            break;
        case 26:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< ItemBase* >(); break;
            }
            break;
        case 27:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< ItemBase* >(); break;
            }
            break;
        case 37:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< ItemBase* >(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< SketchWidget* >(); break;
            }
            break;
        case 38:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< ItemBase* >(); break;
            }
            break;
        case 40:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< SketchWidget* >(); break;
            }
            break;
        case 41:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QGraphicsItem* >(); break;
            }
            break;
        case 42:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< ItemBase* >(); break;
            }
            break;
        case 46:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< ModelPart* >(); break;
            }
            break;
        case 47:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<long> >(); break;
            }
            break;
        case 52:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< ItemBase* >(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< ModelPart* >(); break;
            case 5:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< SketchWidget* >(); break;
            }
            break;
        case 57:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 6:
            case 5:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< ConnectorItem* >(); break;
            }
            break;
        case 60:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< ConnectorItem* >(); break;
            }
            break;
        case 76:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< ItemBase* >(); break;
            }
            break;
        case 82:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< ItemBase* >(); break;
            }
            break;
        case 83:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< ItemBase* >(); break;
            }
            break;
        case 85:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< ItemBase* >(); break;
            }
            break;
        case 86:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< ItemBase* >(); break;
            }
            break;
        case 90:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< ItemBase* >(); break;
            }
            break;
        case 92:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< ModelPart* >(); break;
            }
            break;
        case 99:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<ConnectorItem*> >(); break;
            }
            break;
        case 103:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< ItemBase* >(); break;
            }
            break;
        case 104:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< ItemBase* >(); break;
            }
            break;
        case 113:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<long> >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (SketchWidget::*)(ModelPart * , ItemBase * , ViewLayer::ViewLayerPlacement , const ViewGeometry & , long , SketchWidget * )>(_a, &SketchWidget::itemAddedSignal, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (SketchWidget::*)(long )>(_a, &SketchWidget::itemDeletedSignal, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (SketchWidget::*)()>(_a, &SketchWidget::clearSelectionSignal, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (SketchWidget::*)(long , bool )>(_a, &SketchWidget::itemSelectedSignal, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (SketchWidget::*)(ItemBase * )>(_a, &SketchWidget::itemMovedSignal, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (SketchWidget::*)(long , QString )>(_a, &SketchWidget::wireDisconnectedSignal, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (SketchWidget::*)(long , QString , long , QString )>(_a, &SketchWidget::wireConnectedSignal, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (SketchWidget::*)(long , QString , long , QString , ViewLayer::ViewLayerPlacement , bool , bool )>(_a, &SketchWidget::changeConnectionSignal, 7))
            return;
        if (QtMocHelpers::indexOfMethod<void (SketchWidget::*)(QHash<QString,QRectF> & )>(_a, &SketchWidget::copyBoundingRectsSignal, 8))
            return;
        if (QtMocHelpers::indexOfMethod<void (SketchWidget::*)(CleanUpWiresCommand * )>(_a, &SketchWidget::cleanUpWiresSignal, 9))
            return;
        if (QtMocHelpers::indexOfMethod<void (SketchWidget::*)()>(_a, &SketchWidget::selectionChangedSignal, 10))
            return;
        if (QtMocHelpers::indexOfMethod<void (SketchWidget::*)()>(_a, &SketchWidget::resizeSignal, 11))
            return;
        if (QtMocHelpers::indexOfMethod<void (SketchWidget::*)(const QPoint & )>(_a, &SketchWidget::dropSignal, 12))
            return;
        if (QtMocHelpers::indexOfMethod<void (SketchWidget::*)(SketchWidget * , const RoutingStatus & )>(_a, &SketchWidget::routingStatusSignal, 13))
            return;
        if (QtMocHelpers::indexOfMethod<void (SketchWidget::*)(SketchWidget * , QUndoCommand * )>(_a, &SketchWidget::movingSignal, 14))
            return;
        if (QtMocHelpers::indexOfMethod<void (SketchWidget::*)(bool , bool )>(_a, &SketchWidget::selectAllItemsSignal, 15))
            return;
        if (QtMocHelpers::indexOfMethod<void (SketchWidget::*)(long , bool , bool , CheckStickyCommand * )>(_a, &SketchWidget::checkStickySignal, 16))
            return;
        if (QtMocHelpers::indexOfMethod<void (SketchWidget::*)(QList<ConnectorItem*> , QHash<ItemBase*,SketchWidget*> & , QUndoCommand * )>(_a, &SketchWidget::disconnectAllSignal, 17))
            return;
        if (QtMocHelpers::indexOfMethod<void (SketchWidget::*)(long , QString , QString , bool )>(_a, &SketchWidget::setResistanceSignal, 18))
            return;
        if (QtMocHelpers::indexOfMethod<void (SketchWidget::*)(long , const QString & , const QString & , bool , bool )>(_a, &SketchWidget::setPropSignal, 19))
            return;
        if (QtMocHelpers::indexOfMethod<void (SketchWidget::*)(long , const QString & , const QString & , bool , bool )>(_a, &SketchWidget::setInstanceTitleSignal, 20))
            return;
        if (QtMocHelpers::indexOfMethod<void (SketchWidget::*)(QString , int )>(_a, &SketchWidget::statusMessageSignal, 21))
            return;
        if (QtMocHelpers::indexOfMethod<void (SketchWidget::*)(long , bool , bool )>(_a, &SketchWidget::showLabelFirstTimeSignal, 22))
            return;
        if (QtMocHelpers::indexOfMethod<void (SketchWidget::*)(SketchWidget * )>(_a, &SketchWidget::dropPasteSignal, 23))
            return;
        if (QtMocHelpers::indexOfMethod<void (SketchWidget::*)(int , bool )>(_a, &SketchWidget::changeBoardLayersSignal, 24))
            return;
        if (QtMocHelpers::indexOfMethod<void (SketchWidget::*)(QSet<ItemBase*> & , QHash<ItemBase*,SketchWidget*> & , QList<long> & , bool , QUndoCommand * )>(_a, &SketchWidget::deleteTracesSignal, 25))
            return;
        if (QtMocHelpers::indexOfMethod<void (SketchWidget::*)(ItemBase * , bool , QUndoCommand * )>(_a, &SketchWidget::makeDeleteItemCommandPrepSignal, 26))
            return;
        if (QtMocHelpers::indexOfMethod<void (SketchWidget::*)(ItemBase * , bool , QUndoCommand * )>(_a, &SketchWidget::makeDeleteItemCommandFinalSignal, 27))
            return;
        if (QtMocHelpers::indexOfMethod<void (SketchWidget::*)(double , double , double , double )>(_a, &SketchWidget::cursorLocationSignal, 28))
            return;
        if (QtMocHelpers::indexOfMethod<void (SketchWidget::*)(long , const QString & , bool , bool )>(_a, &SketchWidget::ratsnestConnectSignal, 31))
            return;
        if (QtMocHelpers::indexOfMethod<void (SketchWidget::*)(long )>(_a, &SketchWidget::updatePartLabelInstanceTitleSignal, 32))
            return;
        if (QtMocHelpers::indexOfMethod<void (SketchWidget::*)(QString & )>(_a, &SketchWidget::filenameIfSignal, 33))
            return;
        if (QtMocHelpers::indexOfMethod<void (SketchWidget::*)(QList<SketchWidget*> & )>(_a, &SketchWidget::collectRatsnestSignal, 34))
            return;
        if (QtMocHelpers::indexOfMethod<void (SketchWidget::*)(QList<struct ConnectorEdge*> & , QUndoCommand * )>(_a, &SketchWidget::removeRatsnestSignal, 35))
            return;
        if (QtMocHelpers::indexOfMethod<void (SketchWidget::*)()>(_a, &SketchWidget::updateLayerMenuSignal, 36))
            return;
        if (QtMocHelpers::indexOfMethod<void (SketchWidget::*)(SketchWidget * , ItemBase * , const QString & , const QString & , bool )>(_a, &SketchWidget::swapBoardImageSignal, 37))
            return;
        if (QtMocHelpers::indexOfMethod<void (SketchWidget::*)(Wire * , ItemBase * , bool & )>(_a, &SketchWidget::canConnectSignal, 38))
            return;
        if (QtMocHelpers::indexOfMethod<void (SketchWidget::*)(SwapThing & , bool )>(_a, &SketchWidget::swapStartSignal, 39))
            return;
        if (QtMocHelpers::indexOfMethod<void (SketchWidget::*)(SketchWidget * )>(_a, &SketchWidget::showing, 40))
            return;
        if (QtMocHelpers::indexOfMethod<void (SketchWidget::*)(QGraphicsItem * , bool & )>(_a, &SketchWidget::clickedItemCandidateSignal, 41))
            return;
        if (QtMocHelpers::indexOfMethod<void (SketchWidget::*)(ItemBase * )>(_a, &SketchWidget::resizedSignal, 42))
            return;
        if (QtMocHelpers::indexOfMethod<void (SketchWidget::*)(bool )>(_a, &SketchWidget::cleanupRatsnestsSignal, 43))
            return;
        if (QtMocHelpers::indexOfMethod<void (SketchWidget::*)(long , long , bool )>(_a, &SketchWidget::addSubpartSignal, 44))
            return;
        if (QtMocHelpers::indexOfMethod<void (SketchWidget::*)(long , long , bool )>(_a, &SketchWidget::removeSubpartSignal, 45))
            return;
        if (QtMocHelpers::indexOfMethod<void (SketchWidget::*)(ModelPart * , ViewLayer::ViewLayerPlacement & )>(_a, &SketchWidget::getDroppedItemViewLayerPlacementSignal, 46))
            return;
        if (QtMocHelpers::indexOfMethod<void (SketchWidget::*)(int , const QList<long> & , QUndoCommand * , bool )>(_a, &SketchWidget::packItemsSignal, 47))
            return;
        if (QtMocHelpers::indexOfMethod<void (SketchWidget::*)()>(_a, &SketchWidget::routingCheckSignal, 48))
            return;
        if (QtMocHelpers::indexOfMethod<void (SketchWidget::*)()>(_a, &SketchWidget::disableUndoRedo, 49))
            return;
        if (QtMocHelpers::indexOfMethod<void (SketchWidget::*)()>(_a, &SketchWidget::enableUndoRedo, 50))
            return;
        if (QtMocHelpers::indexOfMethod<void (SketchWidget::*)()>(_a, &SketchWidget::undoSignal, 51))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QColor*>(_v) = _t->gridColor(); break;
        case 1: *reinterpret_cast<double*>(_v) = _t->ratsnestWidth(); break;
        case 2: *reinterpret_cast<double*>(_v) = _t->ratsnestOpacity(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setGridColor(*reinterpret_cast<QColor*>(_v)); break;
        case 1: _t->setRatsnestWidth(*reinterpret_cast<double*>(_v)); break;
        case 2: _t->setRatsnestOpacity(*reinterpret_cast<double*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *SketchWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SketchWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12SketchWidgetE_t>.strings))
        return static_cast<void*>(this);
    return InfoGraphicsView::qt_metacast(_clname);
}

int SketchWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = InfoGraphicsView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 115)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 115;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 115)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 115;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void SketchWidget::itemAddedSignal(ModelPart * _t1, ItemBase * _t2, ViewLayer::ViewLayerPlacement _t3, const ViewGeometry & _t4, long _t5, SketchWidget * _t6)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1, _t2, _t3, _t4, _t5, _t6);
}

// SIGNAL 1
void SketchWidget::itemDeletedSignal(long _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void SketchWidget::clearSelectionSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void SketchWidget::itemSelectedSignal(long _t1, bool _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1, _t2);
}

// SIGNAL 4
void SketchWidget::itemMovedSignal(ItemBase * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1);
}

// SIGNAL 5
void SketchWidget::wireDisconnectedSignal(long _t1, QString _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 5, nullptr, _t1, _t2);
}

// SIGNAL 6
void SketchWidget::wireConnectedSignal(long _t1, QString _t2, long _t3, QString _t4)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 6, nullptr, _t1, _t2, _t3, _t4);
}

// SIGNAL 7
void SketchWidget::changeConnectionSignal(long _t1, QString _t2, long _t3, QString _t4, ViewLayer::ViewLayerPlacement _t5, bool _t6, bool _t7)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 7, nullptr, _t1, _t2, _t3, _t4, _t5, _t6, _t7);
}

// SIGNAL 8
void SketchWidget::copyBoundingRectsSignal(QHash<QString,QRectF> & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 8, nullptr, _t1);
}

// SIGNAL 9
void SketchWidget::cleanUpWiresSignal(CleanUpWiresCommand * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 9, nullptr, _t1);
}

// SIGNAL 10
void SketchWidget::selectionChangedSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void SketchWidget::resizeSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}

// SIGNAL 12
void SketchWidget::dropSignal(const QPoint & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 12, nullptr, _t1);
}

// SIGNAL 13
void SketchWidget::routingStatusSignal(SketchWidget * _t1, const RoutingStatus & _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 13, nullptr, _t1, _t2);
}

// SIGNAL 14
void SketchWidget::movingSignal(SketchWidget * _t1, QUndoCommand * _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 14, nullptr, _t1, _t2);
}

// SIGNAL 15
void SketchWidget::selectAllItemsSignal(bool _t1, bool _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 15, nullptr, _t1, _t2);
}

// SIGNAL 16
void SketchWidget::checkStickySignal(long _t1, bool _t2, bool _t3, CheckStickyCommand * _t4)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 16, nullptr, _t1, _t2, _t3, _t4);
}

// SIGNAL 17
void SketchWidget::disconnectAllSignal(QList<ConnectorItem*> _t1, QHash<ItemBase*,SketchWidget*> & _t2, QUndoCommand * _t3)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 17, nullptr, _t1, _t2, _t3);
}

// SIGNAL 18
void SketchWidget::setResistanceSignal(long _t1, QString _t2, QString _t3, bool _t4)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 18, nullptr, _t1, _t2, _t3, _t4);
}

// SIGNAL 19
void SketchWidget::setPropSignal(long _t1, const QString & _t2, const QString & _t3, bool _t4, bool _t5)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 19, nullptr, _t1, _t2, _t3, _t4, _t5);
}

// SIGNAL 20
void SketchWidget::setInstanceTitleSignal(long _t1, const QString & _t2, const QString & _t3, bool _t4, bool _t5)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 20, nullptr, _t1, _t2, _t3, _t4, _t5);
}

// SIGNAL 21
void SketchWidget::statusMessageSignal(QString _t1, int _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 21, nullptr, _t1, _t2);
}

// SIGNAL 22
void SketchWidget::showLabelFirstTimeSignal(long _t1, bool _t2, bool _t3)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 22, nullptr, _t1, _t2, _t3);
}

// SIGNAL 23
void SketchWidget::dropPasteSignal(SketchWidget * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 23, nullptr, _t1);
}

// SIGNAL 24
void SketchWidget::changeBoardLayersSignal(int _t1, bool _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 24, nullptr, _t1, _t2);
}

// SIGNAL 25
void SketchWidget::deleteTracesSignal(QSet<ItemBase*> & _t1, QHash<ItemBase*,SketchWidget*> & _t2, QList<long> & _t3, bool _t4, QUndoCommand * _t5)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 25, nullptr, _t1, _t2, _t3, _t4, _t5);
}

// SIGNAL 26
void SketchWidget::makeDeleteItemCommandPrepSignal(ItemBase * _t1, bool _t2, QUndoCommand * _t3)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 26, nullptr, _t1, _t2, _t3);
}

// SIGNAL 27
void SketchWidget::makeDeleteItemCommandFinalSignal(ItemBase * _t1, bool _t2, QUndoCommand * _t3)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 27, nullptr, _t1, _t2, _t3);
}

// SIGNAL 28
void SketchWidget::cursorLocationSignal(double _t1, double _t2, double _t3, double _t4)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 28, nullptr, _t1, _t2, _t3, _t4);
}

// SIGNAL 31
void SketchWidget::ratsnestConnectSignal(long _t1, const QString & _t2, bool _t3, bool _t4)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 31, nullptr, _t1, _t2, _t3, _t4);
}

// SIGNAL 32
void SketchWidget::updatePartLabelInstanceTitleSignal(long _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 32, nullptr, _t1);
}

// SIGNAL 33
void SketchWidget::filenameIfSignal(QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 33, nullptr, _t1);
}

// SIGNAL 34
void SketchWidget::collectRatsnestSignal(QList<SketchWidget*> & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 34, nullptr, _t1);
}

// SIGNAL 35
void SketchWidget::removeRatsnestSignal(QList<struct ConnectorEdge*> & _t1, QUndoCommand * _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 35, nullptr, _t1, _t2);
}

// SIGNAL 36
void SketchWidget::updateLayerMenuSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 36, nullptr);
}

// SIGNAL 37
void SketchWidget::swapBoardImageSignal(SketchWidget * _t1, ItemBase * _t2, const QString & _t3, const QString & _t4, bool _t5)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 37, nullptr, _t1, _t2, _t3, _t4, _t5);
}

// SIGNAL 38
void SketchWidget::canConnectSignal(Wire * _t1, ItemBase * _t2, bool & _t3)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 38, nullptr, _t1, _t2, _t3);
}

// SIGNAL 39
void SketchWidget::swapStartSignal(SwapThing & _t1, bool _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 39, nullptr, _t1, _t2);
}

// SIGNAL 40
void SketchWidget::showing(SketchWidget * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 40, nullptr, _t1);
}

// SIGNAL 41
void SketchWidget::clickedItemCandidateSignal(QGraphicsItem * _t1, bool & _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 41, nullptr, _t1, _t2);
}

// SIGNAL 42
void SketchWidget::resizedSignal(ItemBase * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 42, nullptr, _t1);
}

// SIGNAL 43
void SketchWidget::cleanupRatsnestsSignal(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 43, nullptr, _t1);
}

// SIGNAL 44
void SketchWidget::addSubpartSignal(long _t1, long _t2, bool _t3)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 44, nullptr, _t1, _t2, _t3);
}

// SIGNAL 45
void SketchWidget::removeSubpartSignal(long _t1, long _t2, bool _t3)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 45, nullptr, _t1, _t2, _t3);
}

// SIGNAL 46
void SketchWidget::getDroppedItemViewLayerPlacementSignal(ModelPart * _t1, ViewLayer::ViewLayerPlacement & _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 46, nullptr, _t1, _t2);
}

// SIGNAL 47
void SketchWidget::packItemsSignal(int _t1, const QList<long> & _t2, QUndoCommand * _t3, bool _t4)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 47, nullptr, _t1, _t2, _t3, _t4);
}

// SIGNAL 48
void SketchWidget::routingCheckSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 48, nullptr);
}

// SIGNAL 49
void SketchWidget::disableUndoRedo()
{
    QMetaObject::activate(this, &staticMetaObject, 49, nullptr);
}

// SIGNAL 50
void SketchWidget::enableUndoRedo()
{
    QMetaObject::activate(this, &staticMetaObject, 50, nullptr);
}

// SIGNAL 51
void SketchWidget::undoSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 51, nullptr);
}
QT_WARNING_POP
