/****************************************************************************
** Meta object code from reading C++ file 'bitcoingui.h'
**
** Created: Fri Jan 3 23:19:41 2014
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/qt/bitcoingui.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'bitcoingui.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_BitcoinGUI[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      25,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      18,   12,   11,   11, 0x0a,
      41,   12,   11,   11, 0x0a,
      75,   59,   11,   11, 0x0a,
     102,   95,   11,   11, 0x0a,
     127,   11,   11,   11, 0x0a,
     160,  146,   11,   11, 0x0a,
     203,  183,   11,   11, 0x0a,
     231,  224,   11,   11, 0x0a,
     250,   11,   11,   11, 0x0a,
     268,   11,   11,   11, 0x0a,
     293,   11,   11,   11, 0x08,
     312,   11,   11,   11, 0x08,
     329,   11,   11,   11, 0x08,
     347,   11,   11,   11, 0x08,
     369,   11,   11,   11, 0x08,
     392,   11,   11,   11, 0x08,
     412,   11,   11,   11, 0x08,
     429,   11,   11,   11, 0x08,
     451,  444,   11,   11, 0x08,
     521,  504,   11,   11, 0x08,
     562,   95,   11,   11, 0x08,
     582,   11,   11,   11, 0x08,
     597,   11,   11,   11, 0x08,
     616,   11,   11,   11, 0x08,
     631,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_BitcoinGUI[] = {
    "BitcoinGUI\0\0count\0setNumConnections(int)\0"
    "setNumBlocks(int)\0mining,hashrate\0"
    "setMining(bool,int)\0status\0"
    "setEncryptionStatus(int)\0refreshStatusBar()\0"
    "title,message\0error(QString,QString)\0"
    "nFeeRequired,payFee\0askFee(qint64,bool*)\0"
    "strURL\0handleURL(QString)\0gotoMessagePage()\0"
    "gotoMessagePage(QString)\0gotoOverviewPage()\0"
    "gotoMiningPage()\0gotoHistoryPage()\0"
    "gotoAddressBookPage()\0gotoReceiveCoinsPage()\0"
    "gotoSendCoinsPage()\0optionsClicked()\0"
    "aboutClicked()\0reason\0"
    "trayIconActivated(QSystemTrayIcon::ActivationReason)\0"
    "parent,start,end\0"
    "incomingTransaction(QModelIndex,int,int)\0"
    "encryptWallet(bool)\0backupWallet()\0"
    "changePassphrase()\0unlockWallet()\0"
    "showNormalIfMinimized()\0"
};

void BitcoinGUI::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        BitcoinGUI *_t = static_cast<BitcoinGUI *>(_o);
        switch (_id) {
        case 0: _t->setNumConnections((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->setNumBlocks((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->setMining((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->setEncryptionStatus((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->refreshStatusBar(); break;
        case 5: _t->error((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 6: _t->askFee((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< bool*(*)>(_a[2]))); break;
        case 7: _t->handleURL((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: _t->gotoMessagePage(); break;
        case 9: _t->gotoMessagePage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 10: _t->gotoOverviewPage(); break;
        case 11: _t->gotoMiningPage(); break;
        case 12: _t->gotoHistoryPage(); break;
        case 13: _t->gotoAddressBookPage(); break;
        case 14: _t->gotoReceiveCoinsPage(); break;
        case 15: _t->gotoSendCoinsPage(); break;
        case 16: _t->optionsClicked(); break;
        case 17: _t->aboutClicked(); break;
        case 18: _t->trayIconActivated((*reinterpret_cast< QSystemTrayIcon::ActivationReason(*)>(_a[1]))); break;
        case 19: _t->incomingTransaction((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 20: _t->encryptWallet((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 21: _t->backupWallet(); break;
        case 22: _t->changePassphrase(); break;
        case 23: _t->unlockWallet(); break;
        case 24: _t->showNormalIfMinimized(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData BitcoinGUI::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject BitcoinGUI::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_BitcoinGUI,
      qt_meta_data_BitcoinGUI, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &BitcoinGUI::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *BitcoinGUI::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *BitcoinGUI::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BitcoinGUI))
        return static_cast<void*>(const_cast< BitcoinGUI*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int BitcoinGUI::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 25)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 25;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
