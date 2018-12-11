/********************************************************************************
** Form generated from reading UI file 'Summa.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUMMA_H
#define UI_SUMMA_H

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

class Ui_Summa
{
public:
    QHBoxLayout *horizontalLayout;
    QLabel *summa;
    QLineEdit *m_Value;

    void setupUi(QFrame *Summa)
    {
        if (Summa->objectName().isEmpty())
            Summa->setObjectName(QStringLiteral("Summa"));
        Summa->resize(400, 21);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Summa->sizePolicy().hasHeightForWidth());
        Summa->setSizePolicy(sizePolicy);
        horizontalLayout = new QHBoxLayout(Summa);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        summa = new QLabel(Summa);
        summa->setObjectName(QStringLiteral("summa"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(summa->sizePolicy().hasHeightForWidth());
        summa->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(summa);

        m_Value = new QLineEdit(Summa);
        m_Value->setObjectName(QStringLiteral("m_Value"));

        horizontalLayout->addWidget(m_Value);


        retranslateUi(Summa);

        QMetaObject::connectSlotsByName(Summa);
    } // setupUi

    void retranslateUi(QFrame *Summa)
    {
        Summa->setWindowTitle(QApplication::translate("Summa", "Frame", nullptr));
        summa->setText(QApplication::translate("Summa", "Amount", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Summa: public Ui_Summa {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUMMA_H
