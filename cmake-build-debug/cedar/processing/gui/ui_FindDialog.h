/********************************************************************************
** Form generated from reading UI file 'FindDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FINDDIALOG_H
#define UI_FINDDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_FindDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLineEdit *mpElementClass;
    QLabel *label;
    QLineEdit *mpElementName;
    QPushButton *mpFindNext;
    QHBoxLayout *mpStatusLayout;

    void setupUi(QDialog *FindDialog)
    {
        if (FindDialog->objectName().isEmpty())
            FindDialog->setObjectName(QString::fromUtf8("FindDialog"));
        FindDialog->resize(490, 84);
        gridLayout = new QGridLayout(FindDialog);
        gridLayout->setContentsMargins(2, 2, 2, 2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_2 = new QLabel(FindDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        mpElementClass = new QLineEdit(FindDialog);
        mpElementClass->setObjectName(QString::fromUtf8("mpElementClass"));

        gridLayout->addWidget(mpElementClass, 1, 1, 1, 1);

        label = new QLabel(FindDialog);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        mpElementName = new QLineEdit(FindDialog);
        mpElementName->setObjectName(QString::fromUtf8("mpElementName"));

        gridLayout->addWidget(mpElementName, 0, 1, 1, 1);

        mpFindNext = new QPushButton(FindDialog);
        mpFindNext->setObjectName(QString::fromUtf8("mpFindNext"));

        gridLayout->addWidget(mpFindNext, 0, 2, 1, 1);

        mpStatusLayout = new QHBoxLayout();
        mpStatusLayout->setObjectName(QString::fromUtf8("mpStatusLayout"));

        gridLayout->addLayout(mpStatusLayout, 2, 0, 1, 3);


        retranslateUi(FindDialog);

        QMetaObject::connectSlotsByName(FindDialog);
    } // setupUi

    void retranslateUi(QDialog *FindDialog)
    {
        FindDialog->setWindowTitle(QApplication::translate("FindDialog", "Find element", nullptr));
        label_2->setText(QApplication::translate("FindDialog", "Element class", nullptr));
        label->setText(QApplication::translate("FindDialog", "Element name", nullptr));
        mpFindNext->setText(QApplication::translate("FindDialog", "Find next", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FindDialog: public Ui_FindDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FINDDIALOG_H
