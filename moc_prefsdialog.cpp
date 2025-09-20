/****************************************************************************
** Meta object code from reading C++ file 'prefsdialog.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../fritzing-app/src/dialogs/prefsdialog.h"
#include <QtGui/qtextcursor.h>
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'prefsdialog.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN11PrefsDialogE_t {};
} // unnamed namespace

template <> constexpr inline auto PrefsDialog::qt_create_metaobjectdata<qt_meta_tag_ZN11PrefsDialogE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "PrefsDialog",
        "changeLanguage",
        "",
        "clear",
        "setConnectedColor",
        "setUnconnectedColor",
        "changeWheelBehavior",
        "toggleAutosave",
        "changeAutosavePeriod",
        "curvyChanged",
        "chooseProgrammer",
        "setSimulationTimeStepMode",
        "timeStepMode",
        "setSimulationNumberOfSteps",
        "numberOfSteps",
        "setSimulationTimeStep",
        "timeStep",
        "setSimulationAnimationTime",
        "animationTime"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'changeLanguage'
        QtMocHelpers::SlotData<void(int)>(1, 2, QMC::AccessProtected, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Slot 'clear'
        QtMocHelpers::SlotData<void()>(3, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'setConnectedColor'
        QtMocHelpers::SlotData<void()>(4, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'setUnconnectedColor'
        QtMocHelpers::SlotData<void()>(5, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'changeWheelBehavior'
        QtMocHelpers::SlotData<void()>(6, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'toggleAutosave'
        QtMocHelpers::SlotData<void(bool)>(7, 2, QMC::AccessProtected, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Slot 'changeAutosavePeriod'
        QtMocHelpers::SlotData<void(int)>(8, 2, QMC::AccessProtected, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Slot 'curvyChanged'
        QtMocHelpers::SlotData<void()>(9, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'chooseProgrammer'
        QtMocHelpers::SlotData<void()>(10, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'setSimulationTimeStepMode'
        QtMocHelpers::SlotData<void(const bool &)>(11, 2, QMC::AccessProtected, QMetaType::Void, {{
            { QMetaType::Bool, 12 },
        }}),
        // Slot 'setSimulationNumberOfSteps'
        QtMocHelpers::SlotData<void(const QString &)>(13, 2, QMC::AccessProtected, QMetaType::Void, {{
            { QMetaType::QString, 14 },
        }}),
        // Slot 'setSimulationTimeStep'
        QtMocHelpers::SlotData<void(const QString &)>(15, 2, QMC::AccessProtected, QMetaType::Void, {{
            { QMetaType::QString, 16 },
        }}),
        // Slot 'setSimulationAnimationTime'
        QtMocHelpers::SlotData<void(const QString &)>(17, 2, QMC::AccessProtected, QMetaType::Void, {{
            { QMetaType::QString, 18 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<PrefsDialog, qt_meta_tag_ZN11PrefsDialogE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject PrefsDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11PrefsDialogE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11PrefsDialogE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN11PrefsDialogE_t>.metaTypes,
    nullptr
} };

void PrefsDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<PrefsDialog *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->changeLanguage((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->clear(); break;
        case 2: _t->setConnectedColor(); break;
        case 3: _t->setUnconnectedColor(); break;
        case 4: _t->changeWheelBehavior(); break;
        case 5: _t->toggleAutosave((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 6: _t->changeAutosavePeriod((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 7: _t->curvyChanged(); break;
        case 8: _t->chooseProgrammer(); break;
        case 9: _t->setSimulationTimeStepMode((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 10: _t->setSimulationNumberOfSteps((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 11: _t->setSimulationTimeStep((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 12: _t->setSimulationAnimationTime((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *PrefsDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PrefsDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11PrefsDialogE_t>.strings))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int PrefsDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
