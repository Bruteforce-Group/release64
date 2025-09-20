/****************************************************************************
** Meta object code from reading C++ file 'modelbase.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../fritzing-app/src/model/modelbase.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'modelbase.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN9ModelBaseE_t {};
} // unnamed namespace

template <> constexpr inline auto ModelBase::qt_create_metaobjectdata<qt_meta_tag_ZN9ModelBaseE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "ModelBase",
        "loadedViews",
        "",
        "ModelBase*",
        "QDomElement&",
        "views",
        "loadedProjectProperties",
        "QDomElement",
        "projectProperties",
        "loadedRoot",
        "fileName",
        "root",
        "loadingInstances",
        "instances",
        "loadingInstance",
        "instance",
        "obsoleteSMDOrientationSignal",
        "migratePartLabelOffset",
        "fritzingVersion",
        "oldSchematicsSignal",
        "filename",
        "bool&",
        "useOldSchematics"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'loadedViews'
        QtMocHelpers::SignalData<void(ModelBase *, QDomElement &)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 2 }, { 0x80000000 | 4, 5 },
        }}),
        // Signal 'loadedProjectProperties'
        QtMocHelpers::SignalData<void(const QDomElement &)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 7, 8 },
        }}),
        // Signal 'loadedRoot'
        QtMocHelpers::SignalData<void(const QString &, ModelBase *, QDomElement &)>(9, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 10 }, { 0x80000000 | 3, 2 }, { 0x80000000 | 4, 11 },
        }}),
        // Signal 'loadingInstances'
        QtMocHelpers::SignalData<void(ModelBase *, QDomElement &)>(12, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 2 }, { 0x80000000 | 4, 13 },
        }}),
        // Signal 'loadingInstance'
        QtMocHelpers::SignalData<void(ModelBase *, QDomElement &)>(14, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 2 }, { 0x80000000 | 4, 15 },
        }}),
        // Signal 'obsoleteSMDOrientationSignal'
        QtMocHelpers::SignalData<void()>(16, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'migratePartLabelOffset'
        QtMocHelpers::SignalData<void(const QString &)>(17, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 18 },
        }}),
        // Signal 'oldSchematicsSignal'
        QtMocHelpers::SignalData<void(const QString &, bool &)>(19, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 20 }, { 0x80000000 | 21, 22 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<ModelBase, qt_meta_tag_ZN9ModelBaseE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject ModelBase::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN9ModelBaseE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN9ModelBaseE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN9ModelBaseE_t>.metaTypes,
    nullptr
} };

void ModelBase::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ModelBase *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->loadedViews((*reinterpret_cast< std::add_pointer_t<ModelBase*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QDomElement&>>(_a[2]))); break;
        case 1: _t->loadedProjectProperties((*reinterpret_cast< std::add_pointer_t<QDomElement>>(_a[1]))); break;
        case 2: _t->loadedRoot((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<ModelBase*>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QDomElement&>>(_a[3]))); break;
        case 3: _t->loadingInstances((*reinterpret_cast< std::add_pointer_t<ModelBase*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QDomElement&>>(_a[2]))); break;
        case 4: _t->loadingInstance((*reinterpret_cast< std::add_pointer_t<ModelBase*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QDomElement&>>(_a[2]))); break;
        case 5: _t->obsoleteSMDOrientationSignal(); break;
        case 6: _t->migratePartLabelOffset((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 7: _t->oldSchematicsSignal((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool&>>(_a[2]))); break;
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
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< ModelBase* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< ModelBase* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< ModelBase* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< ModelBase* >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (ModelBase::*)(ModelBase * , QDomElement & )>(_a, &ModelBase::loadedViews, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (ModelBase::*)(const QDomElement & )>(_a, &ModelBase::loadedProjectProperties, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (ModelBase::*)(const QString & , ModelBase * , QDomElement & )>(_a, &ModelBase::loadedRoot, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (ModelBase::*)(ModelBase * , QDomElement & )>(_a, &ModelBase::loadingInstances, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (ModelBase::*)(ModelBase * , QDomElement & )>(_a, &ModelBase::loadingInstance, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (ModelBase::*)()>(_a, &ModelBase::obsoleteSMDOrientationSignal, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (ModelBase::*)(const QString & )>(_a, &ModelBase::migratePartLabelOffset, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (ModelBase::*)(const QString & , bool & )>(_a, &ModelBase::oldSchematicsSignal, 7))
            return;
    }
}

const QMetaObject *ModelBase::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ModelBase::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN9ModelBaseE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ModelBase::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void ModelBase::loadedViews(ModelBase * _t1, QDomElement & _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1, _t2);
}

// SIGNAL 1
void ModelBase::loadedProjectProperties(const QDomElement & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void ModelBase::loadedRoot(const QString & _t1, ModelBase * _t2, QDomElement & _t3)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1, _t2, _t3);
}

// SIGNAL 3
void ModelBase::loadingInstances(ModelBase * _t1, QDomElement & _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1, _t2);
}

// SIGNAL 4
void ModelBase::loadingInstance(ModelBase * _t1, QDomElement & _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1, _t2);
}

// SIGNAL 5
void ModelBase::obsoleteSMDOrientationSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void ModelBase::migratePartLabelOffset(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 6, nullptr, _t1);
}

// SIGNAL 7
void ModelBase::oldSchematicsSignal(const QString & _t1, bool & _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 7, nullptr, _t1, _t2);
}
QT_WARNING_POP
