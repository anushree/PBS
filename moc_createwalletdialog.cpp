/****************************************************************************
** Meta object code from reading C++ file 'createwalletdialog.h'
**
** Created: Mon May 3 09:03:57 2010
**      by: The Qt Meta Object Compiler version 61 (Qt 4.5.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "createwalletdialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'createwalletdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 61
#error "This file was generated using the moc from 4.5.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_createWalletDialog[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   12, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // slots: signature, parameters, type, tag, flags
      20,   19,   19,   19, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_createWalletDialog[] = {
    "createWalletDialog\0\0addDetails()\0"
};

const QMetaObject createWalletDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_createWalletDialog,
      qt_meta_data_createWalletDialog, 0 }
};

const QMetaObject *createWalletDialog::metaObject() const
{
    return &staticMetaObject;
}

void *createWalletDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_createWalletDialog))
        return static_cast<void*>(const_cast< createWalletDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int createWalletDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: addDetails(); break;
        default: ;
        }
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
