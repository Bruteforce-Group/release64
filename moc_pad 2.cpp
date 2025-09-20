/****************************************************************************
** Meta object code from reading C++ file 'pad.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../fritzing-app/src/items/pad.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pad.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN3PadE_t {};
} // unnamed namespace

template <> constexpr inline auto Pad::qt_create_metaobjectdata<qt_meta_tag_ZN3PadE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Pad",
        "terminalPointEntry",
        ""
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'terminalPointEntry'
        QtMocHelpers::SlotData<void(int)>(1, 2, QMC::AccessProtected, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<Pad, qt_meta_tag_ZN3PadE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject Pad::staticMetaObject = { {
    QMetaObject::SuperData::link<ResizableBoard::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3PadE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3PadE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN3PadE_t>.metaTypes,
    nullptr
} };

void Pad::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<Pad *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->terminalPointEntry((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *Pad::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Pad::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3PadE_t>.strings))
        return static_cast<void*>(this);
    return ResizableBoard::qt_metacast(_clname);
}

int Pad::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ResizableBoard::qt_metacall(_c, _id, _a);
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
struct qt_meta_tag_ZN13CopperBlockerE_t {};
} // unnamed namespace

template <> constexpr inline auto CopperBlocker::qt_create_metaobjectdata<qt_meta_tag_ZN13CopperBlockerE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "CopperBlocker"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<CopperBlocker, qt_meta_tag_ZN13CopperBlockerE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject CopperBlocker::staticMetaObject = { {
    QMetaObject::SuperData::link<Pad::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13CopperBlockerE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13CopperBlockerE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN13CopperBlockerE_t>.metaTypes,
    nullptr
} };

void CopperBlocker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<CopperBlocker *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *CopperBlocker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CopperBlocker::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13CopperBlockerE_t>.strings))
        return static_cast<void*>(this);
    return Pad::qt_metacast(_clname);
}

int CopperBlocker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Pad::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
