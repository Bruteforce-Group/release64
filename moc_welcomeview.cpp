/****************************************************************************
** Meta object code from reading C++ file 'welcomeview.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../fritzing-app/src/sketch/welcomeview.h"
#include <QtGui/qtextcursor.h>
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'welcomeview.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN14CustomListItemE_t {};
} // unnamed namespace

template <> constexpr inline auto CustomListItem::qt_create_metaobjectdata<qt_meta_tag_ZN14CustomListItemE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "CustomListItem",
        "leftItemClicked",
        "",
        "data",
        "rightItemClicked",
        "onLeftButtonClicked",
        "onRightButtonClicked"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'leftItemClicked'
        QtMocHelpers::SignalData<void(const QString &)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 3 },
        }}),
        // Signal 'rightItemClicked'
        QtMocHelpers::SignalData<void(const QString &)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 3 },
        }}),
        // Slot 'onLeftButtonClicked'
        QtMocHelpers::SlotData<void()>(5, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onRightButtonClicked'
        QtMocHelpers::SlotData<void()>(6, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<CustomListItem, qt_meta_tag_ZN14CustomListItemE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject CustomListItem::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14CustomListItemE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14CustomListItemE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN14CustomListItemE_t>.metaTypes,
    nullptr
} };

void CustomListItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<CustomListItem *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->leftItemClicked((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->rightItemClicked((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->onLeftButtonClicked(); break;
        case 3: _t->onRightButtonClicked(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (CustomListItem::*)(const QString & )>(_a, &CustomListItem::leftItemClicked, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (CustomListItem::*)(const QString & )>(_a, &CustomListItem::rightItemClicked, 1))
            return;
    }
}

const QMetaObject *CustomListItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CustomListItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14CustomListItemE_t>.strings))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int CustomListItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void CustomListItem::leftItemClicked(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void CustomListItem::rightItemClicked(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}
namespace {
struct qt_meta_tag_ZN14BlogListWidgetE_t {};
} // unnamed namespace

template <> constexpr inline auto BlogListWidget::qt_create_metaobjectdata<qt_meta_tag_ZN14BlogListWidgetE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "BlogListWidget",
        "itemEnteredSlot",
        "",
        "QListWidgetItem*",
        "titleTextColor",
        "titleTextFontFamily",
        "titleTextFontSize",
        "titleTextExtraLeading",
        "introTextColor",
        "introTextFontFamily",
        "introTextFontSize",
        "introTextExtraLeading",
        "dateTextColor",
        "dateTextFontFamily",
        "dateTextFontSize"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'itemEnteredSlot'
        QtMocHelpers::SlotData<void(QListWidgetItem *)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 2 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'titleTextColor'
        QtMocHelpers::PropertyData<QColor>(4, QMetaType::QColor, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'titleTextFontFamily'
        QtMocHelpers::PropertyData<QString>(5, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'titleTextFontSize'
        QtMocHelpers::PropertyData<QString>(6, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'titleTextExtraLeading'
        QtMocHelpers::PropertyData<QString>(7, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'introTextColor'
        QtMocHelpers::PropertyData<QColor>(8, QMetaType::QColor, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'introTextFontFamily'
        QtMocHelpers::PropertyData<QString>(9, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'introTextFontSize'
        QtMocHelpers::PropertyData<QString>(10, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'introTextExtraLeading'
        QtMocHelpers::PropertyData<QString>(11, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'dateTextColor'
        QtMocHelpers::PropertyData<QColor>(12, QMetaType::QColor, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'dateTextFontFamily'
        QtMocHelpers::PropertyData<QString>(13, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'dateTextFontSize'
        QtMocHelpers::PropertyData<QString>(14, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<BlogListWidget, qt_meta_tag_ZN14BlogListWidgetE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject BlogListWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QListWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14BlogListWidgetE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14BlogListWidgetE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN14BlogListWidgetE_t>.metaTypes,
    nullptr
} };

void BlogListWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<BlogListWidget *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->itemEnteredSlot((*reinterpret_cast< std::add_pointer_t<QListWidgetItem*>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QColor*>(_v) = _t->titleTextColor(); break;
        case 1: *reinterpret_cast<QString*>(_v) = _t->titleTextFontFamily(); break;
        case 2: *reinterpret_cast<QString*>(_v) = _t->titleTextFontSize(); break;
        case 3: *reinterpret_cast<QString*>(_v) = _t->titleTextExtraLeading(); break;
        case 4: *reinterpret_cast<QColor*>(_v) = _t->introTextColor(); break;
        case 5: *reinterpret_cast<QString*>(_v) = _t->introTextFontFamily(); break;
        case 6: *reinterpret_cast<QString*>(_v) = _t->introTextFontSize(); break;
        case 7: *reinterpret_cast<QString*>(_v) = _t->introTextExtraLeading(); break;
        case 8: *reinterpret_cast<QColor*>(_v) = _t->dateTextColor(); break;
        case 9: *reinterpret_cast<QString*>(_v) = _t->dateTextFontFamily(); break;
        case 10: *reinterpret_cast<QString*>(_v) = _t->dateTextFontSize(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setTitleTextColor(*reinterpret_cast<QColor*>(_v)); break;
        case 1: _t->setTitleTextFontFamily(*reinterpret_cast<QString*>(_v)); break;
        case 2: _t->setTitleTextFontSize(*reinterpret_cast<QString*>(_v)); break;
        case 3: _t->setTitleTextExtraLeading(*reinterpret_cast<QString*>(_v)); break;
        case 4: _t->setIntroTextColor(*reinterpret_cast<QColor*>(_v)); break;
        case 5: _t->setIntroTextFontFamily(*reinterpret_cast<QString*>(_v)); break;
        case 6: _t->setIntroTextFontSize(*reinterpret_cast<QString*>(_v)); break;
        case 7: _t->setIntroTextExtraLeading(*reinterpret_cast<QString*>(_v)); break;
        case 8: _t->setDateTextColor(*reinterpret_cast<QColor*>(_v)); break;
        case 9: _t->setDateTextFontFamily(*reinterpret_cast<QString*>(_v)); break;
        case 10: _t->setDateTextFontSize(*reinterpret_cast<QString*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *BlogListWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BlogListWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14BlogListWidgetE_t>.strings))
        return static_cast<void*>(this);
    return QListWidget::qt_metacast(_clname);
}

int BlogListWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QListWidget::qt_metacall(_c, _id, _a);
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
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}
namespace {
struct qt_meta_tag_ZN11WelcomeViewE_t {};
} // unnamed namespace

template <> constexpr inline auto WelcomeView::qt_create_metaobjectdata<qt_meta_tag_ZN11WelcomeViewE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "WelcomeView",
        "newSketch",
        "",
        "openSketch",
        "recentSketch",
        "filename",
        "actionText",
        "clickRecent",
        "gotBlogSnippet",
        "QNetworkReply*",
        "gotBlogImage",
        "clickBlog",
        "recentSketchClicked",
        "data",
        "uploadLinkClicked",
        "blogItemClicked",
        "QListWidgetItem*",
        "nextTip"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'newSketch'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'openSketch'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'recentSketch'
        QtMocHelpers::SignalData<void(const QString &, const QString &)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 5 }, { QMetaType::QString, 6 },
        }}),
        // Slot 'clickRecent'
        QtMocHelpers::SlotData<void(const QString &)>(7, 2, QMC::AccessProtected, QMetaType::Void, {{
            { QMetaType::QString, 2 },
        }}),
        // Slot 'gotBlogSnippet'
        QtMocHelpers::SlotData<void(QNetworkReply *)>(8, 2, QMC::AccessProtected, QMetaType::Void, {{
            { 0x80000000 | 9, 2 },
        }}),
        // Slot 'gotBlogImage'
        QtMocHelpers::SlotData<void(QNetworkReply *)>(10, 2, QMC::AccessProtected, QMetaType::Void, {{
            { 0x80000000 | 9, 2 },
        }}),
        // Slot 'clickBlog'
        QtMocHelpers::SlotData<void(const QString &)>(11, 2, QMC::AccessProtected, QMetaType::Void, {{
            { QMetaType::QString, 2 },
        }}),
        // Slot 'recentSketchClicked'
        QtMocHelpers::SlotData<void(const QString &)>(12, 2, QMC::AccessProtected, QMetaType::Void, {{
            { QMetaType::QString, 13 },
        }}),
        // Slot 'uploadLinkClicked'
        QtMocHelpers::SlotData<void(const QString &)>(14, 2, QMC::AccessProtected, QMetaType::Void, {{
            { QMetaType::QString, 13 },
        }}),
        // Slot 'blogItemClicked'
        QtMocHelpers::SlotData<void(QListWidgetItem *)>(15, 2, QMC::AccessProtected, QMetaType::Void, {{
            { 0x80000000 | 16, 2 },
        }}),
        // Slot 'nextTip'
        QtMocHelpers::SlotData<void()>(17, 2, QMC::AccessProtected, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<WelcomeView, qt_meta_tag_ZN11WelcomeViewE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject WelcomeView::staticMetaObject = { {
    QMetaObject::SuperData::link<QFrame::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11WelcomeViewE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11WelcomeViewE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN11WelcomeViewE_t>.metaTypes,
    nullptr
} };

void WelcomeView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<WelcomeView *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->newSketch(); break;
        case 1: _t->openSketch(); break;
        case 2: _t->recentSketch((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 3: _t->clickRecent((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 4: _t->gotBlogSnippet((*reinterpret_cast< std::add_pointer_t<QNetworkReply*>>(_a[1]))); break;
        case 5: _t->gotBlogImage((*reinterpret_cast< std::add_pointer_t<QNetworkReply*>>(_a[1]))); break;
        case 6: _t->clickBlog((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 7: _t->recentSketchClicked((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 8: _t->uploadLinkClicked((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 9: _t->blogItemClicked((*reinterpret_cast< std::add_pointer_t<QListWidgetItem*>>(_a[1]))); break;
        case 10: _t->nextTip(); break;
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
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QNetworkReply* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QNetworkReply* >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (WelcomeView::*)()>(_a, &WelcomeView::newSketch, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (WelcomeView::*)()>(_a, &WelcomeView::openSketch, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (WelcomeView::*)(const QString & , const QString & )>(_a, &WelcomeView::recentSketch, 2))
            return;
    }
}

const QMetaObject *WelcomeView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WelcomeView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11WelcomeViewE_t>.strings))
        return static_cast<void*>(this);
    return QFrame::qt_metacast(_clname);
}

int WelcomeView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void WelcomeView::newSketch()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void WelcomeView::openSketch()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void WelcomeView::recentSketch(const QString & _t1, const QString & _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1, _t2);
}
namespace {
struct qt_meta_tag_ZN16BlogListDelegateE_t {};
} // unnamed namespace

template <> constexpr inline auto BlogListDelegate::qt_create_metaobjectdata<qt_meta_tag_ZN16BlogListDelegateE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "BlogListDelegate"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<BlogListDelegate, qt_meta_tag_ZN16BlogListDelegateE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject BlogListDelegate::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractItemDelegate::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN16BlogListDelegateE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN16BlogListDelegateE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN16BlogListDelegateE_t>.metaTypes,
    nullptr
} };

void BlogListDelegate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<BlogListDelegate *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *BlogListDelegate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BlogListDelegate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN16BlogListDelegateE_t>.strings))
        return static_cast<void*>(this);
    return QAbstractItemDelegate::qt_metacast(_clname);
}

int BlogListDelegate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractItemDelegate::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
