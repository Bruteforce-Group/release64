/****************************************************************************
** Meta object code from reading C++ file 'modelpartshared.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../fritzing-app/src/model/modelpartshared.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'modelpartshared.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN15ModelPartSharedE_t {};
} // unnamed namespace

template <> constexpr inline auto ModelPartShared::qt_create_metaobjectdata<qt_meta_tag_ZN15ModelPartSharedE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "ModelPartShared",
        "removeOwner",
        ""
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'removeOwner'
        QtMocHelpers::SlotData<void()>(1, 2, QMC::AccessProtected, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<ModelPartShared, qt_meta_tag_ZN15ModelPartSharedE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject ModelPartShared::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15ModelPartSharedE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15ModelPartSharedE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN15ModelPartSharedE_t>.metaTypes,
    nullptr
} };

void ModelPartShared::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ModelPartShared *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->removeOwner(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *ModelPartShared::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ModelPartShared::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15ModelPartSharedE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ModelPartShared::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
namespace {
struct qt_meta_tag_ZN19ModelPartSharedRootE_t {};
} // unnamed namespace

template <> constexpr inline auto ModelPartSharedRoot::qt_create_metaobjectdata<qt_meta_tag_ZN19ModelPartSharedRootE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "ModelPartSharedRoot"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<ModelPartSharedRoot, qt_meta_tag_ZN19ModelPartSharedRootE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject ModelPartSharedRoot::staticMetaObject = { {
    QMetaObject::SuperData::link<ModelPartShared::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN19ModelPartSharedRootE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN19ModelPartSharedRootE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN19ModelPartSharedRootE_t>.metaTypes,
    nullptr
} };

void ModelPartSharedRoot::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ModelPartSharedRoot *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *ModelPartSharedRoot::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ModelPartSharedRoot::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN19ModelPartSharedRootE_t>.strings))
        return static_cast<void*>(this);
    return ModelPartShared::qt_metacast(_clname);
}

int ModelPartSharedRoot::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ModelPartShared::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
