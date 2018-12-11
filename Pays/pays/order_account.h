#ifndef ORDER_ACCOUNT_H
#define ORDER_ACCOUNT_H

#include <QFrame>
#include "ui_Account.h"

namespace PAYS {
namespace Order {
class Account:public QFrame, private Ui::Account
{
    Q_OBJECT

public:
    Account (QWidget *parent=0);
    virtual ~Account(){}
};


}//namespace Order
}//namspace PAYS
#endif // ORDER_ACCOUNT_H
