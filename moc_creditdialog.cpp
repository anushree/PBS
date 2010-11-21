/****************************************************************************
** Meta object code from reading C++ file 'creditdialog.h'
**
** Created: Mon May 3 09:03:59 2010
**      by: The Qt Meta Object Compiler version 61 (Qt 4.5.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "creditdialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'creditdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 61
#error "This file was generated using the moc from 4.5.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_creditDialog[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   12, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // slots: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x0a,
      30,   27,   13,   13, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_creditDialog[] = {
    "creditDialog\0\0addDetails()\0ID\0"
    "calculateBudget(QString)\0"
};

const QMetaObject creditDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_creditDialog,
      qt_meta_data_creditDialog, 0 }
};

const QMetaObject *creditDialog::metaObject() const
{
    return &staticMetaObject;
}

void *creditDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_creditDialog))
        return static_cast<void*>(const_cast< creditDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int creditDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: addDetails(); break;
        case 1: calculateBudget((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
