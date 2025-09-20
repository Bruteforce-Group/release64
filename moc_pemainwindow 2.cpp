/****************************************************************************
** Meta object code from reading C++ file 'pemainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../fritzing-app/src/partseditor/pemainwindow.h"
#include <QtGui/qtextcursor.h>
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pemainwindow.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN16IconSketchWidgetE_t {};
} // unnamed namespace

template <> constexpr inline auto IconSketchWidget::qt_create_metaobjectdata<qt_meta_tag_ZN16IconSketchWidgetE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "IconSketchWidget"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<IconSketchWidget, qt_meta_tag_ZN16IconSketchWidgetE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject IconSketchWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<SketchWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN16IconSketchWidgetE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN16IconSketchWidgetE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN16IconSketchWidgetE_t>.metaTypes,
    nullptr
} };

void IconSketchWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<IconSketchWidget *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *IconSketchWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *IconSketchWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN16IconSketchWidgetE_t>.strings))
        return static_cast<void*>(this);
    return SketchWidget::qt_metacast(_clname);
}

int IconSketchWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SketchWidget::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {
struct qt_meta_tag_ZN12PEMainWindowE_t {};
} // unnamed namespace

template <> constexpr inline auto PEMainWindow::qt_create_metaobjectdata<qt_meta_tag_ZN12PEMainWindowE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "PEMainWindow",
        "addToMyPartsSignal",
        "",
        "ModelPart*",
        "metadataChanged",
        "name",
        "value",
        "propertiesChanged",
        "QHash<QString,QString>",
        "tagsChanged",
        "connectorMetadataChanged",
        "ConnectorMetadata*",
        "removedConnectors",
        "QList<ConnectorMetadata*>&",
        "highlightSlot",
        "PEGraphicsItem*",
        "pegiMousePressed",
        "bool&",
        "ignore",
        "pegiMouseReleased",
        "pegiTerminalPointMoved",
        "pegiTerminalPointChanged",
        "before",
        "after",
        "switchedConnector",
        "removedConnector",
        "QDomElement",
        "terminalPointChanged",
        "how",
        "coord",
        "getSpinAmount",
        "double&",
        "amount",
        "pickModeChanged",
        "busModeChanged",
        "connectorCountChanged",
        "deleteBusConnection",
        "newWireSlot",
        "Wire*",
        "wireChangedSlot",
        "oldLine",
        "newLine",
        "oldPos",
        "newPos",
        "ConnectorItem*",
        "from",
        "to",
        "connectorsTypeChanged",
        "Connector::ConnectorType",
        "smdChanged",
        "showing",
        "SketchWidget*",
        "updateExportMenu",
        "updateEditMenu",
        "s2sMessageSlot",
        "message",
        "initZoom",
        "showMetadataView",
        "showConnectorsView",
        "showIconView",
        "loadImage",
        "save",
        "saveAs",
        "showInOS",
        "tabWidget_currentChanged",
        "index",
        "backupSketch",
        "updateWindowMenu",
        "updateWireMenu",
        "closeLater",
        "resetNextPick",
        "reuseBreadboard",
        "reuseSchematic",
        "reusePCB",
        "convertToTenth",
        "hideOtherViews",
        "updateLayerMenu",
        "resetLayout",
        "updateAssignedConnectors",
        "itemAddedSlot",
        "ItemBase*",
        "ViewLayer::ViewLayerPlacement",
        "ViewGeometry",
        "id",
        "dropOrigin",
        "itemMovedSlot",
        "clickedItemCandidateSlot",
        "QGraphicsItem*",
        "ok",
        "resizedSlot"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'addToMyPartsSignal'
        QtMocHelpers::SignalData<void(ModelPart *, const QStringList &)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 2 }, { QMetaType::QStringList, 2 },
        }}),
        // Slot 'metadataChanged'
        QtMocHelpers::SlotData<void(const QString &, const QString &)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 5 }, { QMetaType::QString, 6 },
        }}),
        // Slot 'propertiesChanged'
        QtMocHelpers::SlotData<void(const QHash<QString,QString> &)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 8, 2 },
        }}),
        // Slot 'tagsChanged'
        QtMocHelpers::SlotData<void(const QStringList &)>(9, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QStringList, 2 },
        }}),
        // Slot 'connectorMetadataChanged'
        QtMocHelpers::SlotData<void(ConnectorMetadata *)>(10, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 11, 2 },
        }}),
        // Slot 'removedConnectors'
        QtMocHelpers::SlotData<void(QList<ConnectorMetadata*> &)>(12, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 13, 2 },
        }}),
        // Slot 'highlightSlot'
        QtMocHelpers::SlotData<void(PEGraphicsItem *)>(14, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 15, 2 },
        }}),
        // Slot 'pegiMousePressed'
        QtMocHelpers::SlotData<void(PEGraphicsItem *, bool &)>(16, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 15, 2 }, { 0x80000000 | 17, 18 },
        }}),
        // Slot 'pegiMouseReleased'
        QtMocHelpers::SlotData<void(PEGraphicsItem *)>(19, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 15, 2 },
        }}),
        // Slot 'pegiTerminalPointMoved'
        QtMocHelpers::SlotData<void(PEGraphicsItem *, QPointF)>(20, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 15, 2 }, { QMetaType::QPointF, 2 },
        }}),
        // Slot 'pegiTerminalPointChanged'
        QtMocHelpers::SlotData<void(PEGraphicsItem *, QPointF, QPointF)>(21, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 15, 2 }, { QMetaType::QPointF, 22 }, { QMetaType::QPointF, 23 },
        }}),
        // Slot 'switchedConnector'
        QtMocHelpers::SlotData<void(int)>(24, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Slot 'removedConnector'
        QtMocHelpers::SlotData<void(const QDomElement &)>(25, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 26, 2 },
        }}),
        // Slot 'terminalPointChanged'
        QtMocHelpers::SlotData<void(const QString &)>(27, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 28 },
        }}),
        // Slot 'terminalPointChanged'
        QtMocHelpers::SlotData<void(const QString &, double)>(27, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 29 }, { QMetaType::Double, 6 },
        }}),
        // Slot 'getSpinAmount'
        QtMocHelpers::SlotData<void(double &)>(30, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 31, 32 },
        }}),
        // Slot 'pickModeChanged'
        QtMocHelpers::SlotData<void(bool)>(33, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Slot 'busModeChanged'
        QtMocHelpers::SlotData<void(bool)>(34, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Slot 'connectorCountChanged'
        QtMocHelpers::SlotData<void(int)>(35, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Slot 'deleteBusConnection'
        QtMocHelpers::SlotData<void()>(36, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'newWireSlot'
        QtMocHelpers::SlotData<void(Wire *)>(37, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 38, 2 },
        }}),
        // Slot 'wireChangedSlot'
        QtMocHelpers::SlotData<void(Wire *, const QLineF &, const QLineF &, QPointF, QPointF, ConnectorItem *, ConnectorItem *)>(39, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 38, 2 }, { QMetaType::QLineF, 40 }, { QMetaType::QLineF, 41 }, { QMetaType::QPointF, 42 },
            { QMetaType::QPointF, 43 }, { 0x80000000 | 44, 45 }, { 0x80000000 | 44, 46 },
        }}),
        // Slot 'connectorsTypeChanged'
        QtMocHelpers::SlotData<void(Connector::ConnectorType)>(47, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 48, 2 },
        }}),
        // Slot 'smdChanged'
        QtMocHelpers::SlotData<void(const QString &)>(49, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 2 },
        }}),
        // Slot 'showing'
        QtMocHelpers::SlotData<void(SketchWidget *)>(50, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 51, 2 },
        }}),
        // Slot 'updateExportMenu'
        QtMocHelpers::SlotData<void()>(52, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'updateEditMenu'
        QtMocHelpers::SlotData<void()>(53, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 's2sMessageSlot'
        QtMocHelpers::SlotData<void(const QString &)>(54, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 55 },
        }}),
        // Slot 'initZoom'
        QtMocHelpers::SlotData<void()>(56, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'showMetadataView'
        QtMocHelpers::SlotData<void()>(57, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'showConnectorsView'
        QtMocHelpers::SlotData<void()>(58, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'showIconView'
        QtMocHelpers::SlotData<void()>(59, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'loadImage'
        QtMocHelpers::SlotData<void()>(60, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'save'
        QtMocHelpers::SlotData<bool()>(61, 2, QMC::AccessProtected, QMetaType::Bool),
        // Slot 'saveAs'
        QtMocHelpers::SlotData<bool()>(62, 2, QMC::AccessProtected, QMetaType::Bool),
        // Slot 'showInOS'
        QtMocHelpers::SlotData<void()>(63, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'tabWidget_currentChanged'
        QtMocHelpers::SlotData<void(int)>(64, 2, QMC::AccessProtected, QMetaType::Void, {{
            { QMetaType::Int, 65 },
        }}),
        // Slot 'backupSketch'
        QtMocHelpers::SlotData<void()>(66, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'updateWindowMenu'
        QtMocHelpers::SlotData<void()>(67, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'updateWireMenu'
        QtMocHelpers::SlotData<void()>(68, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'closeLater'
        QtMocHelpers::SlotData<void()>(69, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'resetNextPick'
        QtMocHelpers::SlotData<void()>(70, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'reuseBreadboard'
        QtMocHelpers::SlotData<void()>(71, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'reuseSchematic'
        QtMocHelpers::SlotData<void()>(72, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'reusePCB'
        QtMocHelpers::SlotData<void()>(73, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'convertToTenth'
        QtMocHelpers::SlotData<void()>(74, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'hideOtherViews'
        QtMocHelpers::SlotData<void()>(75, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'updateLayerMenu'
        QtMocHelpers::SlotData<void(bool)>(76, 2, QMC::AccessProtected, QMetaType::Void, {{
            { QMetaType::Bool, 77 },
        }}),
        // Slot 'updateLayerMenu'
        QtMocHelpers::SlotData<void()>(76, 2, QMC::AccessProtected | QMC::MethodCloned, QMetaType::Void),
        // Slot 'updateAssignedConnectors'
        QtMocHelpers::SlotData<void()>(78, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'itemAddedSlot'
        QtMocHelpers::SlotData<void(ModelPart *, ItemBase *, ViewLayer::ViewLayerPlacement, const ViewGeometry &, long, SketchWidget *)>(79, 2, QMC::AccessProtected, QMetaType::Void, {{
            { 0x80000000 | 3, 2 }, { 0x80000000 | 80, 2 }, { 0x80000000 | 81, 2 }, { 0x80000000 | 82, 2 },
            { QMetaType::Long, 83 }, { 0x80000000 | 51, 84 },
        }}),
        // Slot 'itemMovedSlot'
        QtMocHelpers::SlotData<void(ItemBase *)>(85, 2, QMC::AccessProtected, QMetaType::Void, {{
            { 0x80000000 | 80, 2 },
        }}),
        // Slot 'clickedItemCandidateSlot'
        QtMocHelpers::SlotData<void(QGraphicsItem *, bool &)>(86, 2, QMC::AccessProtected, QMetaType::Void, {{
            { 0x80000000 | 87, 2 }, { 0x80000000 | 17, 88 },
        }}),
        // Slot 'resizedSlot'
        QtMocHelpers::SlotData<void(ItemBase *)>(89, 2, QMC::AccessProtected, QMetaType::Void, {{
            { 0x80000000 | 80, 2 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<PEMainWindow, qt_meta_tag_ZN12PEMainWindowE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject PEMainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<MainWindow::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12PEMainWindowE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12PEMainWindowE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN12PEMainWindowE_t>.metaTypes,
    nullptr
} };

void PEMainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<PEMainWindow *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->addToMyPartsSignal((*reinterpret_cast< std::add_pointer_t<ModelPart*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QStringList>>(_a[2]))); break;
        case 1: _t->metadataChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 2: _t->propertiesChanged((*reinterpret_cast< std::add_pointer_t<QHash<QString,QString>>>(_a[1]))); break;
        case 3: _t->tagsChanged((*reinterpret_cast< std::add_pointer_t<QStringList>>(_a[1]))); break;
        case 4: _t->connectorMetadataChanged((*reinterpret_cast< std::add_pointer_t<ConnectorMetadata*>>(_a[1]))); break;
        case 5: _t->removedConnectors((*reinterpret_cast< std::add_pointer_t<QList<ConnectorMetadata*>&>>(_a[1]))); break;
        case 6: _t->highlightSlot((*reinterpret_cast< std::add_pointer_t<PEGraphicsItem*>>(_a[1]))); break;
        case 7: _t->pegiMousePressed((*reinterpret_cast< std::add_pointer_t<PEGraphicsItem*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool&>>(_a[2]))); break;
        case 8: _t->pegiMouseReleased((*reinterpret_cast< std::add_pointer_t<PEGraphicsItem*>>(_a[1]))); break;
        case 9: _t->pegiTerminalPointMoved((*reinterpret_cast< std::add_pointer_t<PEGraphicsItem*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QPointF>>(_a[2]))); break;
        case 10: _t->pegiTerminalPointChanged((*reinterpret_cast< std::add_pointer_t<PEGraphicsItem*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QPointF>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QPointF>>(_a[3]))); break;
        case 11: _t->switchedConnector((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 12: _t->removedConnector((*reinterpret_cast< std::add_pointer_t<QDomElement>>(_a[1]))); break;
        case 13: _t->terminalPointChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 14: _t->terminalPointChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[2]))); break;
        case 15: _t->getSpinAmount((*reinterpret_cast< std::add_pointer_t<double&>>(_a[1]))); break;
        case 16: _t->pickModeChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 17: _t->busModeChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 18: _t->connectorCountChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 19: _t->deleteBusConnection(); break;
        case 20: _t->newWireSlot((*reinterpret_cast< std::add_pointer_t<Wire*>>(_a[1]))); break;
        case 21: _t->wireChangedSlot((*reinterpret_cast< std::add_pointer_t<Wire*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QLineF>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QLineF>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QPointF>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<QPointF>>(_a[5])),(*reinterpret_cast< std::add_pointer_t<ConnectorItem*>>(_a[6])),(*reinterpret_cast< std::add_pointer_t<ConnectorItem*>>(_a[7]))); break;
        case 22: _t->connectorsTypeChanged((*reinterpret_cast< std::add_pointer_t<Connector::ConnectorType>>(_a[1]))); break;
        case 23: _t->smdChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 24: _t->showing((*reinterpret_cast< std::add_pointer_t<SketchWidget*>>(_a[1]))); break;
        case 25: _t->updateExportMenu(); break;
        case 26: _t->updateEditMenu(); break;
        case 27: _t->s2sMessageSlot((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 28: _t->initZoom(); break;
        case 29: _t->showMetadataView(); break;
        case 30: _t->showConnectorsView(); break;
        case 31: _t->showIconView(); break;
        case 32: _t->loadImage(); break;
        case 33: { bool _r = _t->save();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 34: { bool _r = _t->saveAs();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 35: _t->showInOS(); break;
        case 36: _t->tabWidget_currentChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 37: _t->backupSketch(); break;
        case 38: _t->updateWindowMenu(); break;
        case 39: _t->updateWireMenu(); break;
        case 40: _t->closeLater(); break;
        case 41: _t->resetNextPick(); break;
        case 42: _t->reuseBreadboard(); break;
        case 43: _t->reuseSchematic(); break;
        case 44: _t->reusePCB(); break;
        case 45: _t->convertToTenth(); break;
        case 46: _t->hideOtherViews(); break;
        case 47: _t->updateLayerMenu((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 48: _t->updateLayerMenu(); break;
        case 49: _t->updateAssignedConnectors(); break;
        case 50: _t->itemAddedSlot((*reinterpret_cast< std::add_pointer_t<ModelPart*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<ItemBase*>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<ViewLayer::ViewLayerPlacement>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<ViewGeometry>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<long>>(_a[5])),(*reinterpret_cast< std::add_pointer_t<SketchWidget*>>(_a[6]))); break;
        case 51: _t->itemMovedSlot((*reinterpret_cast< std::add_pointer_t<ItemBase*>>(_a[1]))); break;
        case 52: _t->clickedItemCandidateSlot((*reinterpret_cast< std::add_pointer_t<QGraphicsItem*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool&>>(_a[2]))); break;
        case 53: _t->resizedSlot((*reinterpret_cast< std::add_pointer_t<ItemBase*>>(_a[1]))); break;
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
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< ModelPart* >(); break;
            }
            break;
        case 20:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< Wire* >(); break;
            }
            break;
        case 21:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 6:
            case 5:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< ConnectorItem* >(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< Wire* >(); break;
            }
            break;
        case 24:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< SketchWidget* >(); break;
            }
            break;
        case 50:
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
        case 51:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< ItemBase* >(); break;
            }
            break;
        case 52:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QGraphicsItem* >(); break;
            }
            break;
        case 53:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< ItemBase* >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (PEMainWindow::*)(ModelPart * , const QStringList & )>(_a, &PEMainWindow::addToMyPartsSignal, 0))
            return;
    }
}

const QMetaObject *PEMainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PEMainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12PEMainWindowE_t>.strings))
        return static_cast<void*>(this);
    return MainWindow::qt_metacast(_clname);
}

int PEMainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = MainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 54)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 54;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 54)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 54;
    }
    return _id;
}

// SIGNAL 0
void PEMainWindow::addToMyPartsSignal(ModelPart * _t1, const QStringList & _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1, _t2);
}
QT_WARNING_POP
