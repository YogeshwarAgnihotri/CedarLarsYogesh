/********************************************************************************
** Form generated from reading UI file 'SettingsWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGSWIDGET_H
#define UI_SETTINGSWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "cedar/auxiliaries/gui/DirectoryParameter.h"
#include "cedar/auxiliaries/gui/EnumParameter.h"
#include "cedar/auxiliaries/gui/StringParameter.h"

QT_BEGIN_NAMESPACE

class Ui_SettingsWidget
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox_2;
    QFormLayout *formLayout_2;
    QLabel *label_3;
    cedar::aux::gui::DirectoryParameter *mpRecorderWorkspaceEdit;
    QLabel *label_4;
    cedar::aux::gui::EnumParameter *mpRecordingFormatSelector;
    QGroupBox *groupBox;
    QFormLayout *formLayout;
    QLabel *label;
    QComboBox *mpDefault2dMatDataPlot;
    QGroupBox *groupBox_net;
    QFormLayout *formLayout_net;
    QLabel *label_net;
    cedar::aux::gui::StringParameter *mpYarpConfigString;
    QSpacerItem *verticalSpacer;
    QLabel *label_2;

    void setupUi(QWidget *SettingsWidget)
    {
        if (SettingsWidget->objectName().isEmpty())
            SettingsWidget->setObjectName(QString::fromUtf8("SettingsWidget"));
        SettingsWidget->resize(475, 492);
        verticalLayout = new QVBoxLayout(SettingsWidget);
        verticalLayout->setSpacing(3);
        verticalLayout->setContentsMargins(3, 3, 3, 3);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox_2 = new QGroupBox(SettingsWidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        formLayout_2 = new QFormLayout(groupBox_2);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_3);

        mpRecorderWorkspaceEdit = new cedar::aux::gui::DirectoryParameter(groupBox_2);
        mpRecorderWorkspaceEdit->setObjectName(QString::fromUtf8("mpRecorderWorkspaceEdit"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, mpRecorderWorkspaceEdit);

        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_4);

        mpRecordingFormatSelector = new cedar::aux::gui::EnumParameter(groupBox_2);
        mpRecordingFormatSelector->setObjectName(QString::fromUtf8("mpRecordingFormatSelector"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, mpRecordingFormatSelector);


        verticalLayout->addWidget(groupBox_2);

        groupBox = new QGroupBox(SettingsWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        formLayout = new QFormLayout(groupBox);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        mpDefault2dMatDataPlot = new QComboBox(groupBox);
        mpDefault2dMatDataPlot->setObjectName(QString::fromUtf8("mpDefault2dMatDataPlot"));

        formLayout->setWidget(0, QFormLayout::FieldRole, mpDefault2dMatDataPlot);


        verticalLayout->addWidget(groupBox);

        groupBox_net = new QGroupBox(SettingsWidget);
        groupBox_net->setObjectName(QString::fromUtf8("groupBox_net"));
        formLayout_net = new QFormLayout(groupBox_net);
        formLayout_net->setObjectName(QString::fromUtf8("formLayout_net"));
        label_net = new QLabel(groupBox_net);
        label_net->setObjectName(QString::fromUtf8("label_net"));

        formLayout_net->setWidget(0, QFormLayout::LabelRole, label_net);

        mpYarpConfigString = new cedar::aux::gui::StringParameter(groupBox_net);
        mpYarpConfigString->setObjectName(QString::fromUtf8("mpYarpConfigString"));

        formLayout_net->setWidget(0, QFormLayout::FieldRole, mpYarpConfigString);


        verticalLayout->addWidget(groupBox_net);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        label_2 = new QLabel(SettingsWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        verticalLayout->setStretch(2, 1);

        retranslateUi(SettingsWidget);

        QMetaObject::connectSlotsByName(SettingsWidget);
    } // setupUi

    void retranslateUi(QWidget *SettingsWidget)
    {
        SettingsWidget->setWindowTitle(QApplication::translate("SettingsWidget", "Form", nullptr));
        groupBox_2->setTitle(QApplication::translate("SettingsWidget", "Recorder Settings", nullptr));
        label_3->setText(QApplication::translate("SettingsWidget", "Recorder workspace", nullptr));
        label_4->setText(QApplication::translate("SettingsWidget", "Recording format", nullptr));
        groupBox->setTitle(QApplication::translate("SettingsWidget", "Plot settings", nullptr));
        label->setText(QApplication::translate("SettingsWidget", "Default 2d mat data plot", nullptr));
        groupBox_net->setTitle(QApplication::translate("SettingsWidget", "Yarp Settings", nullptr));
        label_net->setText(QApplication::translate("SettingsWidget", "Yarp Server IP Port", nullptr));
        label_2->setText(QApplication::translate("SettingsWidget", "* changes only take effect after a restart of the application", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SettingsWidget: public Ui_SettingsWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGSWIDGET_H
