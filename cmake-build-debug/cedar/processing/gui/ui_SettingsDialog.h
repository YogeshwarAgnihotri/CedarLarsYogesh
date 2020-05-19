/********************************************************************************
** Form generated from reading UI file 'SettingsDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGSDIALOG_H
#define UI_SETTINGSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include "cedar/auxiliaries/gui/SettingsWidget.h"
#include "cedar/processing/gui/StepManager.h"
#include "cedar/processing/gui/UiSettings.h"

QT_BEGIN_NAMESPACE

class Ui_SettingsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *mpTab;
    cedar::aux::gui::SettingsWidget *mpAuxSettingsTab;
    cedar::proc::gui::UiSettings *mpUiSettingsTab;
    cedar::proc::gui::StepManager *mpStepManageTab;
    QDialogButtonBox *mpDialogButtons;

    void setupUi(QDialog *SettingsDialog)
    {
        if (SettingsDialog->objectName().isEmpty())
            SettingsDialog->setObjectName(QString::fromUtf8("SettingsDialog"));
        SettingsDialog->resize(700, 491);
        SettingsDialog->setSizeGripEnabled(true);
        SettingsDialog->setModal(true);
        verticalLayout = new QVBoxLayout(SettingsDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        mpTab = new QTabWidget(SettingsDialog);
        mpTab->setObjectName(QString::fromUtf8("mpTab"));
        mpAuxSettingsTab = new cedar::aux::gui::SettingsWidget();
        mpAuxSettingsTab->setObjectName(QString::fromUtf8("mpAuxSettingsTab"));
        mpTab->addTab(mpAuxSettingsTab, QString());
        mpUiSettingsTab = new cedar::proc::gui::UiSettings();
        mpUiSettingsTab->setObjectName(QString::fromUtf8("mpUiSettingsTab"));
        mpTab->addTab(mpUiSettingsTab, QString());
        mpStepManageTab = new cedar::proc::gui::StepManager();
        mpStepManageTab->setObjectName(QString::fromUtf8("mpStepManageTab"));
        mpTab->addTab(mpStepManageTab, QString());

        verticalLayout->addWidget(mpTab);

        mpDialogButtons = new QDialogButtonBox(SettingsDialog);
        mpDialogButtons->setObjectName(QString::fromUtf8("mpDialogButtons"));
        mpDialogButtons->setOrientation(Qt::Horizontal);
        mpDialogButtons->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(mpDialogButtons);


        retranslateUi(SettingsDialog);
        QObject::connect(mpDialogButtons, SIGNAL(accepted()), SettingsDialog, SLOT(accept()));
        QObject::connect(mpDialogButtons, SIGNAL(rejected()), SettingsDialog, SLOT(reject()));

        mpTab->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(SettingsDialog);
    } // setupUi

    void retranslateUi(QDialog *SettingsDialog)
    {
        SettingsDialog->setWindowTitle(QApplication::translate("SettingsDialog", "Settings", nullptr));
        mpTab->setTabText(mpTab->indexOf(mpAuxSettingsTab), QApplication::translate("SettingsDialog", "auxiliaries", nullptr));
        mpTab->setTabText(mpTab->indexOf(mpUiSettingsTab), QApplication::translate("SettingsDialog", "user interface", nullptr));
        mpTab->setTabText(mpTab->indexOf(mpStepManageTab), QApplication::translate("SettingsDialog", "manage steps", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SettingsDialog: public Ui_SettingsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGSDIALOG_H
