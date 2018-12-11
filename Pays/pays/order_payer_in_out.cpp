#include "order_payer_in_out.h"

namespace PAYS {
namespace Order {
PayerInOut::PayerInOut(QWidget *parent)
    :QFrame(parent)
{
    ui.setupUi(this);
}

void PayerInOut::setName(const QString &name)
{
    ui.m_LabelName->setText(name);
}


}//namespace Order
}//namespace PAYS
