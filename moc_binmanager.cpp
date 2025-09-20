/****************************************************************************
** Meta object code from reading C++ file 'binmanager.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../fritzing-app/src/partsbinpalette/binmanager/binmanager.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'binmanager.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN10BinManagerE_t {};
} // unnamed namespace

template <> constexpr inline auto BinManager::qt_create_metaobjectdata<qt_meta_tag_ZN10BinManagerE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "BinManager",
        "savePartAsBundled",
        "",
        "moduleId",
        "updateBinCombinedMenuCurrent",
        "toIconView",
        "toListView",
        "setAsCurrentBin",
        "PartsBinPaletteWidget*",
        "bin",
        "updateFileName",
        "newFileName",
        "oldFilename",
        "currentChanged",
        "tabCloseRequested",
        "newBinIn",
        "closeBin",
        "deleteBin",
        "editSelectedNew",
        "saveBin",
        "saveBinAs",
        "renameBin",
        "copyToSketch",
        "copyAllToSketch",
        "exportSelected",
        "removeSelected",
        "findSelected",
        "saveBundledBin",
        "mainLoad"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'savePartAsBundled'
        QtMocHelpers::SignalData<void(const QString &)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 3 },
        }}),
        // Slot 'updateBinCombinedMenuCurrent'
        QtMocHelpers::SlotData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'toIconView'
        QtMocHelpers::SlotData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'toListView'
        QtMocHelpers::SlotData<void()>(6, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'setAsCurrentBin'
        QtMocHelpers::SlotData<void(PartsBinPaletteWidget *)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 8, 9 },
        }}),
        // Slot 'updateFileName'
        QtMocHelpers::SlotData<void(PartsBinPaletteWidget *, const QString &, const QString &)>(10, 2, QMC::AccessProtected, QMetaType::Void, {{
            { 0x80000000 | 8, 9 }, { QMetaType::QString, 11 }, { QMetaType::QString, 12 },
        }}),
        // Slot 'currentChanged'
        QtMocHelpers::SlotData<void(int)>(13, 2, QMC::AccessProtected, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Slot 'tabCloseRequested'
        QtMocHelpers::SlotData<void(int)>(14, 2, QMC::AccessProtected, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Slot 'newBinIn'
        QtMocHelpers::SlotData<PartsBinPaletteWidget *()>(15, 2, QMC::AccessProtected, 0x80000000 | 8),
        // Slot 'closeBin'
        QtMocHelpers::SlotData<void()>(16, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'deleteBin'
        QtMocHelpers::SlotData<void()>(17, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'editSelectedNew'
        QtMocHelpers::SlotData<void()>(18, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'saveBin'
        QtMocHelpers::SlotData<void()>(19, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'saveBinAs'
        QtMocHelpers::SlotData<void()>(20, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'renameBin'
        QtMocHelpers::SlotData<void()>(21, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'copyToSketch'
        QtMocHelpers::SlotData<void()>(22, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'copyAllToSketch'
        QtMocHelpers::SlotData<void()>(23, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'exportSelected'
        QtMocHelpers::SlotData<void()>(24, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'removeSelected'
        QtMocHelpers::SlotData<bool()>(25, 2, QMC::AccessProtected, QMetaType::Bool),
        // Slot 'findSelected'
        QtMocHelpers::SlotData<void()>(26, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'saveBundledBin'
        QtMocHelpers::SlotData<void()>(27, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'mainLoad'
        QtMocHelpers::SlotData<void()>(28, 2, QMC::AccessProtected, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<BinManager, qt_meta_tag_ZN10BinManagerE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject BinManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QFrame::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10BinManagerE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10BinManagerE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN10BinManagerE_t>.metaTypes,
    nullptr
} };

void BinManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<BinManager *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->savePartAsBundled((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->updateBinCombinedMenuCurrent(); break;
        case 2: _t->toIconView(); break;
        case 3: _t->toListView(); break;
        case 4: _t->setAsCurrentBin((*reinterpret_cast< std::add_pointer_t<PartsBinPaletteWidget*>>(_a[1]))); break;
        case 5: _t->updateFileName((*reinterpret_cast< std::add_pointer_t<PartsBinPaletteWidget*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 6: _t->currentChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 7: _t->tabCloseRequested((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 8: { PartsBinPaletteWidget* _r = _t->newBinIn();
            if (_a[0]) *reinterpret_cast< PartsBinPaletteWidget**>(_a[0]) = std::move(_r); }  break;
        case 9: _t->closeBin(); break;
        case 10: _t->deleteBin(); break;
        case 11: _t->editSelectedNew(); break;
        case 12: _t->saveBin(); break;
        case 13: _t->saveBinAs(); break;
        case 14: _t->renameBin(); break;
        case 15: _t->copyToSketch(); break;
        case 16: _t->copyAllToSketch(); break;
        case 17: _t->exportSelected(); break;
        case 18: { bool _r = _t->removeSelected();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 19: _t->findSelected(); break;
        case 20: _t->saveBundledBin(); break;
        case 21: _t->mainLoad(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (BinManager::*)(const QString & )>(_a, &BinManager::savePartAsBundled, 0))
            return;
    }
}

const QMetaObject *BinManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BinManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10BinManagerE_t>.strings))
        return static_cast<void*>(this);
    return QFrame::qt_metacast(_clname);
}

int BinManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 22)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 22;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 22)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 22;
    }
    return _id;
}

// SIGNAL 0
void BinManager::savePartAsBundled(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}
QT_WARNING_POP
