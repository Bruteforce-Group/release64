/****************************************************************************
** Meta object code from reading C++ file 'peconnectorsview.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../fritzing-app/src/partseditor/peconnectorsview.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'peconnectorsview.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN16PEConnectorsViewE_t {};
} // unnamed namespace

template <> constexpr inline auto PEConnectorsView::qt_create_metaobjectdata<qt_meta_tag_ZN16PEConnectorsViewE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "PEConnectorsView",
        "connectorMetadataChanged",
        "",
        "ConnectorMetadata*",
        "removedConnectors",
        "QList<ConnectorMetadata*>&",
        "connectorCountChanged",
        "connectorsTypeChanged",
        "Connector::ConnectorType",
        "smdChanged",
        "nameEntry",
        "descriptionEntry",
        "typeEntry",
        "connectorCountEntry",
        "removeConnector",
        "allTypeEntry",
        "smdEntry",
        "uncheckRadios"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'connectorMetadataChanged'
        QtMocHelpers::SignalData<void(ConnectorMetadata *)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 2 },
        }}),
        // Signal 'removedConnectors'
        QtMocHelpers::SignalData<void(QList<struct ConnectorMetadata*> &)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 5, 2 },
        }}),
        // Signal 'connectorCountChanged'
        QtMocHelpers::SignalData<void(int)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Signal 'connectorsTypeChanged'
        QtMocHelpers::SignalData<void(Connector::ConnectorType)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 8, 2 },
        }}),
        // Signal 'smdChanged'
        QtMocHelpers::SignalData<void(const QString &)>(9, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 2 },
        }}),
        // Slot 'nameEntry'
        QtMocHelpers::SlotData<void()>(10, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'descriptionEntry'
        QtMocHelpers::SlotData<void()>(11, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'typeEntry'
        QtMocHelpers::SlotData<void()>(12, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'connectorCountEntry'
        QtMocHelpers::SlotData<void()>(13, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'removeConnector'
        QtMocHelpers::SlotData<void()>(14, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'allTypeEntry'
        QtMocHelpers::SlotData<void()>(15, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'smdEntry'
        QtMocHelpers::SlotData<void()>(16, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'uncheckRadios'
        QtMocHelpers::SlotData<void()>(17, 2, QMC::AccessProtected, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<PEConnectorsView, qt_meta_tag_ZN16PEConnectorsViewE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject PEConnectorsView::staticMetaObject = { {
    QMetaObject::SuperData::link<QFrame::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN16PEConnectorsViewE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN16PEConnectorsViewE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN16PEConnectorsViewE_t>.metaTypes,
    nullptr
} };

void PEConnectorsView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<PEConnectorsView *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->connectorMetadataChanged((*reinterpret_cast< std::add_pointer_t<ConnectorMetadata*>>(_a[1]))); break;
        case 1: _t->removedConnectors((*reinterpret_cast< std::add_pointer_t<QList<ConnectorMetadata*>&>>(_a[1]))); break;
        case 2: _t->connectorCountChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->connectorsTypeChanged((*reinterpret_cast< std::add_pointer_t<Connector::ConnectorType>>(_a[1]))); break;
        case 4: _t->smdChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 5: _t->nameEntry(); break;
        case 6: _t->descriptionEntry(); break;
        case 7: _t->typeEntry(); break;
        case 8: _t->connectorCountEntry(); break;
        case 9: _t->removeConnector(); break;
        case 10: _t->allTypeEntry(); break;
        case 11: _t->smdEntry(); break;
        case 12: _t->uncheckRadios(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (PEConnectorsView::*)(ConnectorMetadata * )>(_a, &PEConnectorsView::connectorMetadataChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (PEConnectorsView::*)(QList<struct ConnectorMetadata*> & )>(_a, &PEConnectorsView::removedConnectors, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (PEConnectorsView::*)(int )>(_a, &PEConnectorsView::connectorCountChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (PEConnectorsView::*)(Connector::ConnectorType )>(_a, &PEConnectorsView::connectorsTypeChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (PEConnectorsView::*)(const QString & )>(_a, &PEConnectorsView::smdChanged, 4))
            return;
    }
}

const QMetaObject *PEConnectorsView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PEConnectorsView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN16PEConnectorsViewE_t>.strings))
        return static_cast<void*>(this);
    return QFrame::qt_metacast(_clname);
}

int PEConnectorsView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void PEConnectorsView::connectorMetadataChanged(ConnectorMetadata * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void PEConnectorsView::removedConnectors(QList<struct ConnectorMetadata*> & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void PEConnectorsView::connectorCountChanged(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void PEConnectorsView::connectorsTypeChanged(Connector::ConnectorType _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1);
}

// SIGNAL 4
void PEConnectorsView::smdChanged(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1);
}
QT_WARNING_POP
