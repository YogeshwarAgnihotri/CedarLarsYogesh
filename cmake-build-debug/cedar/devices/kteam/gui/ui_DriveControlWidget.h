/********************************************************************************
** Form generated from reading UI file 'DriveControlWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DRIVECONTROLWIDGET_H
#define UI_DRIVECONTROLWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DriveControlWidget
{
public:
    QFormLayout *formLayout;
    QLabel *label;
    QDoubleSpinBox *spinBoxForwardVelocity;
    QLabel *label_2;
    QDoubleSpinBox *spinBoxTurningRate;
    QLabel *label_4;
    QLCDNumber *valueLeftWheelSpeed;
    QLabel *label_5;
    QLCDNumber *valueRightWheelSpeed;
    QLabel *label_6;
    QLCDNumber *valueLeftEncoder;
    QLabel *label_7;
    QLCDNumber *valueRightEncoder;
    QPushButton *pushButtonStart;
    QPushButton *pushButtonStop;
    QPushButton *pushButtonReset;

    void setupUi(QWidget *DriveControlWidget)
    {
        if (DriveControlWidget->objectName().isEmpty())
            DriveControlWidget->setObjectName(QString::fromUtf8("DriveControlWidget"));
        DriveControlWidget->resize(425, 301);
        formLayout = new QFormLayout(DriveControlWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        label = new QLabel(DriveControlWidget);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        spinBoxForwardVelocity = new QDoubleSpinBox(DriveControlWidget);
        spinBoxForwardVelocity->setObjectName(QString::fromUtf8("spinBoxForwardVelocity"));
        spinBoxForwardVelocity->setDecimals(3);
        spinBoxForwardVelocity->setMinimum(-0.150000000000000);
        spinBoxForwardVelocity->setMaximum(0.150000000000000);
        spinBoxForwardVelocity->setSingleStep(0.001000000000000);

        formLayout->setWidget(0, QFormLayout::FieldRole, spinBoxForwardVelocity);

        label_2 = new QLabel(DriveControlWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        spinBoxTurningRate = new QDoubleSpinBox(DriveControlWidget);
        spinBoxTurningRate->setObjectName(QString::fromUtf8("spinBoxTurningRate"));
        spinBoxTurningRate->setDecimals(3);
        spinBoxTurningRate->setMinimum(-5.000000000000000);
        spinBoxTurningRate->setMaximum(5.000000000000000);
        spinBoxTurningRate->setSingleStep(0.100000000000000);

        formLayout->setWidget(1, QFormLayout::FieldRole, spinBoxTurningRate);

        label_4 = new QLabel(DriveControlWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_4);

        valueLeftWheelSpeed = new QLCDNumber(DriveControlWidget);
        valueLeftWheelSpeed->setObjectName(QString::fromUtf8("valueLeftWheelSpeed"));
        QFont font;
        font.setPointSize(20);
        valueLeftWheelSpeed->setFont(font);
        valueLeftWheelSpeed->setSegmentStyle(QLCDNumber::Flat);

        formLayout->setWidget(2, QFormLayout::FieldRole, valueLeftWheelSpeed);

        label_5 = new QLabel(DriveControlWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_5);

        valueRightWheelSpeed = new QLCDNumber(DriveControlWidget);
        valueRightWheelSpeed->setObjectName(QString::fromUtf8("valueRightWheelSpeed"));
        valueRightWheelSpeed->setSegmentStyle(QLCDNumber::Flat);

        formLayout->setWidget(3, QFormLayout::FieldRole, valueRightWheelSpeed);

        label_6 = new QLabel(DriveControlWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_6);

        valueLeftEncoder = new QLCDNumber(DriveControlWidget);
        valueLeftEncoder->setObjectName(QString::fromUtf8("valueLeftEncoder"));
        valueLeftEncoder->setDigitCount(6);
        valueLeftEncoder->setSegmentStyle(QLCDNumber::Flat);

        formLayout->setWidget(4, QFormLayout::FieldRole, valueLeftEncoder);

        label_7 = new QLabel(DriveControlWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_7);

        valueRightEncoder = new QLCDNumber(DriveControlWidget);
        valueRightEncoder->setObjectName(QString::fromUtf8("valueRightEncoder"));
        valueRightEncoder->setDigitCount(6);
        valueRightEncoder->setSegmentStyle(QLCDNumber::Flat);

        formLayout->setWidget(5, QFormLayout::FieldRole, valueRightEncoder);

        pushButtonStart = new QPushButton(DriveControlWidget);
        pushButtonStart->setObjectName(QString::fromUtf8("pushButtonStart"));

        formLayout->setWidget(8, QFormLayout::FieldRole, pushButtonStart);

        pushButtonStop = new QPushButton(DriveControlWidget);
        pushButtonStop->setObjectName(QString::fromUtf8("pushButtonStop"));

        formLayout->setWidget(9, QFormLayout::FieldRole, pushButtonStop);

        pushButtonReset = new QPushButton(DriveControlWidget);
        pushButtonReset->setObjectName(QString::fromUtf8("pushButtonReset"));

        formLayout->setWidget(10, QFormLayout::FieldRole, pushButtonReset);


        retranslateUi(DriveControlWidget);

        QMetaObject::connectSlotsByName(DriveControlWidget);
    } // setupUi

    void retranslateUi(QWidget *DriveControlWidget)
    {
        DriveControlWidget->setWindowTitle(QApplication::translate("DriveControlWidget", "DriveControlWidget", nullptr));
        label->setText(QApplication::translate("DriveControlWidget", "Forward Velocity", nullptr));
        label_2->setText(QApplication::translate("DriveControlWidget", "Turning Rate", nullptr));
        label_4->setText(QApplication::translate("DriveControlWidget", "Left Wheel Speed", nullptr));
        label_5->setText(QApplication::translate("DriveControlWidget", "Right Wheel Speed", nullptr));
        label_6->setText(QApplication::translate("DriveControlWidget", "Left Encoder", nullptr));
        label_7->setText(QApplication::translate("DriveControlWidget", "Right Encoder", nullptr));
        pushButtonStart->setText(QApplication::translate("DriveControlWidget", "Set Velocity", nullptr));
        pushButtonStop->setText(QApplication::translate("DriveControlWidget", "Stop", nullptr));
        pushButtonReset->setText(QApplication::translate("DriveControlWidget", "Reset", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DriveControlWidget: public Ui_DriveControlWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DRIVECONTROLWIDGET_H
