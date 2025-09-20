/****************************************************************************
** Meta object code from reading C++ file 'waitpushundostack.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../fritzing-app/src/waitpushundostack.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'waitpushundostack.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN17WaitPushUndoStackE_t {};
} // unnamed namespace

template <> constexpr inline auto WaitPushUndoStack::qt_create_metaobjectdata<qt_meta_tag_ZN17WaitPushUndoStackE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "WaitPushUndoStack"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<WaitPushUndoStack, qt_meta_tag_ZN17WaitPushUndoStackE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject WaitPushUndoStack::staticMetaObject = { {
    QMetaObject::SuperData::link<QUndoStack::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17WaitPushUndoStackE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17WaitPushUndoStackE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN17WaitPushUndoStackE_t>.metaTypes,
    nullptr
} };

void WaitPushUndoStack::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<WaitPushUndoStack *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *WaitPushUndoStack::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WaitPushUndoStack::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17WaitPushUndoStackE_t>.strings))
        return static_cast<void*>(this);
    return QUndoStack::qt_metacast(_clname);
}

int WaitPushUndoStack::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QUndoStack::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {
struct qt_meta_tag_ZN12CommandTimerE_t {};
} // unnamed namespace

template <> constexpr inline auto CommandTimer::qt_create_metaobjectdata<qt_meta_tag_ZN12CommandTimerE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "CommandTimer",
        "timedout",
        ""
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'timedout'
        QtMocHelpers::SlotData<void()>(1, 2, QMC::AccessProtected, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<CommandTimer, qt_meta_tag_ZN12CommandTimerE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject CommandTimer::staticMetaObject = { {
    QMetaObject::SuperData::link<QTimer::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12CommandTimerE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12CommandTimerE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN12CommandTimerE_t>.metaTypes,
    nullptr
} };

void CommandTimer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<CommandTimer *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->timedout(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *CommandTimer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CommandTimer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12CommandTimerE_t>.strings))
        return static_cast<void*>(this);
    return QTimer::qt_metacast(_clname);
}

int CommandTimer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTimer::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
