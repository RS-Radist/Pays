#ifndef ORDER_BANK_NAME_H
#define ORDER_BANK_NAME_H

#include <QFrame>
#include "ui_bank_name.h"
namespace PAYS {
namespace Order {
class BankName:public QFrame
{
  Q_OBJECT
    public:
    BankName (QWidget *parent=0);
    virtual ~BankName(){}
    void setName(const QString &name);

    private:
    Ui::BankName ui;

};

}//namespace Order
}//namespace PAYS
#endif // ORDER_BANK_NAME_H
