/****************************************************************************
** Meta object code from reading C++ file 'autorouter.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../fritzing-app/src/autoroute/autorouter.h"
#include <QtGui/qtextcursor.h>
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'autorouter.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN10AutorouterE_t {};
} // unnamed namespace

template <> constexpr inline auto Autorouter::qt_create_metaobjectdata<qt_meta_tag_ZN10AutorouterE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Autorouter",
        "setMaximumProgress",
        "",
        "setProgressValue",
        "wantTopVisible",
        "wantBottomVisible",
        "wantBothVisible",
        "setProgressMessage",
        "setProgressMessage2",
        "setCycleMessage",
        "setCycleCount",
        "disableButtons",
        "cancel",
        "cancelTrace",
        "stopTracing",
        "useBest",
        "setMaxCycles"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'setMaximumProgress'
        QtMocHelpers::SignalData<void(int)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Signal 'setProgressValue'
        QtMocHelpers::SignalData<void(int)>(3, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Signal 'wantTopVisible'
        QtMocHelpers::SignalData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'wantBottomVisible'
        QtMocHelpers::SignalData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'wantBothVisible'
        QtMocHelpers::SignalData<void()>(6, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'setProgressMessage'
        QtMocHelpers::SignalData<void(const QString &)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 2 },
        }}),
        // Signal 'setProgressMessage2'
        QtMocHelpers::SignalData<void(const QString &)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 2 },
        }}),
        // Signal 'setCycleMessage'
        QtMocHelpers::SignalData<void(const QString &)>(9, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 2 },
        }}),
        // Signal 'setCycleCount'
        QtMocHelpers::SignalData<void(int)>(10, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Signal 'disableButtons'
        QtMocHelpers::SignalData<void()>(11, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'cancel'
        QtMocHelpers::SlotData<void()>(12, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'cancelTrace'
        QtMocHelpers::SlotData<void()>(13, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'stopTracing'
        QtMocHelpers::SlotData<void()>(14, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'useBest'
        QtMocHelpers::SlotData<void()>(15, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'setMaxCycles'
        QtMocHelpers::SlotData<void(int)>(16, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<Autorouter, qt_meta_tag_ZN10AutorouterE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject Autorouter::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10AutorouterE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10AutorouterE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN10AutorouterE_t>.metaTypes,
    nullptr
} };

void Autorouter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<Autorouter *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->setMaximumProgress((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->setProgressValue((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->wantTopVisible(); break;
        case 3: _t->wantBottomVisible(); break;
        case 4: _t->wantBothVisible(); break;
        case 5: _t->setProgressMessage((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 6: _t->setProgressMessage2((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 7: _t->setCycleMessage((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 8: _t->setCycleCount((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 9: _t->disableButtons(); break;
        case 10: _t->cancel(); break;
        case 11: _t->cancelTrace(); break;
        case 12: _t->stopTracing(); break;
        case 13: _t->useBest(); break;
        case 14: _t->setMaxCycles((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (Autorouter::*)(int )>(_a, &Autorouter::setMaximumProgress, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (Autorouter::*)(int )>(_a, &Autorouter::setProgressValue, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (Autorouter::*)()>(_a, &Autorouter::wantTopVisible, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (Autorouter::*)()>(_a, &Autorouter::wantBottomVisible, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (Autorouter::*)()>(_a, &Autorouter::wantBothVisible, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (Autorouter::*)(const QString & )>(_a, &Autorouter::setProgressMessage, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (Autorouter::*)(const QString & )>(_a, &Autorouter::setProgressMessage2, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (Autorouter::*)(const QString & )>(_a, &Autorouter::setCycleMessage, 7))
            return;
        if (QtMocHelpers::indexOfMethod<void (Autorouter::*)(int )>(_a, &Autorouter::setCycleCount, 8))
            return;
        if (QtMocHelpers::indexOfMethod<void (Autorouter::*)()>(_a, &Autorouter::disableButtons, 9))
            return;
    }
}

const QMetaObject *Autorouter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Autorouter::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10AutorouterE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Autorouter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void Autorouter::setMaximumProgress(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void Autorouter::setProgressValue(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void Autorouter::wantTopVisible()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Autorouter::wantBottomVisible()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void Autorouter::wantBothVisible()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void Autorouter::setProgressMessage(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 5, nullptr, _t1);
}

// SIGNAL 6
void Autorouter::setProgressMessage2(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 6, nullptr, _t1);
}

// SIGNAL 7
void Autorouter::setCycleMessage(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 7, nullptr, _t1);
}

// SIGNAL 8
void Autorouter::setCycleCount(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 8, nullptr, _t1);
}

// SIGNAL 9
void Autorouter::disableButtons()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}
QT_WARNING_POP
