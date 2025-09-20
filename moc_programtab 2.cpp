/****************************************************************************
** Meta object code from reading C++ file 'programtab.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../fritzing-app/src/program/programtab.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'programtab.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN18SerialPortComboBoxE_t {};
} // unnamed namespace

template <> constexpr inline auto SerialPortComboBox::qt_create_metaobjectdata<qt_meta_tag_ZN18SerialPortComboBoxE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "SerialPortComboBox",
        "aboutToShow",
        ""
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'aboutToShow'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<SerialPortComboBox, qt_meta_tag_ZN18SerialPortComboBoxE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject SerialPortComboBox::staticMetaObject = { {
    QMetaObject::SuperData::link<QComboBox::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN18SerialPortComboBoxE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN18SerialPortComboBoxE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN18SerialPortComboBoxE_t>.metaTypes,
    nullptr
} };

void SerialPortComboBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<SerialPortComboBox *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->aboutToShow(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (SerialPortComboBox::*)()>(_a, &SerialPortComboBox::aboutToShow, 0))
            return;
    }
}

const QMetaObject *SerialPortComboBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SerialPortComboBox::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN18SerialPortComboBoxE_t>.strings))
        return static_cast<void*>(this);
    return QComboBox::qt_metacast(_clname);
}

int SerialPortComboBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QComboBox::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void SerialPortComboBox::aboutToShow()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
namespace {
struct qt_meta_tag_ZN10ProgramTabE_t {};
} // unnamed namespace

template <> constexpr inline auto ProgramTab::qt_create_metaobjectdata<qt_meta_tag_ZN10ProgramTabE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "ProgramTab",
        "wantToSave",
        "",
        "wantToSaveAs",
        "wantToRename",
        "wantToDelete",
        "deleteFile",
        "platformChanged",
        "Platform*",
        "newPlatform",
        "programWindowUpdateRequest",
        "programEnable",
        "undoEnable",
        "redoEnable",
        "cutEnable",
        "copyEnable",
        "pasteEnable",
        "platform",
        "port",
        "board",
        "filename",
        "setPlatform",
        "index",
        "setPort",
        "setBoard",
        "loadProgramFile",
        "textChanged",
        "undo",
        "enableUndo",
        "enable",
        "redo",
        "enableRedo",
        "cut",
        "enableCut",
        "copy",
        "enableCopy",
        "paste",
        "enablePaste",
        "selectAll",
        "deleteTab",
        "save",
        "saveAs",
        "rename",
        "serialMonitor",
        "sendProgram",
        "programProcessFinished",
        "exitCode",
        "QProcess::ExitStatus",
        "exitStatus",
        "programProcessReadyRead",
        "updateMenu",
        "updateSerialPorts",
        "updateBoards",
        "enableProgramButton",
        "enableMonitorButton"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'wantToSave'
        QtMocHelpers::SignalData<void(int)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Signal 'wantToSaveAs'
        QtMocHelpers::SignalData<void(int)>(3, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Signal 'wantToRename'
        QtMocHelpers::SignalData<void(int)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Signal 'wantToDelete'
        QtMocHelpers::SignalData<void(int, bool)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 2 }, { QMetaType::Bool, 6 },
        }}),
        // Signal 'platformChanged'
        QtMocHelpers::SignalData<void(Platform *)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 8, 9 },
        }}),
        // Signal 'programWindowUpdateRequest'
        QtMocHelpers::SignalData<void(bool, bool, bool, bool, bool, bool, Platform *, const QString &, const QString &, const QString &)>(10, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 11 }, { QMetaType::Bool, 12 }, { QMetaType::Bool, 13 }, { QMetaType::Bool, 14 },
            { QMetaType::Bool, 15 }, { QMetaType::Bool, 16 }, { 0x80000000 | 8, 17 }, { QMetaType::QString, 18 },
            { QMetaType::QString, 19 }, { QMetaType::QString, 20 },
        }}),
        // Slot 'setPlatform'
        QtMocHelpers::SlotData<void(Platform *)>(21, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 8, 9 },
        }}),
        // Slot 'setPlatform'
        QtMocHelpers::SlotData<void(int)>(21, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 22 },
        }}),
        // Slot 'setPort'
        QtMocHelpers::SlotData<void(int)>(23, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 22 },
        }}),
        // Slot 'setBoard'
        QtMocHelpers::SlotData<void(int)>(24, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 22 },
        }}),
        // Slot 'loadProgramFile'
        QtMocHelpers::SlotData<bool()>(25, 2, QMC::AccessPublic, QMetaType::Bool),
        // Slot 'textChanged'
        QtMocHelpers::SlotData<void()>(26, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'undo'
        QtMocHelpers::SlotData<void()>(27, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'enableUndo'
        QtMocHelpers::SlotData<void(bool)>(28, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 29 },
        }}),
        // Slot 'redo'
        QtMocHelpers::SlotData<void()>(30, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'enableRedo'
        QtMocHelpers::SlotData<void(bool)>(31, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 29 },
        }}),
        // Slot 'cut'
        QtMocHelpers::SlotData<void()>(32, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'enableCut'
        QtMocHelpers::SlotData<void(bool)>(33, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 29 },
        }}),
        // Slot 'copy'
        QtMocHelpers::SlotData<void()>(34, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'enableCopy'
        QtMocHelpers::SlotData<void(bool)>(35, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 29 },
        }}),
        // Slot 'paste'
        QtMocHelpers::SlotData<void()>(36, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'enablePaste'
        QtMocHelpers::SlotData<void(bool)>(37, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 29 },
        }}),
        // Slot 'selectAll'
        QtMocHelpers::SlotData<void()>(38, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'deleteTab'
        QtMocHelpers::SlotData<void()>(39, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'save'
        QtMocHelpers::SlotData<void()>(40, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'saveAs'
        QtMocHelpers::SlotData<void()>(41, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'rename'
        QtMocHelpers::SlotData<void()>(42, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'serialMonitor'
        QtMocHelpers::SlotData<void()>(43, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'sendProgram'
        QtMocHelpers::SlotData<void()>(44, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'programProcessFinished'
        QtMocHelpers::SlotData<void(int, QProcess::ExitStatus)>(45, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 46 }, { 0x80000000 | 47, 48 },
        }}),
        // Slot 'programProcessReadyRead'
        QtMocHelpers::SlotData<void()>(49, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'updateMenu'
        QtMocHelpers::SlotData<void()>(50, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'updateSerialPorts'
        QtMocHelpers::SlotData<void()>(51, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'updateBoards'
        QtMocHelpers::SlotData<void()>(52, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'enableProgramButton'
        QtMocHelpers::SlotData<void()>(53, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'enableMonitorButton'
        QtMocHelpers::SlotData<void()>(54, 2, QMC::AccessProtected, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<ProgramTab, qt_meta_tag_ZN10ProgramTabE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject ProgramTab::staticMetaObject = { {
    QMetaObject::SuperData::link<QFrame::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10ProgramTabE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10ProgramTabE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN10ProgramTabE_t>.metaTypes,
    nullptr
} };

void ProgramTab::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ProgramTab *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->wantToSave((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->wantToSaveAs((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->wantToRename((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->wantToDelete((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 4: _t->platformChanged((*reinterpret_cast< std::add_pointer_t<Platform*>>(_a[1]))); break;
        case 5: _t->programWindowUpdateRequest((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[5])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[6])),(*reinterpret_cast< std::add_pointer_t<Platform*>>(_a[7])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[8])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[9])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[10]))); break;
        case 6: _t->setPlatform((*reinterpret_cast< std::add_pointer_t<Platform*>>(_a[1]))); break;
        case 7: _t->setPlatform((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 8: _t->setPort((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 9: _t->setBoard((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 10: { bool _r = _t->loadProgramFile();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 11: _t->textChanged(); break;
        case 12: _t->undo(); break;
        case 13: _t->enableUndo((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 14: _t->redo(); break;
        case 15: _t->enableRedo((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 16: _t->cut(); break;
        case 17: _t->enableCut((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 18: _t->copy(); break;
        case 19: _t->enableCopy((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 20: _t->paste(); break;
        case 21: _t->enablePaste((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 22: _t->selectAll(); break;
        case 23: _t->deleteTab(); break;
        case 24: _t->save(); break;
        case 25: _t->saveAs(); break;
        case 26: _t->rename(); break;
        case 27: _t->serialMonitor(); break;
        case 28: _t->sendProgram(); break;
        case 29: _t->programProcessFinished((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QProcess::ExitStatus>>(_a[2]))); break;
        case 30: _t->programProcessReadyRead(); break;
        case 31: _t->updateMenu(); break;
        case 32: _t->updateSerialPorts(); break;
        case 33: _t->updateBoards(); break;
        case 34: _t->enableProgramButton(); break;
        case 35: _t->enableMonitorButton(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< Platform* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 6:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< Platform* >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< Platform* >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (ProgramTab::*)(int )>(_a, &ProgramTab::wantToSave, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (ProgramTab::*)(int )>(_a, &ProgramTab::wantToSaveAs, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (ProgramTab::*)(int )>(_a, &ProgramTab::wantToRename, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (ProgramTab::*)(int , bool )>(_a, &ProgramTab::wantToDelete, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (ProgramTab::*)(Platform * )>(_a, &ProgramTab::platformChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (ProgramTab::*)(bool , bool , bool , bool , bool , bool , Platform * , const QString & , const QString & , const QString & )>(_a, &ProgramTab::programWindowUpdateRequest, 5))
            return;
    }
}

const QMetaObject *ProgramTab::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ProgramTab::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10ProgramTabE_t>.strings))
        return static_cast<void*>(this);
    return QFrame::qt_metacast(_clname);
}

int ProgramTab::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 36)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 36;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 36)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 36;
    }
    return _id;
}

// SIGNAL 0
void ProgramTab::wantToSave(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void ProgramTab::wantToSaveAs(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void ProgramTab::wantToRename(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void ProgramTab::wantToDelete(int _t1, bool _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1, _t2);
}

// SIGNAL 4
void ProgramTab::platformChanged(Platform * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1);
}

// SIGNAL 5
void ProgramTab::programWindowUpdateRequest(bool _t1, bool _t2, bool _t3, bool _t4, bool _t5, bool _t6, Platform * _t7, const QString & _t8, const QString & _t9, const QString & _t10)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 5, nullptr, _t1, _t2, _t3, _t4, _t5, _t6, _t7, _t8, _t9, _t10);
}
namespace {
struct qt_meta_tag_ZN12DeleteDialogE_t {};
} // unnamed namespace

template <> constexpr inline auto DeleteDialog::qt_create_metaobjectdata<qt_meta_tag_ZN12DeleteDialogE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "DeleteDialog",
        "buttonClicked",
        "",
        "QAbstractButton*",
        "button"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'buttonClicked'
        QtMocHelpers::SlotData<void(QAbstractButton *)>(1, 2, QMC::AccessProtected, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<DeleteDialog, qt_meta_tag_ZN12DeleteDialogE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject DeleteDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12DeleteDialogE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12DeleteDialogE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN12DeleteDialogE_t>.metaTypes,
    nullptr
} };

void DeleteDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<DeleteDialog *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->buttonClicked((*reinterpret_cast< std::add_pointer_t<QAbstractButton*>>(_a[1]))); break;
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
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QAbstractButton* >(); break;
            }
            break;
        }
    }
}

const QMetaObject *DeleteDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DeleteDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12DeleteDialogE_t>.strings))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int DeleteDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
QT_WARNING_POP
