#include "dialogs_buttons.h"
#include <QHBoxLayout>
#include <QPushButton>
#include <QLabel>
namespace PAYS {
namespace DIALOGS {

Buttons::Buttons (QWidget *parent):QFrame(parent)
{
    //setStyleSheet("background-color: yellow");
    setSizePolicy(QSizePolicy::Preferred,
                  QSizePolicy::Minimum);

    QHBoxLayout *layout=new QHBoxLayout(this);
    layout->setMargin(0);
    m_ErrorMassage=new QLabel(this);

    m_ErrorMassage->setStyleSheet("color: red");
    m_ErrorMassage->setSizePolicy(QSizePolicy::Expanding
                                  ,QSizePolicy::Minimum);
    layout->addWidget(m_ErrorMassage);

    m_OK=new QPushButton(this);
    m_OK->setText("OK");
    layout->addWidget(m_OK);

    m_Cancel=new QPushButton(this);
    m_Cancel->setText("Cancel");
    layout->addWidget(m_Cancel);

    connect(m_Cancel,SIGNAL(clicked()),this,SIGNAL(rejected()));
    connect(m_OK,SIGNAL(clicked()),this,SLOT(on_ok_press()));


}

void Buttons::on_ok_press()
{
    bool OK=true;
    emit accept_request(&OK);
    if (!OK) return;
    emit save_request(&OK);
    if (!OK) return;
    emit accepted();
}

void Buttons::error_message(const QString &message)
{
    m_ErrorMassage->setText(message);
}

}//namespace DIALOGS
}//namespace PAYS
