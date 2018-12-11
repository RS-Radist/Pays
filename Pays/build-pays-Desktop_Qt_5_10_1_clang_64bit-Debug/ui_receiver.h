/********************************************************************************
** Form generated from reading UI file 'receiver.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECEIVER_H
#define UI_RECEIVER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QVBoxLayout>
#include "order_bank_name.h"
#include "order_payer_in_out.h"

QT_BEGIN_NAMESPACE

class Ui_Receiver
{
public:
    QVBoxLayout *verticalLayout;
    PAYS::Order::BankName *m_Bank;
    PAYS::Order::PayerInOut *m_Receiver;

    void setupUi(QFrame *Receiver)
    {
        if (Receiver->objectName().isEmpty())
            Receiver->setObjectName(QStringLiteral("Receiver"));
        Receiver->resize(400, 300);
        verticalLayout = new QVBoxLayout(Receiver);
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        m_Bank = new PAYS::Order::BankName(Receiver);
        m_Bank->setObjectName(QStringLiteral("m_Bank"));
        m_Bank->setStyleSheet(QStringLiteral("background: blue"));
        m_Bank->setFrameShape(QFrame::NoFrame);
        m_Bank->setFrameShadow(QFrame::Plain);

        verticalLayout->addWidget(m_Bank);

        m_Receiver = new PAYS::Order::PayerInOut(Receiver);
        m_Receiver->setObjectName(QStringLiteral("m_Receiver"));
        m_Receiver->setStyleSheet(QStringLiteral("background: green"));
        m_Receiver->setFrameShape(QFrame::Panel);
        m_Receiver->setFrameShadow(QFrame::Raised);

        verticalLayout->addWidget(m_Receiver);


        retranslateUi(Receiver);

        QMetaObject::connectSlotsByName(Receiver);
    } // setupUi

    void retranslateUi(QFrame *Receiver)
    {
        Receiver->setWindowTitle(QApplication::translate("Receiver", "Frame", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Receiver: public Ui_Receiver {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECEIVER_H
