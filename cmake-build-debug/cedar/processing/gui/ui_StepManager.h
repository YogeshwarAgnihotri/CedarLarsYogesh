/********************************************************************************
** Form generated from reading UI file 'StepManager.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STEPMANAGER_H
#define UI_STEPMANAGER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StepManager
{
public:
    QVBoxLayout *vBoxLayout;
    QComboBox *mpComboBox;
    QTableWidget *mpTable;

    void setupUi(QWidget *StepManager)
    {
        if (StepManager->objectName().isEmpty())
            StepManager->setObjectName(QString::fromUtf8("StepManager"));
        StepManager->resize(800, 571);
        vBoxLayout = new QVBoxLayout(StepManager);
        vBoxLayout->setObjectName(QString::fromUtf8("vBoxLayout"));
        mpComboBox = new QComboBox(StepManager);
        mpComboBox->setObjectName(QString::fromUtf8("mpComboBox"));

        vBoxLayout->addWidget(mpComboBox);

        mpTable = new QTableWidget(StepManager);
        if (mpTable->columnCount() < 3)
            mpTable->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        mpTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        mpTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        mpTable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        mpTable->setObjectName(QString::fromUtf8("mpTable"));
        mpTable->setSelectionBehavior(QAbstractItemView::SelectRows);
        mpTable->verticalHeader()->setVisible(false);

        vBoxLayout->addWidget(mpTable);


        retranslateUi(StepManager);

        QMetaObject::connectSlotsByName(StepManager);
    } // setupUi

    void retranslateUi(QWidget *StepManager)
    {
        StepManager->setWindowTitle(QApplication::translate("StepManager", "Step Manager", nullptr));
        QTableWidgetItem *___qtablewidgetitem = mpTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("StepManager", "Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = mpTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("StepManager", "Description", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = mpTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("StepManager", "Visible", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StepManager: public Ui_StepManager {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STEPMANAGER_H
