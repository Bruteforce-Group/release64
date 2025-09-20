/****************************************************************************
** Meta object code from reading C++ file 'svgflattener.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../fritzing-app/src/svg/svgflattener.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'svgflattener.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN12SvgFlattenerE_t {};
} // unnamed namespace

template <> constexpr inline auto SvgFlattener::qt_create_metaobjectdata<qt_meta_tag_ZN12SvgFlattenerE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "SvgFlattener",
        "rotateCommandSlot",
        "",
        "command",
        "relative",
        "QList<double>&",
        "args",
        "userData"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'rotateCommandSlot'
        QtMocHelpers::SlotData<void(QChar, bool, QList<double> &, void *)>(1, 2, QMC::AccessProtected, QMetaType::Void, {{
            { QMetaType::QChar, 3 }, { QMetaType::Bool, 4 }, { 0x80000000 | 5, 6 }, { QMetaType::VoidStar, 7 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<SvgFlattener, qt_meta_tag_ZN12SvgFlattenerE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject SvgFlattener::staticMetaObject = { {
    QMetaObject::SuperData::link<SvgFileSplitter::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12SvgFlattenerE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12SvgFlattenerE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN12SvgFlattenerE_t>.metaTypes,
    nullptr
} };

void SvgFlattener::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<SvgFlattener *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->rotateCommandSlot((*reinterpret_cast< std::add_pointer_t<QChar>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QList<double>&>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<void*>>(_a[4]))); break;
        default: ;
        }
    }
}

const QMetaObject *SvgFlattener::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SvgFlattener::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12SvgFlattenerE_t>.strings))
        return static_cast<void*>(this);
    return SvgFileSplitter::qt_metacast(_clname);
}

int SvgFlattener::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SvgFileSplitter::qt_metacall(_c, _id, _a);
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
