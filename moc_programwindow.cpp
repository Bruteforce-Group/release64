/****************************************************************************
** Meta object code from reading C++ file 'programwindow.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../fritzing-app/src/program/programwindow.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'programwindow.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN10PTabWidgetE_t {};
} // unnamed namespace

template <> constexpr inline auto PTabWidget::qt_create_metaobjectdata<qt_meta_tag_ZN10PTabWidgetE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "PTabWidget",
        "tabChanged",
        "",
        "index"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'tabChanged'
        QtMocHelpers::SlotData<void(int)>(1, 2, QMC::AccessProtected, QMetaType::Void, {{
            { QMetaType::Int, 3 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<PTabWidget, qt_meta_tag_ZN10PTabWidgetE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject PTabWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QTabWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10PTabWidgetE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10PTabWidgetE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN10PTabWidgetE_t>.metaTypes,
    nullptr
} };

void PTabWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<PTabWidget *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->tabChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *PTabWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PTabWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10PTabWidgetE_t>.strings))
        return static_cast<void*>(this);
    return QTabWidget::qt_metacast(_clname);
}

int PTabWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTabWidget::qt_metacall(_c, _id, _a);
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
struct qt_meta_tag_ZN13ProgramWindowE_t {};
} // unnamed namespace

template <> constexpr inline auto ProgramWindow::qt_create_metaobjectdata<qt_meta_tag_ZN13ProgramWindowE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "ProgramWindow",
        "closed",
        "",
        "changeActivationSignal",
        "activate",
        "QWidget*",
        "originator",
        "linkToProgramFile",
        "filename",
        "Platform*",
        "platform",
        "addlink",
        "strong",
        "saveAll",
        "loadProgramFile",
        "addTab",
        "ProgramTab*",
        "closeCurrentTab",
        "closeTab",
        "index",
        "saveCurrentTab",
        "tabSave",
        "tabSaveAs",
        "tabRename",
        "duplicateTab",
        "tabBeforeClosing",
        "bool&",
        "ok",
        "tabDelete",
        "deleteFile",
        "updateMenu",
        "programEnable",
        "undoEnable",
        "redoEnable",
        "cutEnable",
        "copyEnable",
        "pasteEnable",
        "port",
        "board",
        "updateSerialPorts",
        "portProcessFinished",
        "exitCode",
        "QProcess::ExitStatus",
        "exitStatus",
        "portProcessReadyRead",
        "updateBoards",
        "setPlatform",
        "QAction*",
        "setPort",
        "setBoard",
        "rename",
        "undo",
        "redo",
        "cut",
        "copy",
        "paste",
        "selectAll",
        "serialMonitor",
        "sendProgram"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'closed'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'changeActivationSignal'
        QtMocHelpers::SignalData<void(bool, QWidget *)>(3, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 4 }, { 0x80000000 | 5, 6 },
        }}),
        // Signal 'linkToProgramFile'
        QtMocHelpers::SignalData<void(const QString &, Platform *, bool, bool)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 8 }, { 0x80000000 | 9, 10 }, { QMetaType::Bool, 11 }, { QMetaType::Bool, 12 },
        }}),
        // Slot 'saveAll'
        QtMocHelpers::SlotData<void()>(13, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'loadProgramFile'
        QtMocHelpers::SlotData<void()>(14, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'addTab'
        QtMocHelpers::SlotData<ProgramTab *()>(15, 2, QMC::AccessProtected, 0x80000000 | 16),
        // Slot 'closeCurrentTab'
        QtMocHelpers::SlotData<void()>(17, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'closeTab'
        QtMocHelpers::SlotData<void(int)>(18, 2, QMC::AccessProtected, QMetaType::Void, {{
            { QMetaType::Int, 19 },
        }}),
        // Slot 'saveCurrentTab'
        QtMocHelpers::SlotData<void()>(20, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'tabSave'
        QtMocHelpers::SlotData<void(int)>(21, 2, QMC::AccessProtected, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Slot 'tabSaveAs'
        QtMocHelpers::SlotData<void(int)>(22, 2, QMC::AccessProtected, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Slot 'tabRename'
        QtMocHelpers::SlotData<void(int)>(23, 2, QMC::AccessProtected, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Slot 'duplicateTab'
        QtMocHelpers::SlotData<void()>(24, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'tabBeforeClosing'
        QtMocHelpers::SlotData<void(int, bool &)>(25, 2, QMC::AccessProtected, QMetaType::Void, {{
            { QMetaType::Int, 2 }, { 0x80000000 | 26, 27 },
        }}),
        // Slot 'tabDelete'
        QtMocHelpers::SlotData<void(int, bool)>(28, 2, QMC::AccessProtected, QMetaType::Void, {{
            { QMetaType::Int, 19 }, { QMetaType::Bool, 29 },
        }}),
        // Slot 'updateMenu'
        QtMocHelpers::SlotData<void(bool, bool, bool, bool, bool, bool, Platform *, const QString &, const QString &, const QString &)>(30, 2, QMC::AccessProtected, QMetaType::Void, {{
            { QMetaType::Bool, 31 }, { QMetaType::Bool, 32 }, { QMetaType::Bool, 33 }, { QMetaType::Bool, 34 },
            { QMetaType::Bool, 35 }, { QMetaType::Bool, 36 }, { 0x80000000 | 9, 10 }, { QMetaType::QString, 37 },
            { QMetaType::QString, 38 }, { QMetaType::QString, 8 },
        }}),
        // Slot 'updateSerialPorts'
        QtMocHelpers::SlotData<void()>(39, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'portProcessFinished'
        QtMocHelpers::SlotData<void(int, QProcess::ExitStatus)>(40, 2, QMC::AccessProtected, QMetaType::Void, {{
            { QMetaType::Int, 41 }, { 0x80000000 | 42, 43 },
        }}),
        // Slot 'portProcessReadyRead'
        QtMocHelpers::SlotData<void()>(44, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'updateBoards'
        QtMocHelpers::SlotData<void()>(45, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'setPlatform'
        QtMocHelpers::SlotData<void(QAction *)>(46, 2, QMC::AccessProtected, QMetaType::Void, {{
            { 0x80000000 | 47, 2 },
        }}),
        // Slot 'setPort'
        QtMocHelpers::SlotData<void(QAction *)>(48, 2, QMC::AccessProtected, QMetaType::Void, {{
            { 0x80000000 | 47, 2 },
        }}),
        // Slot 'setBoard'
        QtMocHelpers::SlotData<void(QAction *)>(49, 2, QMC::AccessProtected, QMetaType::Void, {{
            { 0x80000000 | 47, 2 },
        }}),
        // Slot 'rename'
        QtMocHelpers::SlotData<void()>(50, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'undo'
        QtMocHelpers::SlotData<void()>(51, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'redo'
        QtMocHelpers::SlotData<void()>(52, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'cut'
        QtMocHelpers::SlotData<void()>(53, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'copy'
        QtMocHelpers::SlotData<void()>(54, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'paste'
        QtMocHelpers::SlotData<void()>(55, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'selectAll'
        QtMocHelpers::SlotData<void()>(56, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'serialMonitor'
        QtMocHelpers::SlotData<void()>(57, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'sendProgram'
        QtMocHelpers::SlotData<void()>(58, 2, QMC::AccessProtected, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<ProgramWindow, qt_meta_tag_ZN13ProgramWindowE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject ProgramWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<FritzingWindow::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13ProgramWindowE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13ProgramWindowE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN13ProgramWindowE_t>.metaTypes,
    nullptr
} };

void ProgramWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ProgramWindow *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->closed(); break;
        case 1: _t->changeActivationSignal((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QWidget*>>(_a[2]))); break;
        case 2: _t->linkToProgramFile((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<Platform*>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[4]))); break;
        case 3: _t->saveAll(); break;
        case 4: _t->loadProgramFile(); break;
        case 5: { ProgramTab* _r = _t->addTab();
            if (_a[0]) *reinterpret_cast< ProgramTab**>(_a[0]) = std::move(_r); }  break;
        case 6: _t->closeCurrentTab(); break;
        case 7: _t->closeTab((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 8: _t->saveCurrentTab(); break;
        case 9: _t->tabSave((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 10: _t->tabSaveAs((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 11: _t->tabRename((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 12: _t->duplicateTab(); break;
        case 13: _t->tabBeforeClosing((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool&>>(_a[2]))); break;
        case 14: _t->tabDelete((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 15: _t->updateMenu((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[5])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[6])),(*reinterpret_cast< std::add_pointer_t<Platform*>>(_a[7])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[8])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[9])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[10]))); break;
        case 16: _t->updateSerialPorts(); break;
        case 17: _t->portProcessFinished((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QProcess::ExitStatus>>(_a[2]))); break;
        case 18: _t->portProcessReadyRead(); break;
        case 19: _t->updateBoards(); break;
        case 20: _t->setPlatform((*reinterpret_cast< std::add_pointer_t<QAction*>>(_a[1]))); break;
        case 21: _t->setPort((*reinterpret_cast< std::add_pointer_t<QAction*>>(_a[1]))); break;
        case 22: _t->setBoard((*reinterpret_cast< std::add_pointer_t<QAction*>>(_a[1]))); break;
        case 23: _t->rename(); break;
        case 24: _t->undo(); break;
        case 25: _t->redo(); break;
        case 26: _t->cut(); break;
        case 27: _t->copy(); break;
        case 28: _t->paste(); break;
        case 29: _t->selectAll(); break;
        case 30: _t->serialMonitor(); break;
        case 31: _t->sendProgram(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QWidget* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< Platform* >(); break;
            }
            break;
        case 15:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 6:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< Platform* >(); break;
            }
            break;
        case 20:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QAction* >(); break;
            }
            break;
        case 21:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QAction* >(); break;
            }
            break;
        case 22:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QAction* >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (ProgramWindow::*)()>(_a, &ProgramWindow::closed, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (ProgramWindow::*)(bool , QWidget * )>(_a, &ProgramWindow::changeActivationSignal, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (ProgramWindow::*)(const QString & , Platform * , bool , bool )>(_a, &ProgramWindow::linkToProgramFile, 2))
            return;
    }
}

const QMetaObject *ProgramWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ProgramWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13ProgramWindowE_t>.strings))
        return static_cast<void*>(this);
    return FritzingWindow::qt_metacast(_clname);
}

int ProgramWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = FritzingWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 32)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 32;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 32)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 32;
    }
    return _id;
}

// SIGNAL 0
void ProgramWindow::closed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ProgramWindow::changeActivationSignal(bool _t1, QWidget * _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1, _t2);
}

// SIGNAL 2
void ProgramWindow::linkToProgramFile(const QString & _t1, Platform * _t2, bool _t3, bool _t4)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1, _t2, _t3, _t4);
}
QT_WARNING_POP
