/********************************************************************************
** Form generated from reading UI file 'SceneWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCENEWIDGET_H
#define UI_SCENEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SceneWidget
{
public:
    QGridLayout *mpGridLayout;
    QGroupBox *mpObjectSettingsBox;
    QGridLayout *gridLayout_2;
    QLabel *mpLabelLenght;
    QLabel *label_3;
    QLabel *mpLabelName_2;
    QComboBox *mpComboBoxName;
    QLabel *mpLabelHeight;
    QDoubleSpinBox *mpDoubleSpinBoxWidth;
    QDoubleSpinBox *mpDoubleSpinBoxThickness;
    QDoubleSpinBox *mpDoubleSpinBoxLength;
    QDoubleSpinBox *mpDoubleSpinBoxHeight;
    QLabel *mpLabelWidth;
    QLabel *mpLabelRadius;
    QPushButton *mpDeleteObjectPushButton;
    QDoubleSpinBox *mpDoubleSpinBoxRadius;
    QLabel *label_2;
    QGroupBox *mpLocalCoordinateFrameGroupBox;
    QVBoxLayout *mpRigidBodyWidgetLayout;
    QLabel *label;
    QGroupBox *groupBox2;
    QVBoxLayout *mpRigidBodyVisualizationWidgetLayout;

    void setupUi(QWidget *SceneWidget)
    {
        if (SceneWidget->objectName().isEmpty())
            SceneWidget->setObjectName(QString::fromUtf8("SceneWidget"));
        SceneWidget->resize(544, 639);
        SceneWidget->setFocusPolicy(Qt::StrongFocus);
        mpGridLayout = new QGridLayout(SceneWidget);
        mpGridLayout->setObjectName(QString::fromUtf8("mpGridLayout"));
        mpObjectSettingsBox = new QGroupBox(SceneWidget);
        mpObjectSettingsBox->setObjectName(QString::fromUtf8("mpObjectSettingsBox"));
        mpObjectSettingsBox->setEnabled(true);
        gridLayout_2 = new QGridLayout(mpObjectSettingsBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        mpLabelLenght = new QLabel(mpObjectSettingsBox);
        mpLabelLenght->setObjectName(QString::fromUtf8("mpLabelLenght"));

        gridLayout_2->addWidget(mpLabelLenght, 1, 0, 1, 1);

        label_3 = new QLabel(mpObjectSettingsBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_2->addWidget(label_3, 2, 3, 1, 1);

        mpLabelName_2 = new QLabel(mpObjectSettingsBox);
        mpLabelName_2->setObjectName(QString::fromUtf8("mpLabelName_2"));

        gridLayout_2->addWidget(mpLabelName_2, 0, 0, 1, 1);

        mpComboBoxName = new QComboBox(mpObjectSettingsBox);
        mpComboBoxName->setObjectName(QString::fromUtf8("mpComboBoxName"));

        gridLayout_2->addWidget(mpComboBoxName, 0, 1, 1, 6);

        mpLabelHeight = new QLabel(mpObjectSettingsBox);
        mpLabelHeight->setObjectName(QString::fromUtf8("mpLabelHeight"));

        gridLayout_2->addWidget(mpLabelHeight, 1, 5, 1, 1);

        mpDoubleSpinBoxWidth = new QDoubleSpinBox(mpObjectSettingsBox);
        mpDoubleSpinBoxWidth->setObjectName(QString::fromUtf8("mpDoubleSpinBoxWidth"));
        mpDoubleSpinBoxWidth->setMinimum(0.100000000000000);
        mpDoubleSpinBoxWidth->setMaximum(500.000000000000000);
        mpDoubleSpinBoxWidth->setSingleStep(0.100000000000000);
        mpDoubleSpinBoxWidth->setValue(1.000000000000000);

        gridLayout_2->addWidget(mpDoubleSpinBoxWidth, 1, 4, 1, 1);

        mpDoubleSpinBoxThickness = new QDoubleSpinBox(mpObjectSettingsBox);
        mpDoubleSpinBoxThickness->setObjectName(QString::fromUtf8("mpDoubleSpinBoxThickness"));
        mpDoubleSpinBoxThickness->setMinimum(0.100000000000000);
        mpDoubleSpinBoxThickness->setMaximum(100.000000000000000);
        mpDoubleSpinBoxThickness->setSingleStep(0.100000000000000);

        gridLayout_2->addWidget(mpDoubleSpinBoxThickness, 2, 4, 1, 1);

        mpDoubleSpinBoxLength = new QDoubleSpinBox(mpObjectSettingsBox);
        mpDoubleSpinBoxLength->setObjectName(QString::fromUtf8("mpDoubleSpinBoxLength"));
        mpDoubleSpinBoxLength->setMinimum(0.100000000000000);
        mpDoubleSpinBoxLength->setMaximum(500.000000000000000);
        mpDoubleSpinBoxLength->setSingleStep(0.100000000000000);
        mpDoubleSpinBoxLength->setValue(1.000000000000000);

        gridLayout_2->addWidget(mpDoubleSpinBoxLength, 1, 1, 1, 2);

        mpDoubleSpinBoxHeight = new QDoubleSpinBox(mpObjectSettingsBox);
        mpDoubleSpinBoxHeight->setObjectName(QString::fromUtf8("mpDoubleSpinBoxHeight"));
        mpDoubleSpinBoxHeight->setMinimum(0.100000000000000);
        mpDoubleSpinBoxHeight->setMaximum(500.000000000000000);
        mpDoubleSpinBoxHeight->setSingleStep(0.100000000000000);
        mpDoubleSpinBoxHeight->setValue(1.000000000000000);

        gridLayout_2->addWidget(mpDoubleSpinBoxHeight, 1, 6, 1, 1);

        mpLabelWidth = new QLabel(mpObjectSettingsBox);
        mpLabelWidth->setObjectName(QString::fromUtf8("mpLabelWidth"));

        gridLayout_2->addWidget(mpLabelWidth, 1, 3, 1, 1);

        mpLabelRadius = new QLabel(mpObjectSettingsBox);
        mpLabelRadius->setObjectName(QString::fromUtf8("mpLabelRadius"));

        gridLayout_2->addWidget(mpLabelRadius, 2, 0, 1, 1);

        mpDeleteObjectPushButton = new QPushButton(mpObjectSettingsBox);
        mpDeleteObjectPushButton->setObjectName(QString::fromUtf8("mpDeleteObjectPushButton"));

        gridLayout_2->addWidget(mpDeleteObjectPushButton, 3, 0, 1, 7);

        mpDoubleSpinBoxRadius = new QDoubleSpinBox(mpObjectSettingsBox);
        mpDoubleSpinBoxRadius->setObjectName(QString::fromUtf8("mpDoubleSpinBoxRadius"));
        mpDoubleSpinBoxRadius->setMinimum(0.100000000000000);
        mpDoubleSpinBoxRadius->setMaximum(500.000000000000000);
        mpDoubleSpinBoxRadius->setSingleStep(0.100000000000000);
        mpDoubleSpinBoxRadius->setValue(1.000000000000000);

        gridLayout_2->addWidget(mpDoubleSpinBoxRadius, 2, 1, 1, 2);

        gridLayout_2->setColumnStretch(0, 1);

        mpGridLayout->addWidget(mpObjectSettingsBox, 0, 0, 1, 2);

        label_2 = new QLabel(SceneWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);

        mpGridLayout->addWidget(label_2, 3, 0, 1, 1);

        mpLocalCoordinateFrameGroupBox = new QGroupBox(SceneWidget);
        mpLocalCoordinateFrameGroupBox->setObjectName(QString::fromUtf8("mpLocalCoordinateFrameGroupBox"));
        mpRigidBodyWidgetLayout = new QVBoxLayout(mpLocalCoordinateFrameGroupBox);
        mpRigidBodyWidgetLayout->setObjectName(QString::fromUtf8("mpRigidBodyWidgetLayout"));

        mpGridLayout->addWidget(mpLocalCoordinateFrameGroupBox, 4, 0, 1, 2);

        label = new QLabel(SceneWidget);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setText(QString::fromUtf8("<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans'; font-size:10pt;\">Object visualization</span></p></body></html>"));
        label->setTextFormat(Qt::RichText);

        mpGridLayout->addWidget(label, 1, 0, 1, 2);

        groupBox2 = new QGroupBox(SceneWidget);
        groupBox2->setObjectName(QString::fromUtf8("groupBox2"));
        mpRigidBodyVisualizationWidgetLayout = new QVBoxLayout(groupBox2);
        mpRigidBodyVisualizationWidgetLayout->setObjectName(QString::fromUtf8("mpRigidBodyVisualizationWidgetLayout"));

        mpGridLayout->addWidget(groupBox2, 2, 0, 1, 2);


        retranslateUi(SceneWidget);

        QMetaObject::connectSlotsByName(SceneWidget);
    } // setupUi

    void retranslateUi(QWidget *SceneWidget)
    {
        SceneWidget->setWindowTitle(QApplication::translate("SceneWidget", "Form", nullptr));
        mpObjectSettingsBox->setTitle(QApplication::translate("SceneWidget", "Object Settings", nullptr));
        mpLabelLenght->setText(QApplication::translate("SceneWidget", "length", nullptr));
        label_3->setText(QApplication::translate("SceneWidget", "thickness", nullptr));
        mpLabelName_2->setText(QApplication::translate("SceneWidget", "Name", nullptr));
        mpLabelHeight->setText(QApplication::translate("SceneWidget", "height", nullptr));
        mpLabelWidth->setText(QApplication::translate("SceneWidget", "width", nullptr));
        mpLabelRadius->setText(QApplication::translate("SceneWidget", "radius", nullptr));
        mpDeleteObjectPushButton->setText(QApplication::translate("SceneWidget", "Delete Object", nullptr));
        label_2->setText(QApplication::translate("SceneWidget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans'; font-size:10pt;\">Local Coordinate Frame</span></p></body></html>", nullptr));
        mpLocalCoordinateFrameGroupBox->setTitle(QString());
        groupBox2->setTitle(QString());
    } // retranslateUi

};

namespace Ui {
    class SceneWidget: public Ui_SceneWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCENEWIDGET_H
