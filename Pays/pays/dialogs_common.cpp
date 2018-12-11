#include "dialogs_common.h"
#include "dialogs_buttons.h"
#include <QFrame>
#include <QVBoxLayout>
#include <QtDebug>
namespace PAYS {
namespace DIALOGS
{
Base::Base(QWidget *parent):QDialog (parent)
{
    setWindowFlag(Qt::Dialog);
    QVBoxLayout *layout=new QVBoxLayout(this);

    m_Central=0;


    m_Buttons=new Buttons (this);
    layout->addWidget(m_Buttons);

    connect(m_Buttons,SIGNAL(accepted()),
            this,SLOT(accept()));
    connect(m_Buttons,SIGNAL(rejected()),
            this,SLOT(reject()));
}

void Base::setCentralFrame(QFrame *central)
{
    if(m_Central){
       m_Central->deleteLater();//Удаление объекта после завершения фунции!
    }
    m_Central=central;
    QBoxLayout *L=qobject_cast<QBoxLayout*>(layout());
    if ( ! L ){
        qWarning()<<"Invalid base dialog layaut";
        return;
    }
    m_Central->setSizePolicy(QSizePolicy::Expanding,
                             QSizePolicy::Expanding);
    L->insertWidget(0,m_Central); //установка frame


    connect(m_Buttons,SIGNAL(accept_request(bool*)),
            m_Central,SLOT(can_accept(bool*)));

    connect(m_Buttons,SIGNAL(save_request(bool*)),
            m_Central,SLOT(save_data(bool*)));

    connect(this,SIGNAL(attach_data(QObject*)),
            m_Central,SLOT(attach_data(QObject*)));

    connect(m_Central,SIGNAL(raise_error(const QString&)),
            m_Buttons,SLOT(error_message(const QString&)));

}
void Base::attach(QObject *data)
{
    emit attach_data(data);
}




}//namespace DIALOGS
}//namespace PAYS
