/****************************************************************************
** Meta object code from reading C++ file 'palettemodel.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../fritzing-app/src/model/palettemodel.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'palettemodel.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN12PaletteModelE_t {};
} // unnamed namespace

template <> constexpr inline auto PaletteModel::qt_create_metaobjectdata<qt_meta_tag_ZN12PaletteModelE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "PaletteModel",
        "loadedPart",
        "",
        "i",
        "total",
        "incSearch",
        "addSearchMaximum",
        "partsToLoad"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'loadedPart'
        QtMocHelpers::SignalData<void(int, int)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 3 }, { QMetaType::Int, 4 },
        }}),
        // Signal 'incSearch'
        QtMocHelpers::SignalData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'addSearchMaximum'
        QtMocHelpers::SignalData<void(int)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Signal 'partsToLoad'
        QtMocHelpers::SignalData<void(int)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 4 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<PaletteModel, qt_meta_tag_ZN12PaletteModelE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject PaletteModel::staticMetaObject = { {
    QMetaObject::SuperData::link<ModelBase::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12PaletteModelE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12PaletteModelE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN12PaletteModelE_t>.metaTypes,
    nullptr
} };

void PaletteModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<PaletteModel *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->loadedPart((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 1: _t->incSearch(); break;
        case 2: _t->addSearchMaximum((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->partsToLoad((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (PaletteModel::*)(int , int )>(_a, &PaletteModel::loadedPart, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (PaletteModel::*)()>(_a, &PaletteModel::incSearch, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (PaletteModel::*)(int )>(_a, &PaletteModel::addSearchMaximum, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (PaletteModel::*)(int )>(_a, &PaletteModel::partsToLoad, 3))
            return;
    }
}

const QMetaObject *PaletteModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PaletteModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12PaletteModelE_t>.strings))
        return static_cast<void*>(this);
    return ModelBase::qt_metacast(_clname);
}

int PaletteModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ModelBase::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void PaletteModel::loadedPart(int _t1, int _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1, _t2);
}

// SIGNAL 1
void PaletteModel::incSearch()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void PaletteModel::addSearchMaximum(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void PaletteModel::partsToLoad(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1);
}
QT_WARNING_POP
