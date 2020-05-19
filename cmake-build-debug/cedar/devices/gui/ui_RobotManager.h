/********************************************************************************
** Form generated from reading UI file 'RobotManager.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ROBOTMANAGER_H
#define UI_ROBOTMANAGER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "cedar/auxiliaries/gui/PropertyPane.h"

QT_BEGIN_NAMESPACE

class Ui_RobotManager
{
public:
    QGridLayout *gridLayout;
    QTabWidget *mpModeTab;
    QWidget *tab;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox_Robots;
    QFormLayout *formLayout_2;
    QListWidget *mpSimpleRobotIconList;
    QGroupBox *groupBox_Setup;
    QVBoxLayout *verticalLayout_6;
    QScrollArea *mpSimpleModeScrollArea;
    QWidget *mpSimpleRobotList;
    QHBoxLayout *mpSimpleRobotListLayout;
    QSpacerItem *horizontalSpacer;
    QWidget *mpAdvancedTab;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout;
    QComboBox *mpRobotSelector;
    QPushButton *mpAddRobotButton;
    QPushButton *mpLoadButton;
    QPushButton *mpRenameButton;
    QPushButton *mpSaveButton;
    QPushButton *mpRemoveButton;
    QTreeWidget *mpRobotTree;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_3;
    cedar::aux::gui::PropertyPane *mpPropertyPane;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *mpCloseButton;

    void setupUi(QWidget *RobotManager)
    {
        if (RobotManager->objectName().isEmpty())
            RobotManager->setObjectName(QString::fromUtf8("RobotManager"));
        RobotManager->resize(900, 1000);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(RobotManager->sizePolicy().hasHeightForWidth());
        RobotManager->setSizePolicy(sizePolicy);
        RobotManager->setMinimumSize(QSize(0, 0));
        gridLayout = new QGridLayout(RobotManager);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mpModeTab = new QTabWidget(RobotManager);
        mpModeTab->setObjectName(QString::fromUtf8("mpModeTab"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mpModeTab->sizePolicy().hasHeightForWidth());
        mpModeTab->setSizePolicy(sizePolicy1);
        mpModeTab->setTabPosition(QTabWidget::South);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        tab->setMinimumSize(QSize(800, 0));
        verticalLayout_2 = new QVBoxLayout(tab);
        verticalLayout_2->setSpacing(12);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        groupBox_Robots = new QGroupBox(tab);
        groupBox_Robots->setObjectName(QString::fromUtf8("groupBox_Robots"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(groupBox_Robots->sizePolicy().hasHeightForWidth());
        groupBox_Robots->setSizePolicy(sizePolicy2);
        groupBox_Robots->setMinimumSize(QSize(0, 200));
        formLayout_2 = new QFormLayout(groupBox_Robots);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setSizeConstraint(QLayout::SetNoConstraint);
        formLayout_2->setContentsMargins(-1, -1, -1, 9);
        mpSimpleRobotIconList = new QListWidget(groupBox_Robots);
        mpSimpleRobotIconList->setObjectName(QString::fromUtf8("mpSimpleRobotIconList"));
        sizePolicy2.setHeightForWidth(mpSimpleRobotIconList->sizePolicy().hasHeightForWidth());
        mpSimpleRobotIconList->setSizePolicy(sizePolicy2);
        mpSimpleRobotIconList->setMinimumSize(QSize(0, 160));
        mpSimpleRobotIconList->setMaximumSize(QSize(16777215, 100));
        mpSimpleRobotIconList->setAcceptDrops(true);
        mpSimpleRobotIconList->setEditTriggers(QAbstractItemView::NoEditTriggers);
        mpSimpleRobotIconList->setDragEnabled(true);
        mpSimpleRobotIconList->setDragDropMode(QAbstractItemView::DragDrop);
        mpSimpleRobotIconList->setIconSize(QSize(128, 128));
        mpSimpleRobotIconList->setTextElideMode(Qt::ElideMiddle);
        mpSimpleRobotIconList->setVerticalScrollMode(QAbstractItemView::ScrollPerPixel);
        mpSimpleRobotIconList->setMovement(QListView::Snap);
        mpSimpleRobotIconList->setFlow(QListView::LeftToRight);
        mpSimpleRobotIconList->setResizeMode(QListView::Adjust);
        mpSimpleRobotIconList->setViewMode(QListView::IconMode);
        mpSimpleRobotIconList->setUniformItemSizes(true);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, mpSimpleRobotIconList);


        verticalLayout_2->addWidget(groupBox_Robots);

        groupBox_Setup = new QGroupBox(tab);
        groupBox_Setup->setObjectName(QString::fromUtf8("groupBox_Setup"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(groupBox_Setup->sizePolicy().hasHeightForWidth());
        groupBox_Setup->setSizePolicy(sizePolicy3);
        groupBox_Setup->setMinimumSize(QSize(0, 450));
        verticalLayout_6 = new QVBoxLayout(groupBox_Setup);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setSizeConstraint(QLayout::SetMinimumSize);
        mpSimpleModeScrollArea = new QScrollArea(groupBox_Setup);
        mpSimpleModeScrollArea->setObjectName(QString::fromUtf8("mpSimpleModeScrollArea"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(mpSimpleModeScrollArea->sizePolicy().hasHeightForWidth());
        mpSimpleModeScrollArea->setSizePolicy(sizePolicy4);
        mpSimpleModeScrollArea->setMinimumSize(QSize(250, 0));
        mpSimpleModeScrollArea->setFrameShape(QFrame::NoFrame);
        mpSimpleModeScrollArea->setFrameShadow(QFrame::Plain);
        mpSimpleModeScrollArea->setLineWidth(0);
        mpSimpleModeScrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        mpSimpleModeScrollArea->setWidgetResizable(true);
        mpSimpleRobotList = new QWidget();
        mpSimpleRobotList->setObjectName(QString::fromUtf8("mpSimpleRobotList"));
        mpSimpleRobotList->setGeometry(QRect(0, 0, 836, 650));
        QSizePolicy sizePolicy5(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(mpSimpleRobotList->sizePolicy().hasHeightForWidth());
        mpSimpleRobotList->setSizePolicy(sizePolicy5);
        mpSimpleRobotList->setMinimumSize(QSize(0, 0));
        mpSimpleRobotListLayout = new QHBoxLayout(mpSimpleRobotList);
        mpSimpleRobotListLayout->setObjectName(QString::fromUtf8("mpSimpleRobotListLayout"));
        mpSimpleRobotListLayout->setSizeConstraint(QLayout::SetMinimumSize);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        mpSimpleRobotListLayout->addItem(horizontalSpacer);

        mpSimpleModeScrollArea->setWidget(mpSimpleRobotList);

        verticalLayout_6->addWidget(mpSimpleModeScrollArea);


        verticalLayout_2->addWidget(groupBox_Setup);

        mpModeTab->addTab(tab, QString());
        mpAdvancedTab = new QWidget();
        mpAdvancedTab->setObjectName(QString::fromUtf8("mpAdvancedTab"));
        gridLayout_2 = new QGridLayout(mpAdvancedTab);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        mpRobotSelector = new QComboBox(mpAdvancedTab);
        mpRobotSelector->setObjectName(QString::fromUtf8("mpRobotSelector"));

        horizontalLayout->addWidget(mpRobotSelector);

        mpAddRobotButton = new QPushButton(mpAdvancedTab);
        mpAddRobotButton->setObjectName(QString::fromUtf8("mpAddRobotButton"));

        horizontalLayout->addWidget(mpAddRobotButton);

        mpLoadButton = new QPushButton(mpAdvancedTab);
        mpLoadButton->setObjectName(QString::fromUtf8("mpLoadButton"));
        mpLoadButton->setEnabled(false);

        horizontalLayout->addWidget(mpLoadButton);

        mpRenameButton = new QPushButton(mpAdvancedTab);
        mpRenameButton->setObjectName(QString::fromUtf8("mpRenameButton"));
        mpRenameButton->setEnabled(false);

        horizontalLayout->addWidget(mpRenameButton);

        mpSaveButton = new QPushButton(mpAdvancedTab);
        mpSaveButton->setObjectName(QString::fromUtf8("mpSaveButton"));
        mpSaveButton->setEnabled(false);

        horizontalLayout->addWidget(mpSaveButton);

        mpRemoveButton = new QPushButton(mpAdvancedTab);
        mpRemoveButton->setObjectName(QString::fromUtf8("mpRemoveButton"));
        mpRemoveButton->setEnabled(false);

        horizontalLayout->addWidget(mpRemoveButton);

        horizontalLayout->setStretch(0, 1);

        gridLayout_2->addLayout(horizontalLayout, 0, 0, 1, 2);

        mpRobotTree = new QTreeWidget(mpAdvancedTab);
        mpRobotTree->setObjectName(QString::fromUtf8("mpRobotTree"));

        gridLayout_2->addWidget(mpRobotTree, 1, 0, 1, 1);

        groupBox = new QGroupBox(mpAdvancedTab);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_3 = new QGridLayout(groupBox);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        mpPropertyPane = new cedar::aux::gui::PropertyPane(groupBox);
        mpPropertyPane->setObjectName(QString::fromUtf8("mpPropertyPane"));

        gridLayout_3->addWidget(mpPropertyPane, 0, 0, 1, 1);


        gridLayout_2->addWidget(groupBox, 1, 1, 1, 1);

        gridLayout_2->setColumnStretch(0, 1);
        gridLayout_2->setColumnStretch(1, 1);
        mpModeTab->addTab(mpAdvancedTab, QString());

        gridLayout->addWidget(mpModeTab, 0, 0, 1, 2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 0, 1, 1);

        mpCloseButton = new QPushButton(RobotManager);
        mpCloseButton->setObjectName(QString::fromUtf8("mpCloseButton"));

        gridLayout->addWidget(mpCloseButton, 1, 1, 1, 1);


        retranslateUi(RobotManager);

        mpModeTab->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(RobotManager);
    } // setupUi

    void retranslateUi(QWidget *RobotManager)
    {
        RobotManager->setWindowTitle(QApplication::translate("RobotManager", "Robot Manager", nullptr));
        groupBox_Robots->setTitle(QApplication::translate("RobotManager", "Robots", nullptr));
        groupBox_Setup->setTitle(QApplication::translate("RobotManager", "Setup Area", nullptr));
        mpModeTab->setTabText(mpModeTab->indexOf(tab), QApplication::translate("RobotManager", "visual", nullptr));
        mpAddRobotButton->setText(QApplication::translate("RobotManager", "add robot", nullptr));
#ifndef QT_NO_TOOLTIP
        mpLoadButton->setToolTip(QApplication::translate("RobotManager", "Loads a specific configuration for the currently selected robot.", nullptr));
#endif // QT_NO_TOOLTIP
        mpLoadButton->setText(QApplication::translate("RobotManager", "load", nullptr));
        mpRenameButton->setText(QApplication::translate("RobotManager", "rename", nullptr));
        mpSaveButton->setText(QApplication::translate("RobotManager", "save ...", nullptr));
        mpRemoveButton->setText(QApplication::translate("RobotManager", "remove", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = mpRobotTree->headerItem();
        ___qtreewidgetitem->setText(1, QApplication::translate("RobotManager", "Info", nullptr));
        ___qtreewidgetitem->setText(0, QApplication::translate("RobotManager", "Part", nullptr));
        groupBox->setTitle(QApplication::translate("RobotManager", "Item Configuration", nullptr));
        mpModeTab->setTabText(mpModeTab->indexOf(mpAdvancedTab), QApplication::translate("RobotManager", "advanced", nullptr));
        mpCloseButton->setText(QApplication::translate("RobotManager", "Done", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RobotManager: public Ui_RobotManager {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ROBOTMANAGER_H
