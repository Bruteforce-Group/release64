/****************************************************************************
** Meta object code from reading C++ file 'updatedialog.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../fritzing-app/src/version/updatedialog.h"
#include <QtGui/qtextcursor.h>
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'updatedialog.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN12UpdateDialogE_t {};
} // unnamed namespace

template <> constexpr inline auto UpdateDialog::qt_create_metaobjectdata<qt_meta_tag_ZN12UpdateDialogE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "UpdateDialog",
        "enableAgainSignal",
        "",
        "enable",
        "installNewParts",
        "releasesAvailableSlot",
        "partsAvailableSlot",
        "xmlErrorSlot",
        "QXmlStreamReader::Error",
        "errorCode",
        "httpErrorSlot",
        "QNetworkReply::NetworkError",
        "jsonPartsErrorSlot",
        "error",
        "httpPartsErrorSlot",
        "stopClose",
        "updateParts",
        "onCleanRepo",
        "ModFileDialog*",
        "modFileDialog",
        "openInBrowser"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'enableAgainSignal'
        QtMocHelpers::SignalData<void(bool)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 3 },
        }}),
        // Signal 'installNewParts'
        QtMocHelpers::SignalData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'releasesAvailableSlot'
        QtMocHelpers::SlotData<void()>(5, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'partsAvailableSlot'
        QtMocHelpers::SlotData<void()>(6, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'xmlErrorSlot'
        QtMocHelpers::SlotData<void(QXmlStreamReader::Error)>(7, 2, QMC::AccessProtected, QMetaType::Void, {{
            { 0x80000000 | 8, 9 },
        }}),
        // Slot 'httpErrorSlot'
        QtMocHelpers::SlotData<void(QNetworkReply::NetworkError)>(10, 2, QMC::AccessProtected, QMetaType::Void, {{
            { 0x80000000 | 11, 2 },
        }}),
        // Slot 'jsonPartsErrorSlot'
        QtMocHelpers::SlotData<void(QString)>(12, 2, QMC::AccessProtected, QMetaType::Void, {{
            { QMetaType::QString, 13 },
        }}),
        // Slot 'httpPartsErrorSlot'
        QtMocHelpers::SlotData<void(QString)>(14, 2, QMC::AccessProtected, QMetaType::Void, {{
            { QMetaType::QString, 13 },
        }}),
        // Slot 'stopClose'
        QtMocHelpers::SlotData<void()>(15, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'updateParts'
        QtMocHelpers::SlotData<void()>(16, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onCleanRepo'
        QtMocHelpers::SlotData<void(ModFileDialog *)>(17, 2, QMC::AccessProtected, QMetaType::Void, {{
            { 0x80000000 | 18, 19 },
        }}),
        // Slot 'openInBrowser'
        QtMocHelpers::SlotData<void()>(20, 2, QMC::AccessProtected, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<UpdateDialog, qt_meta_tag_ZN12UpdateDialogE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject UpdateDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12UpdateDialogE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12UpdateDialogE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN12UpdateDialogE_t>.metaTypes,
    nullptr
} };

void UpdateDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<UpdateDialog *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->enableAgainSignal((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 1: _t->installNewParts(); break;
        case 2: _t->releasesAvailableSlot(); break;
        case 3: _t->partsAvailableSlot(); break;
        case 4: _t->xmlErrorSlot((*reinterpret_cast< std::add_pointer_t<QXmlStreamReader::Error>>(_a[1]))); break;
        case 5: _t->httpErrorSlot((*reinterpret_cast< std::add_pointer_t<QNetworkReply::NetworkError>>(_a[1]))); break;
        case 6: _t->jsonPartsErrorSlot((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 7: _t->httpPartsErrorSlot((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 8: _t->stopClose(); break;
        case 9: _t->updateParts(); break;
        case 10: _t->onCleanRepo((*reinterpret_cast< std::add_pointer_t<ModFileDialog*>>(_a[1]))); break;
        case 11: _t->openInBrowser(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QNetworkReply::NetworkError >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (UpdateDialog::*)(bool )>(_a, &UpdateDialog::enableAgainSignal, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (UpdateDialog::*)()>(_a, &UpdateDialog::installNewParts, 1))
            return;
    }
}

const QMetaObject *UpdateDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UpdateDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12UpdateDialogE_t>.strings))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "PartsCheckerUpdateInterface"))
        return static_cast< PartsCheckerUpdateInterface*>(this);
    return QDialog::qt_metacast(_clname);
}

int UpdateDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void UpdateDialog::enableAgainSignal(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void UpdateDialog::installNewParts()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
