#include "order_summa.h"
#include <QRegExpValidator>

namespace PAYS {
namespace Order {
Summa::Summa(QWidget *parent)
    :QFrame(parent)
{
    ui.setupUi(this); // разложит элементы управления
    ui.m_Value->setValidator(
                new QRegExpValidator(QRegExp("^\\d*[\\.,]?\\d?\\d?$"),this)//регулярное выражение
                );
    connect(ui.m_Value,SIGNAL(textEdited(const QString&)),
                  this,SIGNAL(value_changed(const QString&)));
}

QString Summa::value() const
{
    return ui.m_Value->text().simplified();// Get текста без пробелов
}

void Summa::setValue(const QString &value) // Set
{
    ui.m_Value->setText(value.simplified());
}

void Summa::can_accept(bool *OK)
{
    if(!ui.m_Value->hasAcceptableInput())
    {
        *OK=false;
    }
}


}//namespace Order
}//namespace PAYS
