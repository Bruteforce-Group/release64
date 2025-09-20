/****************************************************************************
** Meta object code from reading C++ file 'htmlinfoview.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../fritzing-app/src/infoview/htmlinfoview.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'htmlinfoview.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN8TagLabelE_t {};
} // unnamed namespace

template <> constexpr inline auto TagLabel::qt_create_metaobjectdata<qt_meta_tag_ZN8TagLabelE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "TagLabel"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<TagLabel, qt_meta_tag_ZN8TagLabelE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject TagLabel::staticMetaObject = { {
    QMetaObject::SuperData::link<QLabel::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN8TagLabelE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN8TagLabelE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN8TagLabelE_t>.metaTypes,
    nullptr
} };

void TagLabel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<TagLabel *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *TagLabel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TagLabel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN8TagLabelE_t>.strings))
        return static_cast<void*>(this);
    return QLabel::qt_metacast(_clname);
}

int TagLabel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLabel::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {
struct qt_meta_tag_ZN12HtmlInfoViewE_t {};
} // unnamed namespace

template <> constexpr inline auto HtmlInfoView::qt_create_metaobjectdata<qt_meta_tag_ZN12HtmlInfoViewE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "HtmlInfoView",
        "clickObsoleteSignal",
        "",
        "setContent",
        "setInstanceTitle",
        "instanceTitleEnter",
        "instanceTitleLeave",
        "instanceTitleEditable",
        "editable",
        "changeLock",
        "changeSticky",
        "clickObsolete",
        "xyEntry",
        "unitsClicked",
        "rotEntry"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'clickObsoleteSignal'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'setContent'
        QtMocHelpers::SlotData<void()>(3, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'setInstanceTitle'
        QtMocHelpers::SlotData<void()>(4, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'instanceTitleEnter'
        QtMocHelpers::SlotData<void()>(5, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'instanceTitleLeave'
        QtMocHelpers::SlotData<void()>(6, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'instanceTitleEditable'
        QtMocHelpers::SlotData<void(bool)>(7, 2, QMC::AccessProtected, QMetaType::Void, {{
            { QMetaType::Bool, 8 },
        }}),
        // Slot 'changeLock'
        QtMocHelpers::SlotData<void(bool)>(9, 2, QMC::AccessProtected, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Slot 'changeSticky'
        QtMocHelpers::SlotData<void(bool)>(10, 2, QMC::AccessProtected, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Slot 'clickObsolete'
        QtMocHelpers::SlotData<void(const QString &)>(11, 2, QMC::AccessProtected, QMetaType::Void, {{
            { QMetaType::QString, 2 },
        }}),
        // Slot 'xyEntry'
        QtMocHelpers::SlotData<void()>(12, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'unitsClicked'
        QtMocHelpers::SlotData<void()>(13, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'rotEntry'
        QtMocHelpers::SlotData<void()>(14, 2, QMC::AccessProtected, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<HtmlInfoView, qt_meta_tag_ZN12HtmlInfoViewE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject HtmlInfoView::staticMetaObject = { {
    QMetaObject::SuperData::link<QScrollArea::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12HtmlInfoViewE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12HtmlInfoViewE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN12HtmlInfoViewE_t>.metaTypes,
    nullptr
} };

void HtmlInfoView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<HtmlInfoView *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->clickObsoleteSignal(); break;
        case 1: _t->setContent(); break;
        case 2: _t->setInstanceTitle(); break;
        case 3: _t->instanceTitleEnter(); break;
        case 4: _t->instanceTitleLeave(); break;
        case 5: _t->instanceTitleEditable((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 6: _t->changeLock((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 7: _t->changeSticky((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 8: _t->clickObsolete((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 9: _t->xyEntry(); break;
        case 10: _t->unitsClicked(); break;
        case 11: _t->rotEntry(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (HtmlInfoView::*)()>(_a, &HtmlInfoView::clickObsoleteSignal, 0))
            return;
    }
}

const QMetaObject *HtmlInfoView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HtmlInfoView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12HtmlInfoViewE_t>.strings))
        return static_cast<void*>(this);
    return QScrollArea::qt_metacast(_clname);
}

int HtmlInfoView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QScrollArea::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void HtmlInfoView::clickObsoleteSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
