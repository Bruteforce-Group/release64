/****************************************************************************
** Meta object code from reading C++ file 'logoitem.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../fritzing-app/src/items/logoitem.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'logoitem.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN8LogoItemE_t {};
} // unnamed namespace

template <> constexpr inline auto LogoItem::qt_create_metaobjectdata<qt_meta_tag_ZN8LogoItemE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "LogoItem",
        "swapEntry",
        "",
        "index",
        "logoEntry",
        "widthEntry",
        "heightEntry"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'swapEntry'
        QtMocHelpers::SlotData<void(int)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 3 },
        }}),
        // Slot 'logoEntry'
        QtMocHelpers::SlotData<void()>(4, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'widthEntry'
        QtMocHelpers::SlotData<void()>(5, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'heightEntry'
        QtMocHelpers::SlotData<void()>(6, 2, QMC::AccessProtected, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<LogoItem, qt_meta_tag_ZN8LogoItemE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject LogoItem::staticMetaObject = { {
    QMetaObject::SuperData::link<ResizableBoard::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN8LogoItemE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN8LogoItemE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN8LogoItemE_t>.metaTypes,
    nullptr
} };

void LogoItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<LogoItem *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->swapEntry((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->logoEntry(); break;
        case 2: _t->widthEntry(); break;
        case 3: _t->heightEntry(); break;
        default: ;
        }
    }
}

const QMetaObject *LogoItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LogoItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN8LogoItemE_t>.strings))
        return static_cast<void*>(this);
    return ResizableBoard::qt_metacast(_clname);
}

int LogoItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ResizableBoard::qt_metacall(_c, _id, _a);
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
namespace {
struct qt_meta_tag_ZN14CopperLogoItemE_t {};
} // unnamed namespace

template <> constexpr inline auto CopperLogoItem::qt_create_metaobjectdata<qt_meta_tag_ZN14CopperLogoItemE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "CopperLogoItem"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<CopperLogoItem, qt_meta_tag_ZN14CopperLogoItemE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject CopperLogoItem::staticMetaObject = { {
    QMetaObject::SuperData::link<LogoItem::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14CopperLogoItemE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14CopperLogoItemE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN14CopperLogoItemE_t>.metaTypes,
    nullptr
} };

void CopperLogoItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<CopperLogoItem *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *CopperLogoItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CopperLogoItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14CopperLogoItemE_t>.strings))
        return static_cast<void*>(this);
    return LogoItem::qt_metacast(_clname);
}

int CopperLogoItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = LogoItem::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {
struct qt_meta_tag_ZN17SchematicLogoItemE_t {};
} // unnamed namespace

template <> constexpr inline auto SchematicLogoItem::qt_create_metaobjectdata<qt_meta_tag_ZN17SchematicLogoItemE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "SchematicLogoItem"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<SchematicLogoItem, qt_meta_tag_ZN17SchematicLogoItemE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject SchematicLogoItem::staticMetaObject = { {
    QMetaObject::SuperData::link<LogoItem::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17SchematicLogoItemE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17SchematicLogoItemE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN17SchematicLogoItemE_t>.metaTypes,
    nullptr
} };

void SchematicLogoItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<SchematicLogoItem *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *SchematicLogoItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SchematicLogoItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17SchematicLogoItemE_t>.strings))
        return static_cast<void*>(this);
    return LogoItem::qt_metacast(_clname);
}

int SchematicLogoItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = LogoItem::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {
struct qt_meta_tag_ZN18BreadboardLogoItemE_t {};
} // unnamed namespace

template <> constexpr inline auto BreadboardLogoItem::qt_create_metaobjectdata<qt_meta_tag_ZN18BreadboardLogoItemE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "BreadboardLogoItem",
        "changeTextColor",
        ""
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'changeTextColor'
        QtMocHelpers::SlotData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<BreadboardLogoItem, qt_meta_tag_ZN18BreadboardLogoItemE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject BreadboardLogoItem::staticMetaObject = { {
    QMetaObject::SuperData::link<LogoItem::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN18BreadboardLogoItemE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN18BreadboardLogoItemE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN18BreadboardLogoItemE_t>.metaTypes,
    nullptr
} };

void BreadboardLogoItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<BreadboardLogoItem *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->changeTextColor(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *BreadboardLogoItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BreadboardLogoItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN18BreadboardLogoItemE_t>.strings))
        return static_cast<void*>(this);
    return LogoItem::qt_metacast(_clname);
}

int BreadboardLogoItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = LogoItem::qt_metacall(_c, _id, _a);
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
struct qt_meta_tag_ZN13BoardLogoItemE_t {};
} // unnamed namespace

template <> constexpr inline auto BoardLogoItem::qt_create_metaobjectdata<qt_meta_tag_ZN13BoardLogoItemE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "BoardLogoItem"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<BoardLogoItem, qt_meta_tag_ZN13BoardLogoItemE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject BoardLogoItem::staticMetaObject = { {
    QMetaObject::SuperData::link<LogoItem::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13BoardLogoItemE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13BoardLogoItemE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN13BoardLogoItemE_t>.metaTypes,
    nullptr
} };

void BoardLogoItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<BoardLogoItem *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *BoardLogoItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BoardLogoItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13BoardLogoItemE_t>.strings))
        return static_cast<void*>(this);
    return LogoItem::qt_metacast(_clname);
}

int BoardLogoItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = LogoItem::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
