/********************************************************************************
** Form generated from reading UI file 'SimulationControl.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIMULATIONCONTROL_H
#define UI_SIMULATIONCONTROL_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "cedar/processing/gui/ElementTreeWidget.h"

QT_BEGIN_NAMESPACE

class Ui_SimulationControl
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *mpPlayPauseButton;
    QPushButton *mpAddButton;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *mpDeleteButton;
    cedar::proc::gui::ElementTreeWidget *mpTree;

    void setupUi(QWidget *SimulationControl)
    {
        if (SimulationControl->objectName().isEmpty())
            SimulationControl->setObjectName(QString::fromUtf8("SimulationControl"));
        SimulationControl->resize(713, 593);
        verticalLayout = new QVBoxLayout(SimulationControl);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        mpPlayPauseButton = new QPushButton(SimulationControl);
        mpPlayPauseButton->setObjectName(QString::fromUtf8("mpPlayPauseButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/cedar/auxiliaries/gui/start.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mpPlayPauseButton->setIcon(icon);

        horizontalLayout->addWidget(mpPlayPauseButton);

        mpAddButton = new QPushButton(SimulationControl);
        mpAddButton->setObjectName(QString::fromUtf8("mpAddButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/cedar/auxiliaries/gui/create.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mpAddButton->setIcon(icon1);

        horizontalLayout->addWidget(mpAddButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        horizontalSpacer_2 = new QSpacerItem(10, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        mpDeleteButton = new QPushButton(SimulationControl);
        mpDeleteButton->setObjectName(QString::fromUtf8("mpDeleteButton"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/cedar/auxiliaries/gui/trashcan.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mpDeleteButton->setIcon(icon2);

        horizontalLayout->addWidget(mpDeleteButton);


        verticalLayout->addLayout(horizontalLayout);

        mpTree = new cedar::proc::gui::ElementTreeWidget(SimulationControl);
        mpTree->setObjectName(QString::fromUtf8("mpTree"));
        mpTree->setAlternatingRowColors(true);
        mpTree->header()->setStretchLastSection(false);

        verticalLayout->addWidget(mpTree);


        retranslateUi(SimulationControl);

        QMetaObject::connectSlotsByName(SimulationControl);
    } // setupUi

    void retranslateUi(QWidget *SimulationControl)
    {
        SimulationControl->setWindowTitle(QApplication::translate("SimulationControl", "Thread Control", nullptr));
        mpPlayPauseButton->setText(QString());
        mpAddButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        mpDeleteButton->setToolTip(QApplication::translate("SimulationControl", "Deletes a selected thread. Note that the default thread can never be deleted.", nullptr));
#endif // QT_NO_TOOLTIP
        mpDeleteButton->setText(QString());
        QTreeWidgetItem *___qtreewidgetitem = mpTree->headerItem();
        ___qtreewidgetitem->setText(9, QApplication::translate("SimulationControl", "Minimum Sleep Time", nullptr));
        ___qtreewidgetitem->setText(8, QApplication::translate("SimulationControl", "Fake Euler Step", nullptr));
        ___qtreewidgetitem->setText(7, QApplication::translate("SimulationControl", "Step Size", nullptr));
        ___qtreewidgetitem->setText(6, QApplication::translate("SimulationControl", "Mode", nullptr));
        ___qtreewidgetitem->setText(5, QApplication::translate("SimulationControl", "Start with All", nullptr));
        ___qtreewidgetitem->setText(4, QApplication::translate("SimulationControl", "Quality", nullptr));
        ___qtreewidgetitem->setText(3, QApplication::translate("SimulationControl", "#", nullptr));
        ___qtreewidgetitem->setText(2, QApplication::translate("SimulationControl", "Control", nullptr));
        ___qtreewidgetitem->setText(1, QApplication::translate("SimulationControl", "Name", nullptr));
        ___qtreewidgetitem->setText(0, QApplication::translate("SimulationControl", "Color", nullptr));
#ifndef QT_NO_TOOLTIP
        ___qtreewidgetitem->setToolTip(3, QApplication::translate("SimulationControl", "The number of elements connected to this thread.", nullptr));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class SimulationControl: public Ui_SimulationControl {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIMULATIONCONTROL_H
