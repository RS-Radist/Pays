#include "order_bank_name.h"
namespace PAYS {
namespace Order {
BankName::BankName(QWidget *parent):QFrame(parent)
{
    ui.setupUi(this);
}

void BankName::setName(const QString &name)
{
    ui.m_Name->setText(name);

}

}//namespace Order
}//namespace PAYS
