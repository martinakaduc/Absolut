/****************************************************************************
** Meta object code from reading C++ file 'pdb.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Absolut/pdb.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pdb.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.5.0. It"
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

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSPDBENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSPDBENDCLASS = QtMocHelpers::stringData(
    "PDB",
    "getPDB",
    "",
    "viewPDBin3D",
    "getFasta",
    "mergeChainsIntoFile",
    "discretizeIntoFile",
    "string",
    "silent",
    "readDiscretizedFileToLattice",
    "seePDB",
    "seeLatFitOutput",
    "calculateReceptors",
    "iterateBonds",
    "typeDiscr",
    "addHeader",
    "viewDiscretized",
    "append"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSPDBENDCLASS_t {
    uint offsetsAndSizes[36];
    char stringdata0[4];
    char stringdata1[7];
    char stringdata2[1];
    char stringdata3[12];
    char stringdata4[9];
    char stringdata5[20];
    char stringdata6[19];
    char stringdata7[7];
    char stringdata8[7];
    char stringdata9[29];
    char stringdata10[7];
    char stringdata11[16];
    char stringdata12[19];
    char stringdata13[13];
    char stringdata14[10];
    char stringdata15[10];
    char stringdata16[16];
    char stringdata17[7];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSPDBENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSPDBENDCLASS_t qt_meta_stringdata_CLASSPDBENDCLASS = {
    {
        QT_MOC_LITERAL(0, 3),  // "PDB"
        QT_MOC_LITERAL(4, 6),  // "getPDB"
        QT_MOC_LITERAL(11, 0),  // ""
        QT_MOC_LITERAL(12, 11),  // "viewPDBin3D"
        QT_MOC_LITERAL(24, 8),  // "getFasta"
        QT_MOC_LITERAL(33, 19),  // "mergeChainsIntoFile"
        QT_MOC_LITERAL(53, 18),  // "discretizeIntoFile"
        QT_MOC_LITERAL(72, 6),  // "string"
        QT_MOC_LITERAL(79, 6),  // "silent"
        QT_MOC_LITERAL(86, 28),  // "readDiscretizedFileToLattice"
        QT_MOC_LITERAL(115, 6),  // "seePDB"
        QT_MOC_LITERAL(122, 15),  // "seeLatFitOutput"
        QT_MOC_LITERAL(138, 18),  // "calculateReceptors"
        QT_MOC_LITERAL(157, 12),  // "iterateBonds"
        QT_MOC_LITERAL(170, 9),  // "typeDiscr"
        QT_MOC_LITERAL(180, 9),  // "addHeader"
        QT_MOC_LITERAL(190, 15),  // "viewDiscretized"
        QT_MOC_LITERAL(206, 6)   // "append"
    },
    "PDB",
    "getPDB",
    "",
    "viewPDBin3D",
    "getFasta",
    "mergeChainsIntoFile",
    "discretizeIntoFile",
    "string",
    "silent",
    "readDiscretizedFileToLattice",
    "seePDB",
    "seeLatFitOutput",
    "calculateReceptors",
    "iterateBonds",
    "typeDiscr",
    "addHeader",
    "viewDiscretized",
    "append"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSPDBENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  104,    2, 0x0a,    1 /* Public */,
       3,    0,  105,    2, 0x0a,    2 /* Public */,
       4,    0,  106,    2, 0x0a,    3 /* Public */,
       5,    0,  107,    2, 0x0a,    4 /* Public */,
       6,    1,  108,    2, 0x0a,    5 /* Public */,
       6,    0,  111,    2, 0x2a,    7 /* Public | MethodCloned */,
       9,    0,  112,    2, 0x0a,    8 /* Public */,
      10,    0,  113,    2, 0x0a,    9 /* Public */,
      11,    0,  114,    2, 0x0a,   10 /* Public */,
      12,    0,  115,    2, 0x0a,   11 /* Public */,
      13,    2,  116,    2, 0x0a,   12 /* Public */,
      13,    1,  121,    2, 0x2a,   15 /* Public | MethodCloned */,
      13,    0,  124,    2, 0x2a,   17 /* Public | MethodCloned */,
      16,    1,  125,    2, 0x0a,   18 /* Public */,
      16,    0,  128,    2, 0x2a,   20 /* Public | MethodCloned */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    0x80000000 | 7, QMetaType::Bool,    8,
    0x80000000 | 7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    0x80000000 | 7, 0x80000000 | 7, QMetaType::Bool,   14,   15,
    0x80000000 | 7, 0x80000000 | 7,   14,
    0x80000000 | 7,
    QMetaType::Void, QMetaType::Bool,   17,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject PDB::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSPDBENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSPDBENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSPDBENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<PDB, std::true_type>,
        // method 'getPDB'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'viewPDBin3D'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'getFasta'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'mergeChainsIntoFile'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'discretizeIntoFile'
        QtPrivate::TypeAndForceComplete<string, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'discretizeIntoFile'
        QtPrivate::TypeAndForceComplete<string, std::false_type>,
        // method 'readDiscretizedFileToLattice'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'seePDB'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'seeLatFitOutput'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'calculateReceptors'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'iterateBonds'
        QtPrivate::TypeAndForceComplete<string, std::false_type>,
        QtPrivate::TypeAndForceComplete<string, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'iterateBonds'
        QtPrivate::TypeAndForceComplete<string, std::false_type>,
        QtPrivate::TypeAndForceComplete<string, std::false_type>,
        // method 'iterateBonds'
        QtPrivate::TypeAndForceComplete<string, std::false_type>,
        // method 'viewDiscretized'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'viewDiscretized'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void PDB::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PDB *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->getPDB(); break;
        case 1: _t->viewPDBin3D(); break;
        case 2: _t->getFasta(); break;
        case 3: _t->mergeChainsIntoFile(); break;
        case 4: { string _r = _t->discretizeIntoFile((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])));
            if (_a[0]) *reinterpret_cast< string*>(_a[0]) = std::move(_r); }  break;
        case 5: { string _r = _t->discretizeIntoFile();
            if (_a[0]) *reinterpret_cast< string*>(_a[0]) = std::move(_r); }  break;
        case 6: _t->readDiscretizedFileToLattice(); break;
        case 7: _t->seePDB(); break;
        case 8: _t->seeLatFitOutput(); break;
        case 9: _t->calculateReceptors(); break;
        case 10: { string _r = _t->iterateBonds((*reinterpret_cast< std::add_pointer_t<string>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2])));
            if (_a[0]) *reinterpret_cast< string*>(_a[0]) = std::move(_r); }  break;
        case 11: { string _r = _t->iterateBonds((*reinterpret_cast< std::add_pointer_t<string>>(_a[1])));
            if (_a[0]) *reinterpret_cast< string*>(_a[0]) = std::move(_r); }  break;
        case 12: { string _r = _t->iterateBonds();
            if (_a[0]) *reinterpret_cast< string*>(_a[0]) = std::move(_r); }  break;
        case 13: _t->viewDiscretized((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 14: _t->viewDiscretized(); break;
        default: ;
        }
    }
}

const QMetaObject *PDB::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PDB::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSPDBENDCLASS.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "discretization"))
        return static_cast< discretization*>(this);
    return QWidget::qt_metacast(_clname);
}

int PDB::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 15;
    }
    return _id;
}
QT_WARNING_POP
