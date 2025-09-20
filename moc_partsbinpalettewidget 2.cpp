/****************************************************************************
** Meta object code from reading C++ file 'partsbinpalettewidget.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../fritzing-app/src/partsbinpalette/partsbinpalettewidget.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'partsbinpalettewidget.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN21PartsBinPaletteWidgetE_t {};
} // unnamed namespace

template <> constexpr inline auto PartsBinPaletteWidget::qt_create_metaobjectdata<qt_meta_tag_ZN21PartsBinPaletteWidgetE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "PartsBinPaletteWidget",
        "saved",
        "",
        "hasPartsFromBundled",
        "fileNameUpdated",
        "PartsBinPaletteWidget*",
        "newFileName",
        "oldFilename",
        "focused",
        "addPartCommand",
        "moduleID",
        "removeAlienParts",
        "itemMoved",
        "toIconView",
        "toListView",
        "save",
        "saveAs",
        "changeIconColor",
        "undoStackCleanChanged",
        "isClean",
        "addSketchPartToMe",
        "search",
        "searchTerm",
        "focusSearchAfter"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'saved'
        QtMocHelpers::SignalData<void(bool)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 3 },
        }}),
        // Signal 'fileNameUpdated'
        QtMocHelpers::SignalData<void(PartsBinPaletteWidget *, const QString &, const QString &)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 5, 2 }, { QMetaType::QString, 6 }, { QMetaType::QString, 7 },
        }}),
        // Signal 'focused'
        QtMocHelpers::SignalData<void(PartsBinPaletteWidget *)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 5, 2 },
        }}),
        // Slot 'addPartCommand'
        QtMocHelpers::SlotData<void(const QString &)>(9, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 10 },
        }}),
        // Slot 'removeAlienParts'
        QtMocHelpers::SlotData<void()>(11, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'itemMoved'
        QtMocHelpers::SlotData<void()>(12, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'toIconView'
        QtMocHelpers::SlotData<void()>(13, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'toListView'
        QtMocHelpers::SlotData<void()>(14, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'save'
        QtMocHelpers::SlotData<bool()>(15, 2, QMC::AccessPublic, QMetaType::Bool),
        // Slot 'saveAs'
        QtMocHelpers::SlotData<bool()>(16, 2, QMC::AccessPublic, QMetaType::Bool),
        // Slot 'changeIconColor'
        QtMocHelpers::SlotData<void()>(17, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'undoStackCleanChanged'
        QtMocHelpers::SlotData<void(bool)>(18, 2, QMC::AccessProtected, QMetaType::Void, {{
            { QMetaType::Bool, 19 },
        }}),
        // Slot 'addSketchPartToMe'
        QtMocHelpers::SlotData<void()>(20, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'search'
        QtMocHelpers::SlotData<void(const QString &)>(21, 2, QMC::AccessProtected, QMetaType::Void, {{
            { QMetaType::QString, 22 },
        }}),
        // Slot 'focusSearchAfter'
        QtMocHelpers::SlotData<void()>(23, 2, QMC::AccessProtected, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<PartsBinPaletteWidget, qt_meta_tag_ZN21PartsBinPaletteWidgetE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject PartsBinPaletteWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QFrame::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN21PartsBinPaletteWidgetE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN21PartsBinPaletteWidgetE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN21PartsBinPaletteWidgetE_t>.metaTypes,
    nullptr
} };

void PartsBinPaletteWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<PartsBinPaletteWidget *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->saved((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 1: _t->fileNameUpdated((*reinterpret_cast< std::add_pointer_t<PartsBinPaletteWidget*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 2: _t->focused((*reinterpret_cast< std::add_pointer_t<PartsBinPaletteWidget*>>(_a[1]))); break;
        case 3: _t->addPartCommand((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 4: _t->removeAlienParts(); break;
        case 5: _t->itemMoved(); break;
        case 6: _t->toIconView(); break;
        case 7: _t->toListView(); break;
        case 8: { bool _r = _t->save();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 9: { bool _r = _t->saveAs();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 10: _t->changeIconColor(); break;
        case 11: _t->undoStackCleanChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 12: _t->addSketchPartToMe(); break;
        case 13: _t->search((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 14: _t->focusSearchAfter(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< PartsBinPaletteWidget* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< PartsBinPaletteWidget* >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (PartsBinPaletteWidget::*)(bool )>(_a, &PartsBinPaletteWidget::saved, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (PartsBinPaletteWidget::*)(PartsBinPaletteWidget * , const QString & , const QString & )>(_a, &PartsBinPaletteWidget::fileNameUpdated, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (PartsBinPaletteWidget::*)(PartsBinPaletteWidget * )>(_a, &PartsBinPaletteWidget::focused, 2))
            return;
    }
}

const QMetaObject *PartsBinPaletteWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PartsBinPaletteWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN21PartsBinPaletteWidgetE_t>.strings))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Bundler"))
        return static_cast< Bundler*>(this);
    return QFrame::qt_metacast(_clname);
}

int PartsBinPaletteWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void PartsBinPaletteWidget::saved(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void PartsBinPaletteWidget::fileNameUpdated(PartsBinPaletteWidget * _t1, const QString & _t2, const QString & _t3)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1, _t2, _t3);
}

// SIGNAL 2
void PartsBinPaletteWidget::focused(PartsBinPaletteWidget * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}
QT_WARNING_POP
