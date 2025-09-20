/****************************************************************************
** Meta object code from reading C++ file 'svgfilesplitter.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../fritzing-app/src/svg/svgfilesplitter.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'svgfilesplitter.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN15SvgFileSplitterE_t {};
} // unnamed namespace

template <> constexpr inline auto SvgFileSplitter::qt_create_metaobjectdata<qt_meta_tag_ZN15SvgFileSplitterE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "SvgFileSplitter",
        "normalizeCommandSlot",
        "",
        "command",
        "relative",
        "QList<double>&",
        "args",
        "userData",
        "shiftCommandSlot",
        "rotateCommandSlot",
        "painterPathCommandSlot",
        "convertHVSlot"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'normalizeCommandSlot'
        QtMocHelpers::SlotData<void(QChar, bool, QList<double> &, void *)>(1, 2, QMC::AccessProtected, QMetaType::Void, {{
            { QMetaType::QChar, 3 }, { QMetaType::Bool, 4 }, { 0x80000000 | 5, 6 }, { QMetaType::VoidStar, 7 },
        }}),
        // Slot 'shiftCommandSlot'
        QtMocHelpers::SlotData<void(QChar, bool, QList<double> &, void *)>(8, 2, QMC::AccessProtected, QMetaType::Void, {{
            { QMetaType::QChar, 3 }, { QMetaType::Bool, 4 }, { 0x80000000 | 5, 6 }, { QMetaType::VoidStar, 7 },
        }}),
        // Slot 'rotateCommandSlot'
        QtMocHelpers::SlotData<void(QChar, bool, QList<double> &, void *)>(9, 2, QMC::AccessProtected, QMetaType::Void, {{
            { QMetaType::QChar, 2 }, { QMetaType::Bool, 2 }, { 0x80000000 | 5, 2 }, { QMetaType::VoidStar, 2 },
        }}),
        // Slot 'painterPathCommandSlot'
        QtMocHelpers::SlotData<void(QChar, bool, QList<double> &, void *)>(10, 2, QMC::AccessProtected, QMetaType::Void, {{
            { QMetaType::QChar, 3 }, { QMetaType::Bool, 4 }, { 0x80000000 | 5, 6 }, { QMetaType::VoidStar, 7 },
        }}),
        // Slot 'convertHVSlot'
        QtMocHelpers::SlotData<void(QChar, bool, QList<double> &, void *)>(11, 2, QMC::AccessProtected, QMetaType::Void, {{
            { QMetaType::QChar, 3 }, { QMetaType::Bool, 4 }, { 0x80000000 | 5, 6 }, { QMetaType::VoidStar, 7 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<SvgFileSplitter, qt_meta_tag_ZN15SvgFileSplitterE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject SvgFileSplitter::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15SvgFileSplitterE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15SvgFileSplitterE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN15SvgFileSplitterE_t>.metaTypes,
    nullptr
} };

void SvgFileSplitter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<SvgFileSplitter *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->normalizeCommandSlot((*reinterpret_cast< std::add_pointer_t<QChar>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QList<double>&>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<void*>>(_a[4]))); break;
        case 1: _t->shiftCommandSlot((*reinterpret_cast< std::add_pointer_t<QChar>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QList<double>&>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<void*>>(_a[4]))); break;
        case 2: _t->rotateCommandSlot((*reinterpret_cast< std::add_pointer_t<QChar>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QList<double>&>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<void*>>(_a[4]))); break;
        case 3: _t->painterPathCommandSlot((*reinterpret_cast< std::add_pointer_t<QChar>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QList<double>&>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<void*>>(_a[4]))); break;
        case 4: _t->convertHVSlot((*reinterpret_cast< std::add_pointer_t<QChar>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QList<double>&>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<void*>>(_a[4]))); break;
        default: ;
        }
    }
}

const QMetaObject *SvgFileSplitter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SvgFileSplitter::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15SvgFileSplitterE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int SvgFileSplitter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
