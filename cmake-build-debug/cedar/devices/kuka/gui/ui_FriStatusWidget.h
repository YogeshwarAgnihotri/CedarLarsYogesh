/********************************************************************************
** Form generated from reading UI file 'FriStatusWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRISTATUSWIDGET_H
#define UI_FRISTATUSWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FriStatusWidget
{
public:
    QGridLayout *gridLayout;
    QLabel *mpLabelQuality;
    QLabel *mpLabelSampleTime;
    QLabel *mpLabelStateData;
    QLabel *mpLabelQualData;
    QLabel *mpLabelSampleTimeData;
    QLabel *mpLabelState;
    QHBoxLayout *horizontalLayout;
    QLabel *mpLabelPower;
    QLabel *mpLabelPowerData;
    QHBoxLayout *horizontalLayout1;
    QLabel *mpLabelControlScheme;
    QLabel *mpLabelControlSchemeData;

    void setupUi(QWidget *FriStatusWidget)
    {
        if (FriStatusWidget->objectName().isEmpty())
            FriStatusWidget->setObjectName(QString::fromUtf8("FriStatusWidget"));
        FriStatusWidget->resize(331, 154);
        FriStatusWidget->setFocusPolicy(Qt::StrongFocus);
        gridLayout = new QGridLayout(FriStatusWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mpLabelQuality = new QLabel(FriStatusWidget);
        mpLabelQuality->setObjectName(QString::fromUtf8("mpLabelQuality"));

        gridLayout->addWidget(mpLabelQuality, 3, 0, 1, 1);

        mpLabelSampleTime = new QLabel(FriStatusWidget);
        mpLabelSampleTime->setObjectName(QString::fromUtf8("mpLabelSampleTime"));
        mpLabelSampleTime->setEnabled(true);

        gridLayout->addWidget(mpLabelSampleTime, 4, 0, 1, 1);

        mpLabelStateData = new QLabel(FriStatusWidget);
        mpLabelStateData->setObjectName(QString::fromUtf8("mpLabelStateData"));

        gridLayout->addWidget(mpLabelStateData, 1, 1, 1, 1);

        mpLabelQualData = new QLabel(FriStatusWidget);
        mpLabelQualData->setObjectName(QString::fromUtf8("mpLabelQualData"));

        gridLayout->addWidget(mpLabelQualData, 3, 1, 1, 1);

        mpLabelSampleTimeData = new QLabel(FriStatusWidget);
        mpLabelSampleTimeData->setObjectName(QString::fromUtf8("mpLabelSampleTimeData"));

        gridLayout->addWidget(mpLabelSampleTimeData, 4, 1, 1, 1);

        mpLabelState = new QLabel(FriStatusWidget);
        mpLabelState->setObjectName(QString::fromUtf8("mpLabelState"));

        gridLayout->addWidget(mpLabelState, 1, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        mpLabelPower = new QLabel(FriStatusWidget);
        mpLabelPower->setObjectName(QString::fromUtf8("mpLabelPower"));

        horizontalLayout->addWidget(mpLabelPower);


        gridLayout->addLayout(horizontalLayout, 5, 0, 1, 1);

        mpLabelPowerData = new QLabel(FriStatusWidget);
        mpLabelPowerData->setObjectName(QString::fromUtf8("mpLabelPowerData"));

        gridLayout->addWidget(mpLabelPowerData, 5, 1, 1, 1);

        horizontalLayout1 = new QHBoxLayout();
        horizontalLayout1->setObjectName(QString::fromUtf8("horizontalLayout1"));
        mpLabelControlScheme = new QLabel(FriStatusWidget);
        mpLabelControlScheme->setObjectName(QString::fromUtf8("mpLabelControlScheme"));

        horizontalLayout1->addWidget(mpLabelControlScheme);


        gridLayout->addLayout(horizontalLayout1, 6, 0, 1, 1);

        mpLabelControlSchemeData = new QLabel(FriStatusWidget);
        mpLabelControlSchemeData->setObjectName(QString::fromUtf8("mpLabelControlSchemeData"));

        gridLayout->addWidget(mpLabelControlSchemeData, 6, 1, 1, 1);


        retranslateUi(FriStatusWidget);

        QMetaObject::connectSlotsByName(FriStatusWidget);
    } // setupUi

    void retranslateUi(QWidget *FriStatusWidget)
    {
        FriStatusWidget->setWindowTitle(QApplication::translate("FriStatusWidget", "FRI Status information", nullptr));
        mpLabelQuality->setText(QApplication::translate("FriStatusWidget", "FRI_QUALITY", nullptr));
        mpLabelSampleTime->setText(QApplication::translate("FriStatusWidget", "Sample time", nullptr));
        mpLabelStateData->setText(QApplication::translate("FriStatusWidget", "OFF (0)", nullptr));
        mpLabelQualData->setText(QApplication::translate("FriStatusWidget", "BAD (0)", nullptr));
        mpLabelSampleTimeData->setText(QApplication::translate("FriStatusWidget", "0.02s", nullptr));
        mpLabelState->setText(QApplication::translate("FriStatusWidget", "FRI_STATE", nullptr));
        mpLabelPower->setText(QApplication::translate("FriStatusWidget", "Drives", nullptr));
        mpLabelPowerData->setText(QApplication::translate("FriStatusWidget", "off", nullptr));
        mpLabelControlScheme->setText(QApplication::translate("FriStatusWidget", "Control Scheme", nullptr));
        mpLabelControlSchemeData->setText(QApplication::translate("FriStatusWidget", "uninitialized", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FriStatusWidget: public Ui_FriStatusWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRISTATUSWIDGET_H
