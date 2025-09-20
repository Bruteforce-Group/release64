/****************************************************************************
** Meta object code from reading C++ file 'note.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../fritzing-app/src/items/note.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'note.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN4NoteE_t {};
} // unnamed namespace

template <> constexpr inline auto Note::qt_create_metaobjectdata<qt_meta_tag_ZN4NoteE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Note",
        "contentsChangeSlot",
        "",
        "position",
        "charsAdded",
        "charsRemoved",
        "contentsChangedSlot",
        "linkDialog",
        "handleZoomChangedSlot",
        "scale",
        "handleMousePressSlot",
        "QGraphicsSceneMouseEvent*",
        "event",
        "ResizeHandle*",
        "resizeHandle",
        "handleMouseMoveSlot",
        "handleMouseReleaseSlot"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'contentsChangeSlot'
        QtMocHelpers::SlotData<void(int, int, int)>(1, 2, QMC::AccessProtected, QMetaType::Void, {{
            { QMetaType::Int, 3 }, { QMetaType::Int, 4 }, { QMetaType::Int, 5 },
        }}),
        // Slot 'contentsChangedSlot'
        QtMocHelpers::SlotData<void()>(6, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'linkDialog'
        QtMocHelpers::SlotData<void()>(7, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'handleZoomChangedSlot'
        QtMocHelpers::SlotData<void(double)>(8, 2, QMC::AccessProtected, QMetaType::Void, {{
            { QMetaType::Double, 9 },
        }}),
        // Slot 'handleMousePressSlot'
        QtMocHelpers::SlotData<void(QGraphicsSceneMouseEvent *, ResizeHandle *)>(10, 2, QMC::AccessProtected, QMetaType::Void, {{
            { 0x80000000 | 11, 12 }, { 0x80000000 | 13, 14 },
        }}),
        // Slot 'handleMouseMoveSlot'
        QtMocHelpers::SlotData<void(QGraphicsSceneMouseEvent *, ResizeHandle *)>(15, 2, QMC::AccessProtected, QMetaType::Void, {{
            { 0x80000000 | 11, 12 }, { 0x80000000 | 13, 14 },
        }}),
        // Slot 'handleMouseReleaseSlot'
        QtMocHelpers::SlotData<void(QGraphicsSceneMouseEvent *, ResizeHandle *)>(16, 2, QMC::AccessProtected, QMetaType::Void, {{
            { 0x80000000 | 11, 12 }, { 0x80000000 | 13, 14 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<Note, qt_meta_tag_ZN4NoteE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject Note::staticMetaObject = { {
    QMetaObject::SuperData::link<ItemBase::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4NoteE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4NoteE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4NoteE_t>.metaTypes,
    nullptr
} };

void Note::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<Note *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->contentsChangeSlot((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3]))); break;
        case 1: _t->contentsChangedSlot(); break;
        case 2: _t->linkDialog(); break;
        case 3: _t->handleZoomChangedSlot((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 4: _t->handleMousePressSlot((*reinterpret_cast< std::add_pointer_t<QGraphicsSceneMouseEvent*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<ResizeHandle*>>(_a[2]))); break;
        case 5: _t->handleMouseMoveSlot((*reinterpret_cast< std::add_pointer_t<QGraphicsSceneMouseEvent*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<ResizeHandle*>>(_a[2]))); break;
        case 6: _t->handleMouseReleaseSlot((*reinterpret_cast< std::add_pointer_t<QGraphicsSceneMouseEvent*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<ResizeHandle*>>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject *Note::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Note::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4NoteE_t>.strings))
        return static_cast<void*>(this);
    return ItemBase::qt_metacast(_clname);
}

int Note::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ItemBase::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    return _id;
}
namespace {
struct qt_meta_tag_ZN20NoteGraphicsTextItemE_t {};
} // unnamed namespace

template <> constexpr inline auto NoteGraphicsTextItem::qt_create_metaobjectdata<qt_meta_tag_ZN20NoteGraphicsTextItemE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "NoteGraphicsTextItem"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<NoteGraphicsTextItem, qt_meta_tag_ZN20NoteGraphicsTextItemE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject NoteGraphicsTextItem::staticMetaObject = { {
    QMetaObject::SuperData::link<QGraphicsTextItem::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN20NoteGraphicsTextItemE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN20NoteGraphicsTextItemE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN20NoteGraphicsTextItemE_t>.metaTypes,
    nullptr
} };

void NoteGraphicsTextItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<NoteGraphicsTextItem *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *NoteGraphicsTextItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NoteGraphicsTextItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN20NoteGraphicsTextItemE_t>.strings))
        return static_cast<void*>(this);
    return QGraphicsTextItem::qt_metacast(_clname);
}

int NoteGraphicsTextItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsTextItem::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {
struct qt_meta_tag_ZN10LinkDialogE_t {};
} // unnamed namespace

template <> constexpr inline auto LinkDialog::qt_create_metaobjectdata<qt_meta_tag_ZN10LinkDialogE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "LinkDialog"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<LinkDialog, qt_meta_tag_ZN10LinkDialogE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject LinkDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10LinkDialogE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10LinkDialogE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN10LinkDialogE_t>.metaTypes,
    nullptr
} };

void LinkDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<LinkDialog *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *LinkDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LinkDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10LinkDialogE_t>.strings))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int LinkDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
