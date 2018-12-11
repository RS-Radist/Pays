#include "order_frame.h"
#include <QVBoxLayout>
#include <QGridLayout>
#include "order_title.h"
#include "order_sum_as_words.h"
#include "order_summa.h"
#include "order_account.h"
#include "order_payer_in_out.h"
#include "order_bank_name.h"
#include "order_receiver.h"

namespace PAYS {
namespace Order{
Frame::Frame(QWidget *parent):QFrame(parent),m_Data(0)
{
        setStyleSheet("background: #FFDEAD") ;

        QVBoxLayout *layout=new QVBoxLayout(this);
        layout->setMargin(0);

        m_Title=new Title(this);
        layout->addWidget(m_Title);

        m_SumAsWords=new SumAsWords(this);
        layout->addWidget(m_SumAsWords);

        QGridLayout *field_layout=new QGridLayout(0);
        field_layout->setMargin(0) ;
        layout->addLayout(field_layout); // сохраняем лейаут

        m_Payer =new PayerInOut(this);
        m_Payer->setName(tr("Payer"));
       // payer->setStyleSheet("background: red");// цвет виджета
        field_layout->addWidget(m_Payer,0,0,3,1);

        m_Summa=new Summa(this);
        field_layout->addWidget(m_Summa,0,1,1,1);

        m_PayerAccount=new Account(this);
        field_layout->addWidget(m_PayerAccount,1,1,1,1);

        QFrame * empty=new QFrame(this);
        empty->setSizePolicy(QSizePolicy::Expanding,
                             QSizePolicy::Expanding);
        field_layout->addWidget(empty,2,1,1,1);


        m_PayerBank=new BankName(this);
        m_PayerBank->setName(tr("Payer Bank"));
        field_layout->addWidget(m_PayerBank,3,0,1,1);

        QFrame *payer_bank_data=new QFrame(this);
        payer_bank_data->setStyleSheet("background:red");
        field_layout->addWidget(payer_bank_data,3,1,1,1);

        m_Receiver=new Receiver(this);
        field_layout->addWidget(m_Receiver,4,0,1,1);

        QFrame *receiver_data=new QFrame(this);
        receiver_data->setStyleSheet("background:red");
        field_layout->addWidget(receiver_data,4,1,1,1);

        connect(m_Title,SIGNAL(raise_error(const QString&)),
                    this,SIGNAL(raise_error(const QString&)));

        connect(m_Summa,SIGNAL(value_changed(const QString&)),
                m_SumAsWords,SLOT(setValue(const QString&)));

        layout->addSpacerItem(
                    new QSpacerItem(0,0,QSizePolicy::Expanding));

}

void Frame::attach_data(QObject *data)
{
    m_Data=data;
    m_Title->attach_data(data);
}
void Frame::can_accept(bool *OK)
{
    m_Title->can_accept(OK);
    if(!*OK) return;
    m_Summa->can_accept(OK);
    if(!*OK) return;
}
void Frame::save_data(bool *OK)
{
    if (!m_Data) return;
    m_Title->save_data(OK) ;
    if(!*OK) return;
    m_Data->setProperty("amount",m_Summa->property("value"));
}
}//namespace Order
}// namespace PAYS
