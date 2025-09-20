/****************************************************************************
** Meta object code from reading C++ file 'petoolview.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../fritzing-app/src/partseditor/petoolview.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'petoolview.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN15PEDoubleSpinBoxE_t {};
} // unnamed namespace

template <> constexpr inline auto PEDoubleSpinBox::qt_create_metaobjectdata<qt_meta_tag_ZN15PEDoubleSpinBoxE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "PEDoubleSpinBox",
        "getSpinAmount",
        "",
        "double&"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'getSpinAmount'
        QtMocHelpers::SignalData<void(double &)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 2 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<PEDoubleSpinBox, qt_meta_tag_ZN15PEDoubleSpinBoxE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject PEDoubleSpinBox::staticMetaObject = { {
    QMetaObject::SuperData::link<QDoubleSpinBox::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15PEDoubleSpinBoxE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15PEDoubleSpinBoxE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN15PEDoubleSpinBoxE_t>.metaTypes,
    nullptr
} };

void PEDoubleSpinBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<PEDoubleSpinBox *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->getSpinAmount((*reinterpret_cast< std::add_pointer_t<double&>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (PEDoubleSpinBox::*)(double & )>(_a, &PEDoubleSpinBox::getSpinAmount, 0))
            return;
    }
}

const QMetaObject *PEDoubleSpinBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PEDoubleSpinBox::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15PEDoubleSpinBoxE_t>.strings))
        return static_cast<void*>(this);
    return QDoubleSpinBox::qt_metacast(_clname);
}

int PEDoubleSpinBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDoubleSpinBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void PEDoubleSpinBox::getSpinAmount(double & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}
namespace {
struct qt_meta_tag_ZN10PEToolViewE_t {};
} // unnamed namespace

template <> constexpr inline auto PEToolView::qt_create_metaobjectdata<qt_meta_tag_ZN10PEToolViewE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "PEToolView",
        "switchedConnector",
        "",
        "removedConnector",
        "QDomElement",
        "pickModeChanged",
        "busModeChanged",
        "terminalPointChanged",
        "how",
        "coord",
        "value",
        "getSpinAmount",
        "double&",
        "connectorMetadataChanged",
        "ConnectorMetadata*",
        "switchConnector",
        "QTreeWidgetItem*",
        "current",
        "previous",
        "pickModeChangedSlot",
        "busModeChangedSlot",
        "descriptionEntry",
        "typeEntry",
        "nameEntry",
        "buttonChangeTerminalPoint",
        "terminalPointEntry",
        "getSpinAmountSlot",
        "removeConnector"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'switchedConnector'
        QtMocHelpers::SignalData<void(int)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Signal 'removedConnector'
        QtMocHelpers::SignalData<void(const QDomElement &)>(3, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 4, 2 },
        }}),
        // Signal 'pickModeChanged'
        QtMocHelpers::SignalData<void(bool)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Signal 'busModeChanged'
        QtMocHelpers::SignalData<void(bool)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Signal 'terminalPointChanged'
        QtMocHelpers::SignalData<void(const QString &)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 8 },
        }}),
        // Signal 'terminalPointChanged'
        QtMocHelpers::SignalData<void(const QString &, double)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 9 }, { QMetaType::Double, 10 },
        }}),
        // Signal 'getSpinAmount'
        QtMocHelpers::SignalData<void(double &)>(11, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 12, 2 },
        }}),
        // Signal 'connectorMetadataChanged'
        QtMocHelpers::SignalData<void(ConnectorMetadata *)>(13, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 14, 2 },
        }}),
        // Slot 'switchConnector'
        QtMocHelpers::SlotData<void(QTreeWidgetItem *, QTreeWidgetItem *)>(15, 2, QMC::AccessProtected, QMetaType::Void, {{
            { 0x80000000 | 16, 17 }, { 0x80000000 | 16, 18 },
        }}),
        // Slot 'pickModeChangedSlot'
        QtMocHelpers::SlotData<void()>(19, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'busModeChangedSlot'
        QtMocHelpers::SlotData<void(bool)>(20, 2, QMC::AccessProtected, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Slot 'descriptionEntry'
        QtMocHelpers::SlotData<void()>(21, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'typeEntry'
        QtMocHelpers::SlotData<void()>(22, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'nameEntry'
        QtMocHelpers::SlotData<void()>(23, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'buttonChangeTerminalPoint'
        QtMocHelpers::SlotData<void()>(24, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'terminalPointEntry'
        QtMocHelpers::SlotData<void()>(25, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'getSpinAmountSlot'
        QtMocHelpers::SlotData<void(double &)>(26, 2, QMC::AccessProtected, QMetaType::Void, {{
            { 0x80000000 | 12, 2 },
        }}),
        // Slot 'removeConnector'
        QtMocHelpers::SlotData<void()>(27, 2, QMC::AccessProtected, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<PEToolView, qt_meta_tag_ZN10PEToolViewE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject PEToolView::staticMetaObject = { {
    QMetaObject::SuperData::link<QFrame::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10PEToolViewE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10PEToolViewE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN10PEToolViewE_t>.metaTypes,
    nullptr
} };

void PEToolView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<PEToolView *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->switchedConnector((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->removedConnector((*reinterpret_cast< std::add_pointer_t<QDomElement>>(_a[1]))); break;
        case 2: _t->pickModeChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 3: _t->busModeChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 4: _t->terminalPointChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 5: _t->terminalPointChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[2]))); break;
        case 6: _t->getSpinAmount((*reinterpret_cast< std::add_pointer_t<double&>>(_a[1]))); break;
        case 7: _t->connectorMetadataChanged((*reinterpret_cast< std::add_pointer_t<ConnectorMetadata*>>(_a[1]))); break;
        case 8: _t->switchConnector((*reinterpret_cast< std::add_pointer_t<QTreeWidgetItem*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QTreeWidgetItem*>>(_a[2]))); break;
        case 9: _t->pickModeChangedSlot(); break;
        case 10: _t->busModeChangedSlot((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 11: _t->descriptionEntry(); break;
        case 12: _t->typeEntry(); break;
        case 13: _t->nameEntry(); break;
        case 14: _t->buttonChangeTerminalPoint(); break;
        case 15: _t->terminalPointEntry(); break;
        case 16: _t->getSpinAmountSlot((*reinterpret_cast< std::add_pointer_t<double&>>(_a[1]))); break;
        case 17: _t->removeConnector(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (PEToolView::*)(int )>(_a, &PEToolView::switchedConnector, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (PEToolView::*)(const QDomElement & )>(_a, &PEToolView::removedConnector, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (PEToolView::*)(bool )>(_a, &PEToolView::pickModeChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (PEToolView::*)(bool )>(_a, &PEToolView::busModeChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (PEToolView::*)(const QString & )>(_a, &PEToolView::terminalPointChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (PEToolView::*)(const QString & , double )>(_a, &PEToolView::terminalPointChanged, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (PEToolView::*)(double & )>(_a, &PEToolView::getSpinAmount, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (PEToolView::*)(ConnectorMetadata * )>(_a, &PEToolView::connectorMetadataChanged, 7))
            return;
    }
}

const QMetaObject *PEToolView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PEToolView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10PEToolViewE_t>.strings))
        return static_cast<void*>(this);
    return QFrame::qt_metacast(_clname);
}

int PEToolView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 18;
    }
    return _id;
}

// SIGNAL 0
void PEToolView::switchedConnector(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void PEToolView::removedConnector(const QDomElement & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void PEToolView::pickModeChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void PEToolView::busModeChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1);
}

// SIGNAL 4
void PEToolView::terminalPointChanged(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1);
}

// SIGNAL 5
void PEToolView::terminalPointChanged(const QString & _t1, double _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 5, nullptr, _t1, _t2);
}

// SIGNAL 6
void PEToolView::getSpinAmount(double & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 6, nullptr, _t1);
}

// SIGNAL 7
void PEToolView::connectorMetadataChanged(ConnectorMetadata * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 7, nullptr, _t1);
}
QT_WARNING_POP
