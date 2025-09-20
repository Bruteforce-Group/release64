/****************************************************************************
** Meta object code from reading C++ file 'pcbsketchwidget.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../fritzing-app/src/sketch/pcbsketchwidget.h"
#include <QtGui/qtextcursor.h>
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pcbsketchwidget.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN15PCBSketchWidgetE_t {};
} // unnamed namespace

template <> constexpr inline auto PCBSketchWidget::qt_create_metaobjectdata<qt_meta_tag_ZN15PCBSketchWidgetE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "PCBSketchWidget",
        "subSwapSignal",
        "",
        "SketchWidget*",
        "ItemBase*",
        "newModuleID",
        "ViewLayer::ViewLayerPlacement",
        "long&",
        "newID",
        "QUndoCommand*",
        "parentCommand",
        "boardDeletedSignal",
        "boardReaddedSignal",
        "groundFillSignal",
        "copperFillSignal",
        "groundFillOldSignal",
        "copperFillOldSignal",
        "fabQuoteFinishedSignal",
        "resizeBoard",
        "w",
        "h",
        "doEmit",
        "showLabelFirstTimeForCommand",
        "itemID",
        "show",
        "changeBoardLayers",
        "layers",
        "id",
        "alignJumperItem",
        "JumperItem*",
        "QPointF&",
        "wireSplitSlot",
        "Wire*",
        "newPos",
        "oldPos",
        "oldLine",
        "postImageSlot",
        "GroundPlaneGeneratorOld*",
        "QImage*",
        "copperImage",
        "boardImage",
        "QGraphicsItem*",
        "board",
        "QList<QRectF>*",
        "gotFabQuote",
        "QNetworkReply*",
        "getDroppedItemViewLayerPlacement",
        "ModelPart*",
        "modelPart",
        "ViewLayer::ViewLayerPlacement&"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'subSwapSignal'
        QtMocHelpers::SignalData<void(SketchWidget *, ItemBase *, const QString &, ViewLayer::ViewLayerPlacement, long &, QUndoCommand *)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 2 }, { 0x80000000 | 4, 2 }, { QMetaType::QString, 5 }, { 0x80000000 | 6, 2 },
            { 0x80000000 | 7, 8 }, { 0x80000000 | 9, 10 },
        }}),
        // Signal 'boardDeletedSignal'
        QtMocHelpers::SignalData<void()>(11, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'boardReaddedSignal'
        QtMocHelpers::SignalData<void()>(12, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'groundFillSignal'
        QtMocHelpers::SignalData<void()>(13, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'copperFillSignal'
        QtMocHelpers::SignalData<void()>(14, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'groundFillOldSignal'
        QtMocHelpers::SignalData<void()>(15, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'copperFillOldSignal'
        QtMocHelpers::SignalData<void()>(16, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'fabQuoteFinishedSignal'
        QtMocHelpers::SignalData<void()>(17, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'resizeBoard'
        QtMocHelpers::SlotData<void(double, double, bool)>(18, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Double, 19 }, { QMetaType::Double, 20 }, { QMetaType::Bool, 21 },
        }}),
        // Slot 'showLabelFirstTimeForCommand'
        QtMocHelpers::SlotData<void(long, bool, bool)>(22, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Long, 23 }, { QMetaType::Bool, 24 }, { QMetaType::Bool, 21 },
        }}),
        // Slot 'changeBoardLayers'
        QtMocHelpers::SlotData<void(int, bool)>(25, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 26 }, { QMetaType::Bool, 21 },
        }}),
        // Slot 'resizeBoard'
        QtMocHelpers::SlotData<ItemBase *(long, double, double)>(18, 2, QMC::AccessPublic, 0x80000000 | 4, {{
            { QMetaType::Long, 27 }, { QMetaType::Double, 19 }, { QMetaType::Double, 20 },
        }}),
        // Slot 'alignJumperItem'
        QtMocHelpers::SlotData<void(JumperItem *, QPointF &)>(28, 2, QMC::AccessProtected, QMetaType::Void, {{
            { 0x80000000 | 29, 2 }, { 0x80000000 | 30, 2 },
        }}),
        // Slot 'wireSplitSlot'
        QtMocHelpers::SlotData<void(Wire *, QPointF, QPointF, const QLineF &)>(31, 2, QMC::AccessProtected, QMetaType::Void, {{
            { 0x80000000 | 32, 2 }, { QMetaType::QPointF, 33 }, { QMetaType::QPointF, 34 }, { QMetaType::QLineF, 35 },
        }}),
        // Slot 'postImageSlot'
        QtMocHelpers::SlotData<void(GroundPlaneGeneratorOld *, QImage *, QImage *, QGraphicsItem *, QList<QRectF> *)>(36, 2, QMC::AccessProtected, QMetaType::Void, {{
            { 0x80000000 | 37, 2 }, { 0x80000000 | 38, 39 }, { 0x80000000 | 38, 40 }, { 0x80000000 | 41, 42 },
            { 0x80000000 | 43, 2 },
        }}),
        // Slot 'gotFabQuote'
        QtMocHelpers::SlotData<void(QNetworkReply *)>(44, 2, QMC::AccessProtected, QMetaType::Void, {{
            { 0x80000000 | 45, 2 },
        }}),
        // Slot 'getDroppedItemViewLayerPlacement'
        QtMocHelpers::SlotData<void(ModelPart *, ViewLayer::ViewLayerPlacement &)>(46, 2, QMC::AccessProtected, QMetaType::Void, {{
            { 0x80000000 | 47, 48 }, { 0x80000000 | 49, 2 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<PCBSketchWidget, qt_meta_tag_ZN15PCBSketchWidgetE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject PCBSketchWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<SketchWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15PCBSketchWidgetE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15PCBSketchWidgetE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN15PCBSketchWidgetE_t>.metaTypes,
    nullptr
} };

void PCBSketchWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<PCBSketchWidget *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->subSwapSignal((*reinterpret_cast< std::add_pointer_t<SketchWidget*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<ItemBase*>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<ViewLayer::ViewLayerPlacement>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<long&>>(_a[5])),(*reinterpret_cast< std::add_pointer_t<QUndoCommand*>>(_a[6]))); break;
        case 1: _t->boardDeletedSignal(); break;
        case 2: _t->boardReaddedSignal(); break;
        case 3: _t->groundFillSignal(); break;
        case 4: _t->copperFillSignal(); break;
        case 5: _t->groundFillOldSignal(); break;
        case 6: _t->copperFillOldSignal(); break;
        case 7: _t->fabQuoteFinishedSignal(); break;
        case 8: _t->resizeBoard((*reinterpret_cast< std::add_pointer_t<double>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[3]))); break;
        case 9: _t->showLabelFirstTimeForCommand((*reinterpret_cast< std::add_pointer_t<long>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[3]))); break;
        case 10: _t->changeBoardLayers((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 11: { ItemBase* _r = _t->resizeBoard((*reinterpret_cast< std::add_pointer_t<long>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[3])));
            if (_a[0]) *reinterpret_cast< ItemBase**>(_a[0]) = std::move(_r); }  break;
        case 12: _t->alignJumperItem((*reinterpret_cast< std::add_pointer_t<JumperItem*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QPointF&>>(_a[2]))); break;
        case 13: _t->wireSplitSlot((*reinterpret_cast< std::add_pointer_t<Wire*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QPointF>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QPointF>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QLineF>>(_a[4]))); break;
        case 14: _t->postImageSlot((*reinterpret_cast< std::add_pointer_t<GroundPlaneGeneratorOld*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QImage*>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QImage*>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QGraphicsItem*>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<QList<QRectF>*>>(_a[5]))); break;
        case 15: _t->gotFabQuote((*reinterpret_cast< std::add_pointer_t<QNetworkReply*>>(_a[1]))); break;
        case 16: _t->getDroppedItemViewLayerPlacement((*reinterpret_cast< std::add_pointer_t<ModelPart*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<ViewLayer::ViewLayerPlacement&>>(_a[2]))); break;
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
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< SketchWidget* >(); break;
            }
            break;
        case 14:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 3:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QGraphicsItem* >(); break;
            }
            break;
        case 15:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QNetworkReply* >(); break;
            }
            break;
        case 16:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< ModelPart* >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (PCBSketchWidget::*)(SketchWidget * , ItemBase * , const QString & , ViewLayer::ViewLayerPlacement , long & , QUndoCommand * )>(_a, &PCBSketchWidget::subSwapSignal, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (PCBSketchWidget::*)()>(_a, &PCBSketchWidget::boardDeletedSignal, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (PCBSketchWidget::*)()>(_a, &PCBSketchWidget::boardReaddedSignal, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (PCBSketchWidget::*)()>(_a, &PCBSketchWidget::groundFillSignal, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (PCBSketchWidget::*)()>(_a, &PCBSketchWidget::copperFillSignal, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (PCBSketchWidget::*)()>(_a, &PCBSketchWidget::groundFillOldSignal, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (PCBSketchWidget::*)()>(_a, &PCBSketchWidget::copperFillOldSignal, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (PCBSketchWidget::*)()>(_a, &PCBSketchWidget::fabQuoteFinishedSignal, 7))
            return;
    }
}

const QMetaObject *PCBSketchWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PCBSketchWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15PCBSketchWidgetE_t>.strings))
        return static_cast<void*>(this);
    return SketchWidget::qt_metacast(_clname);
}

int PCBSketchWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SketchWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    }
    return _id;
}

// SIGNAL 0
void PCBSketchWidget::subSwapSignal(SketchWidget * _t1, ItemBase * _t2, const QString & _t3, ViewLayer::ViewLayerPlacement _t4, long & _t5, QUndoCommand * _t6)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1, _t2, _t3, _t4, _t5, _t6);
}

// SIGNAL 1
void PCBSketchWidget::boardDeletedSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void PCBSketchWidget::boardReaddedSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void PCBSketchWidget::groundFillSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void PCBSketchWidget::copperFillSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void PCBSketchWidget::groundFillOldSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void PCBSketchWidget::copperFillOldSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void PCBSketchWidget::fabQuoteFinishedSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}
QT_WARNING_POP
