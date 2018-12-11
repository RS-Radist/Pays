#include "order_sum_as_words.h"
#include <QHBoxLayout>
#include <QLabel>
#include "helpers.h"
namespace PAYS {
namespace Order {


SumAsWords::SumAsWords(QWidget *parent)
    :QFrame(parent)
{
    setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Minimum);// горизонталь и вертикаль
    QHBoxLayout *layout=new QHBoxLayout(this);
    layout->setMargin(0);



    m_Label=new QLabel(tr("Sum as words"),this);
    m_Label->setSizePolicy(
                QSizePolicy::Minimum,
                QSizePolicy::Minimum);
    m_Value=new QLabel(this);

    m_Label->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Minimum);
    layout->addWidget(m_Label);
    layout->addWidget(m_Value);
}

void SumAsWords::setValue(const QString &value)
{
    m_Value->setText(HLP::sum_as_words(value));
}





}//namespace Order
}//namespace PAYS
