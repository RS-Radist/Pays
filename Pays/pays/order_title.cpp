#include "order_title.h"
#include <QLabel>
#include <QHBoxLayout>
#include <QLineEdit>
#include <QDateTimeEdit>
#include <QComboBox>
#include <QDateTime>
#include <QtDebug>
namespace PAYS {
namespace Order {

Title::Title(QWidget *parent):QFrame(parent),m_Data(0)
{
    // разметка
    QHBoxLayout * layout=new QHBoxLayout(this);// Установка разметки
    layout->setMargin(0);// поля

    layout->addStretch();//распорки между // //

    QLabel * order_title=new QLabel(this); //
    order_title->setText(tr("PAYMANT ORDER #"));
    layout->addWidget(order_title);
    m_Number=new QLineEdit(this);
    //m_Number->setMaxLength(2); // установка колиество символов в поле
    layout->addWidget(m_Number);
    m_Date=new QDateTimeEdit(this);
    m_Date->setDisplayFormat("dd.MM.yyyy");// установка формата даты
    m_Date->setDateTime(QDateTime::currentDateTime());//установка текущей даты
    m_Date->setCalendarPopup(true);// по за просу может вылетать календарь
    layout->addWidget(m_Date);
    m_Kind=new QComboBox(this);
    m_Kind->addItem(QString::fromUtf8("электронно"));
    m_Kind->addItem(QString::fromUtf8("почтой"));
    m_Kind->addItem(QString::fromUtf8("телеграфом"));
    m_Kind->addItem(QString::fromUtf8("срочно"));

    layout->addWidget(m_Kind);

    layout->addStretch();//распорки между //виджетами //

    m_PayerStatus=new QLineEdit(this);
    m_PayerStatus->setMaxLength(2);
    m_PayerStatus->setInputMask("99;_");// установка маски по числам
    m_PayerStatus->setMaximumWidth(50);// максимальная ширина в пикселях
    layout->addWidget(m_PayerStatus);


}

QString Title::number() const
{
    return m_Number->text().simplified(); //simplified выкидывет все пробелы в начале и в конце и если в середине два пробела, заменяет их на один
}
QDateTime Title::date() const
{
    return m_Date->dateTime();
}
QString Title::kind() const
{
    return m_Kind->currentText();
}
QString Title::payerStatus() const
{
    return m_PayerStatus->text();
}

void Title::setDate(const QDateTime &value)
{
    m_Date->setDateTime(value);
}
void Title::setKind(const QString &value)
{
    QString val=value.simplified();
    if (val==QString::fromUtf8("электронно"))
    {
        m_Kind->setCurrentIndex(0);
    }
    else if (val==QString::fromUtf8("почтой"))
    {
        m_Kind->setCurrentIndex(1);
    }
    else if (val==QString::fromUtf8("телеграфом"))
    {
        m_Kind->setCurrentIndex(2);
    }
    else if (val==QString::fromUtf8("срочно"))
    {
        m_Kind->setCurrentIndex(3);
    }
    else
    {
        qWarning()<<"Invalid payment kind"<<val;
    }



//    m_Kind->addItem(QString::fromUtf8("телеграфом"));
//    m_Kind->addItem(QString::fromUtf8("срочно"));
}
void Title::setNumber(const QString &value)
{
    m_Number->setText(value.simplified());
}
void Title::setPayerStatus(const QString &value)
{
    m_PayerStatus->setText(value.simplified());
}

void Title::can_accept(bool *OK)
{
    if(! m_PayerStatus->hasAcceptableInput())
    {

        emit raise_error(tr("Invalid Payer Status"));
        m_PayerStatus->setStyleSheet("backgroud: #QWEER");
        *OK=false;
        return;
    }
}

void Title::save_data(bool * /*OK*/ )
{
    if(!m_Data) return;
    const char *props[] = { "number", "date", "kind", "payerStatus", 0 };
    for(int k=0;props[k];k++)
    {
        m_Data->setProperty(props[k],property(props[k])) ;
    }

}

}//namespace Order
}//namcespace PAYS
