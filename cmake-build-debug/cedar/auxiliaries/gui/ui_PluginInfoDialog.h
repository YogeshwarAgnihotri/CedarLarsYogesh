/********************************************************************************
** Form generated from reading UI file 'PluginInfoDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLUGININFODIALOG_H
#define UI_PLUGININFODIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>

QT_BEGIN_NAMESPACE

class Ui_PluginInfoDialog
{
public:
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *mpPluginPath;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *mpReadInfoBtn;
    QSpacerItem *horizontalSpacer;
    QPushButton *mpCloseBtn;
    QLabel *label_2;
    QCheckBox *mpLoadOnStartup;
    QTabWidget *mpDeclarationsTab;

    void setupUi(QDialog *PluginInfoDialog)
    {
        if (PluginInfoDialog->objectName().isEmpty())
            PluginInfoDialog->setObjectName(QString::fromUtf8("PluginInfoDialog"));
        PluginInfoDialog->resize(454, 443);
        formLayout = new QFormLayout(PluginInfoDialog);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        label = new QLabel(PluginInfoDialog);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        mpPluginPath = new QLineEdit(PluginInfoDialog);
        mpPluginPath->setObjectName(QString::fromUtf8("mpPluginPath"));
        mpPluginPath->setReadOnly(true);

        formLayout->setWidget(0, QFormLayout::FieldRole, mpPluginPath);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        mpReadInfoBtn = new QPushButton(PluginInfoDialog);
        mpReadInfoBtn->setObjectName(QString::fromUtf8("mpReadInfoBtn"));

        horizontalLayout->addWidget(mpReadInfoBtn);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        mpCloseBtn = new QPushButton(PluginInfoDialog);
        mpCloseBtn->setObjectName(QString::fromUtf8("mpCloseBtn"));

        horizontalLayout->addWidget(mpCloseBtn);


        formLayout->setLayout(4, QFormLayout::SpanningRole, horizontalLayout);

        label_2 = new QLabel(PluginInfoDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        mpLoadOnStartup = new QCheckBox(PluginInfoDialog);
        mpLoadOnStartup->setObjectName(QString::fromUtf8("mpLoadOnStartup"));

        formLayout->setWidget(1, QFormLayout::FieldRole, mpLoadOnStartup);

        mpDeclarationsTab = new QTabWidget(PluginInfoDialog);
        mpDeclarationsTab->setObjectName(QString::fromUtf8("mpDeclarationsTab"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(1);
        sizePolicy.setHeightForWidth(mpDeclarationsTab->sizePolicy().hasHeightForWidth());
        mpDeclarationsTab->setSizePolicy(sizePolicy);

        formLayout->setWidget(3, QFormLayout::SpanningRole, mpDeclarationsTab);


        retranslateUi(PluginInfoDialog);
        QObject::connect(mpCloseBtn, SIGNAL(clicked()), PluginInfoDialog, SLOT(close()));

        mpDeclarationsTab->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(PluginInfoDialog);
    } // setupUi

    void retranslateUi(QDialog *PluginInfoDialog)
    {
        PluginInfoDialog->setWindowTitle(QApplication::translate("PluginInfoDialog", "Dialog", nullptr));
        label->setText(QApplication::translate("PluginInfoDialog", "Path:", nullptr));
        mpReadInfoBtn->setText(QApplication::translate("PluginInfoDialog", "read info", nullptr));
        mpCloseBtn->setText(QApplication::translate("PluginInfoDialog", "close", nullptr));
        label_2->setText(QApplication::translate("PluginInfoDialog", "Options", nullptr));
        mpLoadOnStartup->setText(QApplication::translate("PluginInfoDialog", "Load on startup", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PluginInfoDialog: public Ui_PluginInfoDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLUGININFODIALOG_H
