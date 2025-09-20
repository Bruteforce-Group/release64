/****************************************************************************
** Meta object code from reading C++ file 'infographicsview.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../fritzing-app/src/sketch/infographicsview.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'infographicsview.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN16InfoGraphicsViewE_t {};
} // unnamed namespace

template <> constexpr inline auto InfoGraphicsView::qt_create_metaobjectdata<qt_meta_tag_ZN16InfoGraphicsViewE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "InfoGraphicsView",
        "setVoltageSignal",
        "",
        "doEmit",
        "swapSignal",
        "family",
        "prop",
        "QMap<QString,QString>&",
        "propsMap",
        "ItemBase*",
        "changePinLabelsSignal",
        "setActiveWireSignal",
        "Wire*",
        "setActiveConnectorItemSignal",
        "ConnectorItem*",
        "newWireSignal",
        "setVoltage",
        "resizeBoard",
        "w",
        "h",
        "setInstanceTitleForCommand",
        "id",
        "oldTitle",
        "newTitle",
        "isUndoable"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'setVoltageSignal'
        QtMocHelpers::SignalData<void(double, bool)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Double, 2 }, { QMetaType::Bool, 3 },
        }}),
        // Signal 'swapSignal'
        QtMocHelpers::SignalData<void(const QString &, const QString &, QMap<QString,QString> &, ItemBase *)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 5 }, { QMetaType::QString, 6 }, { 0x80000000 | 7, 8 }, { 0x80000000 | 9, 2 },
        }}),
        // Signal 'changePinLabelsSignal'
        QtMocHelpers::SignalData<void(ItemBase *)>(10, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 9, 2 },
        }}),
        // Signal 'setActiveWireSignal'
        QtMocHelpers::SignalData<void(Wire *)>(11, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 12, 2 },
        }}),
        // Signal 'setActiveConnectorItemSignal'
        QtMocHelpers::SignalData<void(ConnectorItem *)>(13, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 14, 2 },
        }}),
        // Signal 'newWireSignal'
        QtMocHelpers::SignalData<void(Wire *)>(15, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 12, 2 },
        }}),
        // Slot 'setVoltage'
        QtMocHelpers::SlotData<void(double, bool)>(16, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Double, 2 }, { QMetaType::Bool, 3 },
        }}),
        // Slot 'resizeBoard'
        QtMocHelpers::SlotData<void(double, double, bool)>(17, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Double, 18 }, { QMetaType::Double, 19 }, { QMetaType::Bool, 3 },
        }}),
        // Slot 'setInstanceTitleForCommand'
        QtMocHelpers::SlotData<void(long, const QString &, const QString &, bool, bool)>(20, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Long, 21 }, { QMetaType::QString, 22 }, { QMetaType::QString, 23 }, { QMetaType::Bool, 24 },
            { QMetaType::Bool, 3 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<InfoGraphicsView, qt_meta_tag_ZN16InfoGraphicsViewE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject InfoGraphicsView::staticMetaObject = { {
    QMetaObject::SuperData::link<ZoomableGraphicsView::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN16InfoGraphicsViewE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN16InfoGraphicsViewE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN16InfoGraphicsViewE_t>.metaTypes,
    nullptr
} };

void InfoGraphicsView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<InfoGraphicsView *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->setVoltageSignal((*reinterpret_cast< std::add_pointer_t<double>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 1: _t->swapSignal((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QMap<QString,QString>&>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<ItemBase*>>(_a[4]))); break;
        case 2: _t->changePinLabelsSignal((*reinterpret_cast< std::add_pointer_t<ItemBase*>>(_a[1]))); break;
        case 3: _t->setActiveWireSignal((*reinterpret_cast< std::add_pointer_t<Wire*>>(_a[1]))); break;
        case 4: _t->setActiveConnectorItemSignal((*reinterpret_cast< std::add_pointer_t<ConnectorItem*>>(_a[1]))); break;
        case 5: _t->newWireSignal((*reinterpret_cast< std::add_pointer_t<Wire*>>(_a[1]))); break;
        case 6: _t->setVoltage((*reinterpret_cast< std::add_pointer_t<double>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 7: _t->resizeBoard((*reinterpret_cast< std::add_pointer_t<double>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[3]))); break;
        case 8: _t->setInstanceTitleForCommand((*reinterpret_cast< std::add_pointer_t<long>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[5]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 3:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< ItemBase* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< ItemBase* >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (InfoGraphicsView::*)(double , bool )>(_a, &InfoGraphicsView::setVoltageSignal, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (InfoGraphicsView::*)(const QString & , const QString & , QMap<QString,QString> & , ItemBase * )>(_a, &InfoGraphicsView::swapSignal, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (InfoGraphicsView::*)(ItemBase * )>(_a, &InfoGraphicsView::changePinLabelsSignal, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (InfoGraphicsView::*)(Wire * )>(_a, &InfoGraphicsView::setActiveWireSignal, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (InfoGraphicsView::*)(ConnectorItem * )>(_a, &InfoGraphicsView::setActiveConnectorItemSignal, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (InfoGraphicsView::*)(Wire * )>(_a, &InfoGraphicsView::newWireSignal, 5))
            return;
    }
}

const QMetaObject *InfoGraphicsView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *InfoGraphicsView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN16InfoGraphicsViewE_t>.strings))
        return static_cast<void*>(this);
    return ZoomableGraphicsView::qt_metacast(_clname);
}

int InfoGraphicsView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ZoomableGraphicsView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void InfoGraphicsView::setVoltageSignal(double _t1, bool _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1, _t2);
}

// SIGNAL 1
void InfoGraphicsView::swapSignal(const QString & _t1, const QString & _t2, QMap<QString,QString> & _t3, ItemBase * _t4)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1, _t2, _t3, _t4);
}

// SIGNAL 2
void InfoGraphicsView::changePinLabelsSignal(ItemBase * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void InfoGraphicsView::setActiveWireSignal(Wire * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1);
}

// SIGNAL 4
void InfoGraphicsView::setActiveConnectorItemSignal(ConnectorItem * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1);
}

// SIGNAL 5
void InfoGraphicsView::newWireSignal(Wire * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 5, nullptr, _t1);
}
QT_WARNING_POP
