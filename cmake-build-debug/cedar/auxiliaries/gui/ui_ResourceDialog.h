/********************************************************************************
** Form generated from reading UI file 'ResourceDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESOURCEDIALOG_H
#define UI_RESOURCEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ResourceDialog
{
public:
    QVBoxLayout *verticalLayout;
    QTreeWidget *mpResourceList;
    QLineEdit *mpSelectedText;
    QDialogButtonBox *mpButtons;

    void setupUi(QDialog *ResourceDialog)
    {
        if (ResourceDialog->objectName().isEmpty())
            ResourceDialog->setObjectName(QString::fromUtf8("ResourceDialog"));
        ResourceDialog->resize(400, 300);
        verticalLayout = new QVBoxLayout(ResourceDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        mpResourceList = new QTreeWidget(ResourceDialog);
        mpResourceList->setObjectName(QString::fromUtf8("mpResourceList"));
        mpResourceList->setHeaderHidden(true);

        verticalLayout->addWidget(mpResourceList);

        mpSelectedText = new QLineEdit(ResourceDialog);
        mpSelectedText->setObjectName(QString::fromUtf8("mpSelectedText"));
        mpSelectedText->setReadOnly(false);

        verticalLayout->addWidget(mpSelectedText);

        mpButtons = new QDialogButtonBox(ResourceDialog);
        mpButtons->setObjectName(QString::fromUtf8("mpButtons"));
        mpButtons->setOrientation(Qt::Horizontal);
        mpButtons->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Open);
        mpButtons->setCenterButtons(false);

        verticalLayout->addWidget(mpButtons);


        retranslateUi(ResourceDialog);
        QObject::connect(mpButtons, SIGNAL(accepted()), ResourceDialog, SLOT(accept()));
        QObject::connect(mpButtons, SIGNAL(rejected()), ResourceDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(ResourceDialog);
    } // setupUi

    void retranslateUi(QDialog *ResourceDialog)
    {
        ResourceDialog->setWindowTitle(QApplication::translate("ResourceDialog", "Dialog", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = mpResourceList->headerItem();
        ___qtreewidgetitem->setText(0, QApplication::translate("ResourceDialog", "Resources", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ResourceDialog: public Ui_ResourceDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESOURCEDIALOG_H
