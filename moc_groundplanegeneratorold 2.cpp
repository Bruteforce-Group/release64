/****************************************************************************
** Meta object code from reading C++ file 'groundplanegeneratorold.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../fritzing-app/src/svg/groundplanegeneratorold.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'groundplanegeneratorold.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN23GroundPlaneGeneratorOldE_t {};
} // unnamed namespace

template <> constexpr inline auto GroundPlaneGeneratorOld::qt_create_metaobjectdata<qt_meta_tag_ZN23GroundPlaneGeneratorOldE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "GroundPlaneGeneratorOld",
        "postImageSignal",
        "",
        "GroundPlaneGeneratorOld*",
        "QImage*",
        "copperImage",
        "boardImage",
        "QGraphicsItem*",
        "board",
        "QList<QRectF>*"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'postImageSignal'
        QtMocHelpers::SignalData<void(GroundPlaneGeneratorOld *, QImage *, QImage *, QGraphicsItem *, QList<QRectF> *)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 2 }, { 0x80000000 | 4, 5 }, { 0x80000000 | 4, 6 }, { 0x80000000 | 7, 8 },
            { 0x80000000 | 9, 2 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<GroundPlaneGeneratorOld, qt_meta_tag_ZN23GroundPlaneGeneratorOldE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject GroundPlaneGeneratorOld::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN23GroundPlaneGeneratorOldE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN23GroundPlaneGeneratorOldE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN23GroundPlaneGeneratorOldE_t>.metaTypes,
    nullptr
} };

void GroundPlaneGeneratorOld::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<GroundPlaneGeneratorOld *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->postImageSignal((*reinterpret_cast< std::add_pointer_t<GroundPlaneGeneratorOld*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QImage*>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QImage*>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QGraphicsItem*>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<QList<QRectF>*>>(_a[5]))); break;
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
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< GroundPlaneGeneratorOld* >(); break;
            case 3:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QGraphicsItem* >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (GroundPlaneGeneratorOld::*)(GroundPlaneGeneratorOld * , QImage * , QImage * , QGraphicsItem * , QList<QRectF> * )>(_a, &GroundPlaneGeneratorOld::postImageSignal, 0))
            return;
    }
}

const QMetaObject *GroundPlaneGeneratorOld::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GroundPlaneGeneratorOld::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN23GroundPlaneGeneratorOldE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int GroundPlaneGeneratorOld::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void GroundPlaneGeneratorOld::postImageSignal(GroundPlaneGeneratorOld * _t1, QImage * _t2, QImage * _t3, QGraphicsItem * _t4, QList<QRectF> * _t5)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1, _t2, _t3, _t4, _t5);
}
QT_WARNING_POP
