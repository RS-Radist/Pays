/********************************************************************************
** Form generated from reading UI file 'bank_name.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BANK_NAME_H
#define UI_BANK_NAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_BankName
{
public:
    QVBoxLayout *verticalLayout;
    QTextEdit *m_Value;
    QLabel *m_Name;

    void setupUi(QFrame *BankName)
    {
        if (BankName->objectName().isEmpty())
            BankName->setObjectName(QStringLiteral("BankName"));
        BankName->setEnabled(true);
        BankName->resize(400, 300);
        verticalLayout = new QVBoxLayout(BankName);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        m_Value = new QTextEdit(BankName);
        m_Value->setObjectName(QStringLiteral("m_Value"));

        verticalLayout->addWidget(m_Value);

        m_Name = new QLabel(BankName);
        m_Name->setObjectName(QStringLiteral("m_Name"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(m_Name->sizePolicy().hasHeightForWidth());
        m_Name->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(m_Name);


        retranslateUi(BankName);

        QMetaObject::connectSlotsByName(BankName);
    } // setupUi

    void retranslateUi(QFrame *BankName)
    {
        BankName->setWindowTitle(QApplication::translate("BankName", "Frame", nullptr));
        m_Name->setText(QApplication::translate("BankName", "name", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BankName: public Ui_BankName {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BANK_NAME_H
