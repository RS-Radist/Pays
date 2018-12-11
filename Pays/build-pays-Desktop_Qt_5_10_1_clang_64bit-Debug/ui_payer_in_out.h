/********************************************************************************
** Form generated from reading UI file 'payer_in_out.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAYER_IN_OUT_H
#define UI_PAYER_IN_OUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_PayerInOut
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *m_LayoutInnKpp;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *m_LayoutInn;
    QLabel *m_labelInn;
    QLineEdit *m_ValueInn;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *m_LayoutKpp;
    QLabel *m_LabelKpp;
    QLineEdit *m_ValueKpp;
    QSpacerItem *horizontalSpacer_3;
    QVBoxLayout *m_LayoutName;
    QTextEdit *m_ValueName;
    QLabel *m_LabelName;

    void setupUi(QFrame *PayerInOut)
    {
        if (PayerInOut->objectName().isEmpty())
            PayerInOut->setObjectName(QStringLiteral("PayerInOut"));
        PayerInOut->resize(610, 300);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(PayerInOut->sizePolicy().hasHeightForWidth());
        PayerInOut->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(PayerInOut);
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        m_LayoutInnKpp = new QHBoxLayout();
        m_LayoutInnKpp->setObjectName(QStringLiteral("m_LayoutInnKpp"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        m_LayoutInnKpp->addItem(horizontalSpacer);

        m_LayoutInn = new QHBoxLayout();
        m_LayoutInn->setSpacing(6);
        m_LayoutInn->setObjectName(QStringLiteral("m_LayoutInn"));
        m_labelInn = new QLabel(PayerInOut);
        m_labelInn->setObjectName(QStringLiteral("m_labelInn"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(m_labelInn->sizePolicy().hasHeightForWidth());
        m_labelInn->setSizePolicy(sizePolicy1);

        m_LayoutInn->addWidget(m_labelInn);

        m_ValueInn = new QLineEdit(PayerInOut);
        m_ValueInn->setObjectName(QStringLiteral("m_ValueInn"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(m_ValueInn->sizePolicy().hasHeightForWidth());
        m_ValueInn->setSizePolicy(sizePolicy2);

        m_LayoutInn->addWidget(m_ValueInn);


        m_LayoutInnKpp->addLayout(m_LayoutInn);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        m_LayoutInnKpp->addItem(horizontalSpacer_2);

        m_LayoutKpp = new QHBoxLayout();
        m_LayoutKpp->setSpacing(6);
        m_LayoutKpp->setObjectName(QStringLiteral("m_LayoutKpp"));
        m_LabelKpp = new QLabel(PayerInOut);
        m_LabelKpp->setObjectName(QStringLiteral("m_LabelKpp"));
        sizePolicy1.setHeightForWidth(m_LabelKpp->sizePolicy().hasHeightForWidth());
        m_LabelKpp->setSizePolicy(sizePolicy1);

        m_LayoutKpp->addWidget(m_LabelKpp);

        m_ValueKpp = new QLineEdit(PayerInOut);
        m_ValueKpp->setObjectName(QStringLiteral("m_ValueKpp"));

        m_LayoutKpp->addWidget(m_ValueKpp);


        m_LayoutInnKpp->addLayout(m_LayoutKpp);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        m_LayoutInnKpp->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(m_LayoutInnKpp);

        m_LayoutName = new QVBoxLayout();
        m_LayoutName->setSpacing(0);
        m_LayoutName->setObjectName(QStringLiteral("m_LayoutName"));
        m_ValueName = new QTextEdit(PayerInOut);
        m_ValueName->setObjectName(QStringLiteral("m_ValueName"));

        m_LayoutName->addWidget(m_ValueName);

        m_LabelName = new QLabel(PayerInOut);
        m_LabelName->setObjectName(QStringLiteral("m_LabelName"));
        QSizePolicy sizePolicy3(QSizePolicy::Maximum, QSizePolicy::Minimum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(m_LabelName->sizePolicy().hasHeightForWidth());
        m_LabelName->setSizePolicy(sizePolicy3);

        m_LayoutName->addWidget(m_LabelName);


        verticalLayout->addLayout(m_LayoutName);


        retranslateUi(PayerInOut);

        QMetaObject::connectSlotsByName(PayerInOut);
    } // setupUi

    void retranslateUi(QFrame *PayerInOut)
    {
        PayerInOut->setWindowTitle(QApplication::translate("PayerInOut", "Frame", nullptr));
        m_labelInn->setText(QApplication::translate("PayerInOut", "INN", nullptr));
        m_ValueInn->setText(QString());
        m_LabelKpp->setText(QApplication::translate("PayerInOut", "KPP", nullptr));
        m_LabelName->setText(QApplication::translate("PayerInOut", "Name", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PayerInOut: public Ui_PayerInOut {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAYER_IN_OUT_H
