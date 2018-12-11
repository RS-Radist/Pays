/********************************************************************************
** Form generated from reading UI file 'Account.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACCOUNT_H
#define UI_ACCOUNT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_Account
{
public:
    QHBoxLayout *horizontalLayout;
    QLabel *m_Label;
    QLineEdit *m_Value;

    void setupUi(QFrame *Account)
    {
        if (Account->objectName().isEmpty())
            Account->setObjectName(QStringLiteral("Account"));
        Account->resize(400, 21);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Account->sizePolicy().hasHeightForWidth());
        Account->setSizePolicy(sizePolicy);
        horizontalLayout = new QHBoxLayout(Account);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        m_Label = new QLabel(Account);
        m_Label->setObjectName(QStringLiteral("m_Label"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(m_Label->sizePolicy().hasHeightForWidth());
        m_Label->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(m_Label);

        m_Value = new QLineEdit(Account);
        m_Value->setObjectName(QStringLiteral("m_Value"));

        horizontalLayout->addWidget(m_Value);


        retranslateUi(Account);

        QMetaObject::connectSlotsByName(Account);
    } // setupUi

    void retranslateUi(QFrame *Account)
    {
        Account->setWindowTitle(QApplication::translate("Account", "Frame", nullptr));
        m_Label->setText(QApplication::translate("Account", "Acount", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Account: public Ui_Account {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACCOUNT_H
