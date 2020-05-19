/********************************************************************************
** Form generated from reading UI file 'ArchitectureWidgetList.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ARCHITECTUREWIDGETLIST_H
#define UI_ARCHITECTUREWIDGETLIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ArchitectureWidgetList
{
public:
    QVBoxLayout *verticalLayout;
    QTableWidget *mpTable;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *mpAddButton;
    QPushButton *mpRemoveButton;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *mpOkButon;
    QPushButton *mpCancelButton;
    QSpacerItem *horizontalSpacer;

    void setupUi(QDialog *ArchitectureWidgetList)
    {
        if (ArchitectureWidgetList->objectName().isEmpty())
            ArchitectureWidgetList->setObjectName(QString::fromUtf8("ArchitectureWidgetList"));
        ArchitectureWidgetList->resize(562, 423);
        verticalLayout = new QVBoxLayout(ArchitectureWidgetList);
        verticalLayout->setContentsMargins(2, 2, 2, 2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        mpTable = new QTableWidget(ArchitectureWidgetList);
        if (mpTable->columnCount() < 2)
            mpTable->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        mpTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        mpTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        mpTable->setObjectName(QString::fromUtf8("mpTable"));
        mpTable->setAlternatingRowColors(true);
        mpTable->setSelectionBehavior(QAbstractItemView::SelectRows);
        mpTable->horizontalHeader()->setStretchLastSection(true);
        mpTable->verticalHeader()->setVisible(false);

        verticalLayout->addWidget(mpTable);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        mpAddButton = new QPushButton(ArchitectureWidgetList);
        mpAddButton->setObjectName(QString::fromUtf8("mpAddButton"));

        horizontalLayout->addWidget(mpAddButton);

        mpRemoveButton = new QPushButton(ArchitectureWidgetList);
        mpRemoveButton->setObjectName(QString::fromUtf8("mpRemoveButton"));

        horizontalLayout->addWidget(mpRemoveButton);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        mpOkButon = new QPushButton(ArchitectureWidgetList);
        mpOkButon->setObjectName(QString::fromUtf8("mpOkButon"));

        horizontalLayout->addWidget(mpOkButon);

        mpCancelButton = new QPushButton(ArchitectureWidgetList);
        mpCancelButton->setObjectName(QString::fromUtf8("mpCancelButton"));

        horizontalLayout->addWidget(mpCancelButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(ArchitectureWidgetList);
        QObject::connect(mpOkButon, SIGNAL(clicked()), ArchitectureWidgetList, SLOT(accept()));
        QObject::connect(mpCancelButton, SIGNAL(clicked()), ArchitectureWidgetList, SLOT(reject()));

        QMetaObject::connectSlotsByName(ArchitectureWidgetList);
    } // setupUi

    void retranslateUi(QDialog *ArchitectureWidgetList)
    {
        ArchitectureWidgetList->setWindowTitle(QApplication::translate("ArchitectureWidgetList", "Architecture Widget List", nullptr));
        QTableWidgetItem *___qtablewidgetitem = mpTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("ArchitectureWidgetList", "name", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = mpTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("ArchitectureWidgetList", "path", nullptr));
        mpAddButton->setText(QApplication::translate("ArchitectureWidgetList", "add", nullptr));
        mpRemoveButton->setText(QApplication::translate("ArchitectureWidgetList", "remove", nullptr));
        mpOkButon->setText(QApplication::translate("ArchitectureWidgetList", "ok", nullptr));
        mpCancelButton->setText(QApplication::translate("ArchitectureWidgetList", "cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ArchitectureWidgetList: public Ui_ArchitectureWidgetList {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ARCHITECTUREWIDGETLIST_H
