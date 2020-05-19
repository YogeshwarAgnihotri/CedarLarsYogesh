/********************************************************************************
** Form generated from reading UI file 'Ide.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IDE_H
#define UI_IDE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <cedar/processing/gui/View.h>
#include "cedar/auxiliaries/gui/Configurable.h"
#include "cedar/auxiliaries/gui/Log.h"
#include "cedar/auxiliaries/gui/SceneControl.h"
#include "cedar/processing/gui/CodeWidget.h"
#include "cedar/processing/gui/CommentWidget.h"
#include "cedar/processing/gui/ElementList.h"
#include "cedar/processing/gui/RecorderWidget.h"

QT_BEGIN_NAMESPACE

class Ui_Ide
{
public:
    QAction *mpActionNew;
    QAction *mpActionSave;
    QAction *mpActionSaveAs;
    QAction *mpActionLoad;
    QAction *mpActionExit;
    QAction *mpActionManagePlugins;
    QAction *mpActionStartPauseSimulation;
    QAction *mpActionLoadPlugin;
    QAction *mpActionShowHideGrid;
    QAction *mpActionAutoSnapAll;
    QAction *mpRecentFiles;
    QAction *mpActionSettings;
    QAction *mpActionAbout;
    QAction *mpActionBrakeAllRobots;
    QAction *mpActionExportSVG;
    QAction *mpActionShowRobotManager;
    QAction *mpActionAddGlobalSceneViewer;
    QAction *mpActionDuplicate;
    QAction *mpActionSelectAll;
    QAction *mpActionToggleTriggerVisibility;
    QAction *mpActionTriggerSmartHide;
    QAction *mpThreadsSingleStep;
    QAction *mpActionToggleSmartConnections;
    QAction *mpActionClosePlots;
    QAction *mpActionRecord;
    QAction *mpActionSnapshot;
    QAction *mpActionToggleVisibilityOfPlots;
    QAction *mpActionNewPlotGroup;
    QAction *mpActionRenamePlotGroup;
    QAction *mpActionDisplayPlotGroup;
    QAction *mpActionDeletePlotGroup;
    QAction *mpActionPerformanceOverview;
    QAction *mpActionExperiments;
    QAction *mpActionCopy;
    QAction *mpActionCopyConfiguration;
    QAction *mpActionPaste;
    QAction *mpActionPasteConfiguration;
    QAction *mpActionParameterLinker;
    QAction *mpActionDataSlotPositioning;
    QAction *mpActionSaveSerializableData;
    QAction *mpActionLoadSerializableData;
    QAction *mpActionFind;
    QAction *actionNone;
    QAction *mpActionResetSimulation;
    QAction *mpActionEditPlotGroup;
    QAction *mpActionToggleTriggerColor;
    QAction *mpActionDummy;
    QAction *mpActionShowRecentNotifications;
    QAction *mpActionLockUIPositions;
    QAction *mpActionOpenRobotManager;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout_2;
    cedar::proc::gui::View *mpProcessingDrawer;
    QWidget *tabVisualisation;
    QGridLayout *gridLayout_3;
    cedar::aux::gui::SceneControl *mpSceneControl;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuSimulation;
    QMenu *menuRobots;
    QMenu *mpMenuWindows;
    QMenu *mpMenuArchitecturePlots;
    QMenu *menuHelp;
    QMenu *menuEdit;
    QMenu *menuView;
    QMenu *mpToolsMenu;
    QMenu *mpMenuArchitectureScripts;
    QStatusBar *mpStatusBar;
    QDockWidget *mpItemsWidget;
    QWidget *dockWidgetContents_2;
    QHBoxLayout *horizontalLayout;
    cedar::proc::gui::ElementList *mpCategoryList;
    QDockWidget *mpLogWidget;
    QWidget *dockWidgetContents_3;
    QHBoxLayout *horizontalLayout_2;
    cedar::aux::gui::Log *mpLog;
    QDockWidget *mpPropertiesWidget;
    QWidget *dockWidgetContents_5;
    QVBoxLayout *verticalLayout_2;
    QTabWidget *tabWidget_2;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_6;
    cedar::aux::gui::Configurable *mpPropertyTable;
    QWidget *tab_2_1;
    QVBoxLayout *verticalLayout_30;
    QScrollArea *scrollArea0;
    cedar::proc::gui::CodeWidget *mpCodeWidget;
    QWidget *tab_2_5;
    QVBoxLayout *verticalLayout_3;
    QScrollArea *scrollArea1;
    cedar::proc::gui::CommentWidget *mpCommentWidget;
    QWidget *tab_3;
    QVBoxLayout *verticalLayout_31;
    QScrollArea *scrollArea2;
    cedar::proc::gui::RecorderWidget *mpRecorderWidget;
    QToolBar *mpToolBar;

    void setupUi(QMainWindow *Ide)
    {
        if (Ide->objectName().isEmpty())
            Ide->setObjectName(QString::fromUtf8("Ide"));
        Ide->resize(983, 762);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/processing_ide_app_icon_48.png"), QSize(), QIcon::Normal, QIcon::Off);
        Ide->setWindowIcon(icon);
        mpActionNew = new QAction(Ide);
        mpActionNew->setObjectName(QString::fromUtf8("mpActionNew"));
        mpActionSave = new QAction(Ide);
        mpActionSave->setObjectName(QString::fromUtf8("mpActionSave"));
        mpActionSave->setEnabled(false);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/toolbaricons/save.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mpActionSave->setIcon(icon1);
        mpActionSaveAs = new QAction(Ide);
        mpActionSaveAs->setObjectName(QString::fromUtf8("mpActionSaveAs"));
        mpActionLoad = new QAction(Ide);
        mpActionLoad->setObjectName(QString::fromUtf8("mpActionLoad"));
        mpActionExit = new QAction(Ide);
        mpActionExit->setObjectName(QString::fromUtf8("mpActionExit"));
        mpActionManagePlugins = new QAction(Ide);
        mpActionManagePlugins->setObjectName(QString::fromUtf8("mpActionManagePlugins"));
        mpActionStartPauseSimulation = new QAction(Ide);
        mpActionStartPauseSimulation->setObjectName(QString::fromUtf8("mpActionStartPauseSimulation"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/cedar/auxiliaries/gui/start.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mpActionStartPauseSimulation->setIcon(icon2);
        mpActionLoadPlugin = new QAction(Ide);
        mpActionLoadPlugin->setObjectName(QString::fromUtf8("mpActionLoadPlugin"));
        mpActionShowHideGrid = new QAction(Ide);
        mpActionShowHideGrid->setObjectName(QString::fromUtf8("mpActionShowHideGrid"));
        mpActionShowHideGrid->setCheckable(true);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/toolbaricons/grid.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mpActionShowHideGrid->setIcon(icon3);
        mpActionAutoSnapAll = new QAction(Ide);
        mpActionAutoSnapAll->setObjectName(QString::fromUtf8("mpActionAutoSnapAll"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/toolbaricons/snap_to_grid.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mpActionAutoSnapAll->setIcon(icon4);
        mpRecentFiles = new QAction(Ide);
        mpRecentFiles->setObjectName(QString::fromUtf8("mpRecentFiles"));
        mpActionSettings = new QAction(Ide);
        mpActionSettings->setObjectName(QString::fromUtf8("mpActionSettings"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/menus/settings.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mpActionSettings->setIcon(icon5);
        mpActionAbout = new QAction(Ide);
        mpActionAbout->setObjectName(QString::fromUtf8("mpActionAbout"));
        mpActionBrakeAllRobots = new QAction(Ide);
        mpActionBrakeAllRobots->setObjectName(QString::fromUtf8("mpActionBrakeAllRobots"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/toolbaricons/brakeall.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mpActionBrakeAllRobots->setIcon(icon6);
        mpActionExportSVG = new QAction(Ide);
        mpActionExportSVG->setObjectName(QString::fromUtf8("mpActionExportSVG"));
        mpActionShowRobotManager = new QAction(Ide);
        mpActionShowRobotManager->setObjectName(QString::fromUtf8("mpActionShowRobotManager"));
        mpActionAddGlobalSceneViewer = new QAction(Ide);
        mpActionAddGlobalSceneViewer->setObjectName(QString::fromUtf8("mpActionAddGlobalSceneViewer"));
        mpActionDuplicate = new QAction(Ide);
        mpActionDuplicate->setObjectName(QString::fromUtf8("mpActionDuplicate"));
        mpActionSelectAll = new QAction(Ide);
        mpActionSelectAll->setObjectName(QString::fromUtf8("mpActionSelectAll"));
        mpActionToggleTriggerVisibility = new QAction(Ide);
        mpActionToggleTriggerVisibility->setObjectName(QString::fromUtf8("mpActionToggleTriggerVisibility"));
        mpActionToggleTriggerVisibility->setCheckable(true);
        mpActionToggleTriggerVisibility->setChecked(false);
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/toolbaricons/hide_triggers.svg"), QSize(), QIcon::Normal, QIcon::Off);
        icon7.addFile(QString::fromUtf8(":/toolbaricons/show_triggers.svg"), QSize(), QIcon::Normal, QIcon::On);
        mpActionToggleTriggerVisibility->setIcon(icon7);
        mpActionTriggerSmartHide = new QAction(Ide);
        mpActionTriggerSmartHide->setObjectName(QString::fromUtf8("mpActionTriggerSmartHide"));
        mpActionTriggerSmartHide->setEnabled(false);
        mpThreadsSingleStep = new QAction(Ide);
        mpThreadsSingleStep->setObjectName(QString::fromUtf8("mpThreadsSingleStep"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/cedar/auxiliaries/gui/singleStep.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mpThreadsSingleStep->setIcon(icon8);
        mpActionToggleSmartConnections = new QAction(Ide);
        mpActionToggleSmartConnections->setObjectName(QString::fromUtf8("mpActionToggleSmartConnections"));
        mpActionToggleSmartConnections->setCheckable(true);
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/toolbaricons/standard_connections.svg"), QSize(), QIcon::Normal, QIcon::Off);
        icon9.addFile(QString::fromUtf8(":/toolbaricons/smart_connections.svg"), QSize(), QIcon::Normal, QIcon::On);
        mpActionToggleSmartConnections->setIcon(icon9);
        mpActionClosePlots = new QAction(Ide);
        mpActionClosePlots->setObjectName(QString::fromUtf8("mpActionClosePlots"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/toolbaricons/close_all_plots.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mpActionClosePlots->setIcon(icon10);
        mpActionRecord = new QAction(Ide);
        mpActionRecord->setObjectName(QString::fromUtf8("mpActionRecord"));
        mpActionRecord->setCheckable(true);
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/cedar/auxiliaries/gui/record.svg"), QSize(), QIcon::Normal, QIcon::Off);
        icon11.addFile(QString::fromUtf8(":/cedar/auxiliaries/gui/recordStop.svg"), QSize(), QIcon::Normal, QIcon::On);
        icon11.addFile(QString::fromUtf8(":/cedar/auxiliaries/gui/record.svg"), QSize(), QIcon::Active, QIcon::Off);
        icon11.addFile(QString::fromUtf8(":/cedar/auxiliaries/gui/recordStop.svg"), QSize(), QIcon::Active, QIcon::On);
        icon11.addFile(QString::fromUtf8(":/cedar/auxiliaries/gui/recordStop.svg"), QSize(), QIcon::Selected, QIcon::On);
        mpActionRecord->setIcon(icon11);
#ifndef QT_NO_TOOLTIP
        mpActionRecord->setToolTip(QString::fromUtf8("Record all registered slots."));
#endif // QT_NO_TOOLTIP
        mpActionSnapshot = new QAction(Ide);
        mpActionSnapshot->setObjectName(QString::fromUtf8("mpActionSnapshot"));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/toolbaricons/snapshot.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mpActionSnapshot->setIcon(icon12);
        mpActionToggleVisibilityOfPlots = new QAction(Ide);
        mpActionToggleVisibilityOfPlots->setObjectName(QString::fromUtf8("mpActionToggleVisibilityOfPlots"));
        mpActionToggleVisibilityOfPlots->setCheckable(true);
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/toolbaricons/toggle_visibility_of_plots.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mpActionToggleVisibilityOfPlots->setIcon(icon13);
        mpActionNewPlotGroup = new QAction(Ide);
        mpActionNewPlotGroup->setObjectName(QString::fromUtf8("mpActionNewPlotGroup"));
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/toolbaricons/new.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mpActionNewPlotGroup->setIcon(icon14);
        mpActionRenamePlotGroup = new QAction(Ide);
        mpActionRenamePlotGroup->setObjectName(QString::fromUtf8("mpActionRenamePlotGroup"));
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/toolbaricons/edit.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mpActionRenamePlotGroup->setIcon(icon15);
        mpActionDisplayPlotGroup = new QAction(Ide);
        mpActionDisplayPlotGroup->setObjectName(QString::fromUtf8("mpActionDisplayPlotGroup"));
        mpActionDisplayPlotGroup->setCheckable(true);
        QIcon icon16;
        icon16.addFile(QString::fromUtf8(":/toolbaricons/display.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mpActionDisplayPlotGroup->setIcon(icon16);
        mpActionDeletePlotGroup = new QAction(Ide);
        mpActionDeletePlotGroup->setObjectName(QString::fromUtf8("mpActionDeletePlotGroup"));
        QIcon icon17;
        icon17.addFile(QString::fromUtf8(":/toolbaricons/trash.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mpActionDeletePlotGroup->setIcon(icon17);
        mpActionPerformanceOverview = new QAction(Ide);
        mpActionPerformanceOverview->setObjectName(QString::fromUtf8("mpActionPerformanceOverview"));
        mpActionExperiments = new QAction(Ide);
        mpActionExperiments->setObjectName(QString::fromUtf8("mpActionExperiments"));
        mpActionCopy = new QAction(Ide);
        mpActionCopy->setObjectName(QString::fromUtf8("mpActionCopy"));
        mpActionCopyConfiguration = new QAction(Ide);
        mpActionCopyConfiguration->setObjectName(QString::fromUtf8("mpActionCopyConfiguration"));
        mpActionPaste = new QAction(Ide);
        mpActionPaste->setObjectName(QString::fromUtf8("mpActionPaste"));
        mpActionPasteConfiguration = new QAction(Ide);
        mpActionPasteConfiguration->setObjectName(QString::fromUtf8("mpActionPasteConfiguration"));
        mpActionParameterLinker = new QAction(Ide);
        mpActionParameterLinker->setObjectName(QString::fromUtf8("mpActionParameterLinker"));
        mpActionDataSlotPositioning = new QAction(Ide);
        mpActionDataSlotPositioning->setObjectName(QString::fromUtf8("mpActionDataSlotPositioning"));
        mpActionDataSlotPositioning->setCheckable(true);
        QIcon icon18;
        icon18.addFile(QString::fromUtf8(":/toolbaricons/data_slot_positioning.svg"), QSize(), QIcon::Normal, QIcon::Off);
        icon18.addFile(QString::fromUtf8(":/toolbaricons/data_slot_positioning.svg"), QSize(), QIcon::Normal, QIcon::On);
        mpActionDataSlotPositioning->setIcon(icon18);
        mpActionSaveSerializableData = new QAction(Ide);
        mpActionSaveSerializableData->setObjectName(QString::fromUtf8("mpActionSaveSerializableData"));
        mpActionLoadSerializableData = new QAction(Ide);
        mpActionLoadSerializableData->setObjectName(QString::fromUtf8("mpActionLoadSerializableData"));
        mpActionFind = new QAction(Ide);
        mpActionFind->setObjectName(QString::fromUtf8("mpActionFind"));
        actionNone = new QAction(Ide);
        actionNone->setObjectName(QString::fromUtf8("actionNone"));
        actionNone->setEnabled(false);
        mpActionResetSimulation = new QAction(Ide);
        mpActionResetSimulation->setObjectName(QString::fromUtf8("mpActionResetSimulation"));
        QIcon icon19;
        icon19.addFile(QString::fromUtf8(":/cedar/auxiliaries/gui/reset.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mpActionResetSimulation->setIcon(icon19);
        mpActionEditPlotGroup = new QAction(Ide);
        mpActionEditPlotGroup->setObjectName(QString::fromUtf8("mpActionEditPlotGroup"));
        QIcon icon20;
        icon20.addFile(QString::fromUtf8(":/toolbaricons/store_plotgroup.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mpActionEditPlotGroup->setIcon(icon20);
        mpActionToggleTriggerColor = new QAction(Ide);
        mpActionToggleTriggerColor->setObjectName(QString::fromUtf8("mpActionToggleTriggerColor"));
        mpActionToggleTriggerColor->setCheckable(true);
        QIcon icon21;
        icon21.addFile(QString::fromUtf8(":/toolbaricons/show_trigger_colors.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mpActionToggleTriggerColor->setIcon(icon21);
        mpActionDummy = new QAction(Ide);
        mpActionDummy->setObjectName(QString::fromUtf8("mpActionDummy"));
        mpActionShowRecentNotifications = new QAction(Ide);
        mpActionShowRecentNotifications->setObjectName(QString::fromUtf8("mpActionShowRecentNotifications"));
        mpActionLockUIPositions = new QAction(Ide);
        mpActionLockUIPositions->setObjectName(QString::fromUtf8("mpActionLockUIPositions"));
        mpActionLockUIPositions->setCheckable(true);
        QIcon icon22;
        icon22.addFile(QString::fromUtf8(":/cedar/auxiliaries/gui/lock_unlocked.svg"), QSize(), QIcon::Normal, QIcon::Off);
        icon22.addFile(QString::fromUtf8(":/cedar/auxiliaries/gui/lock_locked.svg"), QSize(), QIcon::Normal, QIcon::On);
        mpActionLockUIPositions->setIcon(icon22);
        mpActionOpenRobotManager = new QAction(Ide);
        mpActionOpenRobotManager->setObjectName(QString::fromUtf8("mpActionOpenRobotManager"));
        QIcon icon23;
        icon23.addFile(QString::fromUtf8(":/toolbaricons/robot_manager.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mpActionOpenRobotManager->setIcon(icon23);
        centralwidget = new QWidget(Ide);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setDocumentMode(true);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayout_2 = new QGridLayout(tab);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        mpProcessingDrawer = new cedar::proc::gui::View(tab);
        mpProcessingDrawer->setObjectName(QString::fromUtf8("mpProcessingDrawer"));

        gridLayout_2->addWidget(mpProcessingDrawer, 0, 0, 1, 1);

        gridLayout_2->setRowStretch(0, 1);
        tabWidget->addTab(tab, QString());
        tabVisualisation = new QWidget();
        tabVisualisation->setObjectName(QString::fromUtf8("tabVisualisation"));
        gridLayout_3 = new QGridLayout(tabVisualisation);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        mpSceneControl = new cedar::aux::gui::SceneControl(tabVisualisation);
        mpSceneControl->setObjectName(QString::fromUtf8("mpSceneControl"));

        gridLayout_3->addWidget(mpSceneControl, 0, 0, 1, 1);

        tabWidget->addTab(tabVisualisation, QString());

        gridLayout->addWidget(tabWidget, 0, 0, 1, 1);

        Ide->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Ide);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 983, 20));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuSimulation = new QMenu(menubar);
        menuSimulation->setObjectName(QString::fromUtf8("menuSimulation"));
        menuRobots = new QMenu(menubar);
        menuRobots->setObjectName(QString::fromUtf8("menuRobots"));
        mpMenuWindows = new QMenu(menubar);
        mpMenuWindows->setObjectName(QString::fromUtf8("mpMenuWindows"));
        mpMenuArchitecturePlots = new QMenu(mpMenuWindows);
        mpMenuArchitecturePlots->setObjectName(QString::fromUtf8("mpMenuArchitecturePlots"));
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        menuView = new QMenu(menubar);
        menuView->setObjectName(QString::fromUtf8("menuView"));
        mpToolsMenu = new QMenu(menubar);
        mpToolsMenu->setObjectName(QString::fromUtf8("mpToolsMenu"));
        mpMenuArchitectureScripts = new QMenu(menubar);
        mpMenuArchitectureScripts->setObjectName(QString::fromUtf8("mpMenuArchitectureScripts"));
        Ide->setMenuBar(menubar);
        mpStatusBar = new QStatusBar(Ide);
        mpStatusBar->setObjectName(QString::fromUtf8("mpStatusBar"));
        Ide->setStatusBar(mpStatusBar);
        mpItemsWidget = new QDockWidget(Ide);
        mpItemsWidget->setObjectName(QString::fromUtf8("mpItemsWidget"));
        mpItemsWidget->setFeatures(QDockWidget::DockWidgetFeatureMask);
        dockWidgetContents_2 = new QWidget();
        dockWidgetContents_2->setObjectName(QString::fromUtf8("dockWidgetContents_2"));
        horizontalLayout = new QHBoxLayout(dockWidgetContents_2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        mpCategoryList = new cedar::proc::gui::ElementList(dockWidgetContents_2);
        mpCategoryList->setObjectName(QString::fromUtf8("mpCategoryList"));

        horizontalLayout->addWidget(mpCategoryList);

        mpItemsWidget->setWidget(dockWidgetContents_2);
        Ide->addDockWidget(static_cast<Qt::DockWidgetArea>(4), mpItemsWidget);
        mpLogWidget = new QDockWidget(Ide);
        mpLogWidget->setObjectName(QString::fromUtf8("mpLogWidget"));
        mpLogWidget->setFeatures(QDockWidget::DockWidgetFeatureMask);
        dockWidgetContents_3 = new QWidget();
        dockWidgetContents_3->setObjectName(QString::fromUtf8("dockWidgetContents_3"));
        horizontalLayout_2 = new QHBoxLayout(dockWidgetContents_3);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        mpLog = new cedar::aux::gui::Log(dockWidgetContents_3);
        mpLog->setObjectName(QString::fromUtf8("mpLog"));

        horizontalLayout_2->addWidget(mpLog);

        mpLogWidget->setWidget(dockWidgetContents_3);
        Ide->addDockWidget(static_cast<Qt::DockWidgetArea>(8), mpLogWidget);
        mpPropertiesWidget = new QDockWidget(Ide);
        mpPropertiesWidget->setObjectName(QString::fromUtf8("mpPropertiesWidget"));
        mpPropertiesWidget->setFeatures(QDockWidget::AllDockWidgetFeatures);
        dockWidgetContents_5 = new QWidget();
        dockWidgetContents_5->setObjectName(QString::fromUtf8("dockWidgetContents_5"));
        verticalLayout_2 = new QVBoxLayout(dockWidgetContents_5);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        tabWidget_2 = new QTabWidget(dockWidgetContents_5);
        tabWidget_2->setObjectName(QString::fromUtf8("tabWidget_2"));
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        verticalLayout_6 = new QVBoxLayout(tab_2);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        mpPropertyTable = new cedar::aux::gui::Configurable(tab_2);
        mpPropertyTable->setObjectName(QString::fromUtf8("mpPropertyTable"));

        verticalLayout_6->addWidget(mpPropertyTable);

        tabWidget_2->addTab(tab_2, QString());
        tab_2_1 = new QWidget();
        tab_2_1->setObjectName(QString::fromUtf8("tab_2_1"));
        verticalLayout_30 = new QVBoxLayout(tab_2_1);
        verticalLayout_30->setObjectName(QString::fromUtf8("verticalLayout_30"));
        scrollArea0 = new QScrollArea(tab_2_1);
        scrollArea0->setObjectName(QString::fromUtf8("scrollArea0"));
        scrollArea0->setWidgetResizable(true);
        mpCodeWidget = new cedar::proc::gui::CodeWidget();
        mpCodeWidget->setObjectName(QString::fromUtf8("mpCodeWidget"));
        mpCodeWidget->setGeometry(QRect(0, 0, 254, 495));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        QBrush brush1(QColor(249, 249, 249, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush1);
        mpCodeWidget->setPalette(palette);
        mpCodeWidget->setAutoFillBackground(true);
        scrollArea0->setWidget(mpCodeWidget);

        verticalLayout_30->addWidget(scrollArea0);

        tabWidget_2->addTab(tab_2_1, QString());
        tab_2_5 = new QWidget();
        tab_2_5->setObjectName(QString::fromUtf8("tab_2_5"));
        verticalLayout_3 = new QVBoxLayout(tab_2_5);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        scrollArea1 = new QScrollArea(tab_2_5);
        scrollArea1->setObjectName(QString::fromUtf8("scrollArea1"));
        scrollArea1->setWidgetResizable(true);
        mpCommentWidget = new cedar::proc::gui::CommentWidget();
        mpCommentWidget->setObjectName(QString::fromUtf8("mpCommentWidget"));
        mpCommentWidget->setGeometry(QRect(0, 0, 254, 495));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::Base, brush);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush);
        palette1.setBrush(QPalette::Active, QPalette::Shadow, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Shadow, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Shadow, brush1);
        mpCommentWidget->setPalette(palette1);
        mpCommentWidget->setAutoFillBackground(true);
        scrollArea1->setWidget(mpCommentWidget);

        verticalLayout_3->addWidget(scrollArea1);

        tabWidget_2->addTab(tab_2_5, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        verticalLayout_31 = new QVBoxLayout(tab_3);
        verticalLayout_31->setObjectName(QString::fromUtf8("verticalLayout_31"));
        scrollArea2 = new QScrollArea(tab_3);
        scrollArea2->setObjectName(QString::fromUtf8("scrollArea2"));
        scrollArea2->setWidgetResizable(true);
        mpRecorderWidget = new cedar::proc::gui::RecorderWidget();
        mpRecorderWidget->setObjectName(QString::fromUtf8("mpRecorderWidget"));
        mpRecorderWidget->setGeometry(QRect(0, 0, 254, 495));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::Base, brush);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush);
        palette2.setBrush(QPalette::Active, QPalette::Shadow, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Shadow, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Shadow, brush1);
        mpRecorderWidget->setPalette(palette2);
        mpRecorderWidget->setAutoFillBackground(true);
        scrollArea2->setWidget(mpRecorderWidget);

        verticalLayout_31->addWidget(scrollArea2);

        tabWidget_2->addTab(tab_3, QString());

        verticalLayout_2->addWidget(tabWidget_2);

        mpPropertiesWidget->setWidget(dockWidgetContents_5);
        Ide->addDockWidget(static_cast<Qt::DockWidgetArea>(2), mpPropertiesWidget);
        mpToolBar = new QToolBar(Ide);
        mpToolBar->setObjectName(QString::fromUtf8("mpToolBar"));
        Ide->addToolBar(Qt::TopToolBarArea, mpToolBar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuEdit->menuAction());
        menubar->addAction(menuView->menuAction());
        menubar->addAction(menuSimulation->menuAction());
        menubar->addAction(menuRobots->menuAction());
        menubar->addAction(mpToolsMenu->menuAction());
        menubar->addAction(mpMenuArchitectureScripts->menuAction());
        menubar->addAction(mpMenuWindows->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menuFile->addAction(mpActionNew);
        menuFile->addSeparator();
        menuFile->addAction(mpActionSave);
        menuFile->addAction(mpActionSaveAs);
        menuFile->addAction(mpActionLoad);
        menuFile->addAction(mpRecentFiles);
        menuFile->addSeparator();
        menuFile->addAction(mpActionSaveSerializableData);
        menuFile->addAction(mpActionLoadSerializableData);
        menuFile->addSeparator();
        menuFile->addAction(mpActionExportSVG);
        menuFile->addSeparator();
        menuFile->addAction(mpActionExit);
        menuSimulation->addAction(mpActionStartPauseSimulation);
        menuSimulation->addAction(mpActionResetSimulation);
        menuSimulation->addAction(mpThreadsSingleStep);
        menuSimulation->addSeparator();
        menuSimulation->addAction(mpActionRecord);
        menuSimulation->addAction(mpActionSnapshot);
        menuRobots->addAction(mpActionShowRobotManager);
        menuRobots->addSeparator();
        menuRobots->addAction(mpActionBrakeAllRobots);
        mpMenuWindows->addAction(mpActionClosePlots);
        mpMenuWindows->addAction(mpActionToggleVisibilityOfPlots);
        mpMenuWindows->addSeparator();
        mpMenuWindows->addAction(mpActionAddGlobalSceneViewer);
        mpMenuWindows->addSeparator();
        mpMenuWindows->addAction(mpMenuArchitecturePlots->menuAction());
        mpMenuWindows->addSeparator();
        mpMenuWindows->addAction(mpActionLockUIPositions);
        mpMenuWindows->addSeparator();
        menuHelp->addAction(mpActionShowRecentNotifications);
        menuHelp->addSeparator();
        menuHelp->addAction(mpActionAbout);
        menuEdit->addAction(mpActionCopy);
        menuEdit->addAction(mpActionPaste);
        menuEdit->addAction(mpActionCopyConfiguration);
        menuEdit->addAction(mpActionPasteConfiguration);
        menuEdit->addAction(mpActionDuplicate);
        menuEdit->addAction(mpActionSelectAll);
        menuEdit->addSeparator();
        menuEdit->addAction(mpActionFind);
        menuView->addAction(mpActionShowHideGrid);
        menuView->addAction(mpActionAutoSnapAll);
        menuView->addAction(mpActionToggleSmartConnections);
        menuView->addAction(mpActionToggleTriggerColor);
        mpToolsMenu->addAction(mpActionPerformanceOverview);
        mpToolsMenu->addAction(mpActionParameterLinker);
        mpToolsMenu->addAction(mpActionDataSlotPositioning);
        mpToolsMenu->addSeparator();
        mpToolsMenu->addAction(mpActionManagePlugins);
        mpToolsMenu->addSeparator();
        mpToolsMenu->addAction(mpActionSettings);
        mpToolsMenu->addSeparator();
        mpMenuArchitectureScripts->addAction(mpActionExperiments);
        mpToolBar->addAction(mpActionSave);
        mpToolBar->addSeparator();
        mpToolBar->addAction(mpActionStartPauseSimulation);
        mpToolBar->addAction(mpActionResetSimulation);
        mpToolBar->addAction(mpThreadsSingleStep);
        mpToolBar->addSeparator();
        mpToolBar->addAction(mpActionRecord);
        mpToolBar->addAction(mpActionSnapshot);
        mpToolBar->addSeparator();
        mpToolBar->addAction(mpActionToggleTriggerColor);
        mpToolBar->addSeparator();
        mpToolBar->addAction(mpActionDummy);
        mpToolBar->addSeparator();
        mpToolBar->addAction(mpActionToggleVisibilityOfPlots);
        mpToolBar->addSeparator();
        mpToolBar->addAction(mpActionDisplayPlotGroup);
        mpToolBar->addAction(mpActionNewPlotGroup);
        mpToolBar->addAction(mpActionRenamePlotGroup);
        mpToolBar->addAction(mpActionEditPlotGroup);
        mpToolBar->addAction(mpActionDeletePlotGroup);
        mpToolBar->addSeparator();
        mpToolBar->addAction(mpActionOpenRobotManager);
        mpToolBar->addAction(mpActionBrakeAllRobots);

        retranslateUi(Ide);
        QObject::connect(mpActionExit, SIGNAL(triggered()), Ide, SLOT(close()));

        tabWidget->setCurrentIndex(0);
        tabWidget_2->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Ide);
    } // setupUi

    void retranslateUi(QMainWindow *Ide)
    {
        Ide->setWindowTitle(QApplication::translate("Ide", "cedar", nullptr));
        mpActionNew->setText(QApplication::translate("Ide", "New", nullptr));
        mpActionSave->setText(QApplication::translate("Ide", "Save", nullptr));
#ifndef QT_NO_SHORTCUT
        mpActionSave->setShortcut(QApplication::translate("Ide", "Ctrl+S", nullptr));
#endif // QT_NO_SHORTCUT
        mpActionSaveAs->setText(QApplication::translate("Ide", "Save as...", nullptr));
#ifndef QT_NO_SHORTCUT
        mpActionSaveAs->setShortcut(QApplication::translate("Ide", "Ctrl+Shift+S", nullptr));
#endif // QT_NO_SHORTCUT
        mpActionLoad->setText(QApplication::translate("Ide", "Open file...", nullptr));
#ifndef QT_NO_TOOLTIP
        mpActionLoad->setToolTip(QApplication::translate("Ide", "Load an architecture file", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        mpActionLoad->setShortcut(QApplication::translate("Ide", "Ctrl+O", nullptr));
#endif // QT_NO_SHORTCUT
        mpActionExit->setText(QApplication::translate("Ide", "Exit", nullptr));
        mpActionManagePlugins->setText(QApplication::translate("Ide", "Manage plugins...", nullptr));
        mpActionStartPauseSimulation->setText(QApplication::translate("Ide", "Start/Pause simulation", nullptr));
#ifndef QT_NO_TOOLTIP
        mpActionStartPauseSimulation->setToolTip(QApplication::translate("Ide", "Starts and pauses the simulation.", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        mpActionStartPauseSimulation->setShortcut(QApplication::translate("Ide", "Space", nullptr));
#endif // QT_NO_SHORTCUT
        mpActionLoadPlugin->setText(QApplication::translate("Ide", "Load plugin...", nullptr));
        mpActionShowHideGrid->setText(QApplication::translate("Ide", "Toggle grid", nullptr));
#ifndef QT_NO_TOOLTIP
        mpActionShowHideGrid->setToolTip(QApplication::translate("Ide", "Toggles the grid in the architecture pane. Steps will align to this grid.", nullptr));
#endif // QT_NO_TOOLTIP
        mpActionAutoSnapAll->setText(QApplication::translate("Ide", "Snap everything to the grid", nullptr));
#ifndef QT_NO_TOOLTIP
        mpActionAutoSnapAll->setToolTip(QApplication::translate("Ide", "Automatically snaps all steps and drag-nodes to the current grid.", nullptr));
#endif // QT_NO_TOOLTIP
        mpRecentFiles->setText(QApplication::translate("Ide", "Recent files", nullptr));
        mpActionSettings->setText(QApplication::translate("Ide", "Settings...", nullptr));
        mpActionAbout->setText(QApplication::translate("Ide", "About...", nullptr));
        mpActionBrakeAllRobots->setText(QApplication::translate("Ide", "Brake all robots", nullptr));
#ifndef QT_NO_TOOLTIP
        mpActionBrakeAllRobots->setToolTip(QApplication::translate("Ide", "Brake all connected robotic components (slowly)", nullptr));
#endif // QT_NO_TOOLTIP
        mpActionExportSVG->setText(QApplication::translate("Ide", "Save canvas...", nullptr));
        mpActionShowRobotManager->setText(QApplication::translate("Ide", "Robot manager...", nullptr));
#ifndef QT_NO_SHORTCUT
        mpActionShowRobotManager->setShortcut(QApplication::translate("Ide", "Ctrl+M", nullptr));
#endif // QT_NO_SHORTCUT
        mpActionAddGlobalSceneViewer->setText(QApplication::translate("Ide", "Add a camera of the scene visualisation...", nullptr));
        mpActionDuplicate->setText(QApplication::translate("Ide", "Duplicate", nullptr));
#ifndef QT_NO_SHORTCUT
        mpActionDuplicate->setShortcut(QApplication::translate("Ide", "Ctrl+D", nullptr));
#endif // QT_NO_SHORTCUT
        mpActionSelectAll->setText(QApplication::translate("Ide", "Select All", nullptr));
#ifndef QT_NO_SHORTCUT
        mpActionSelectAll->setShortcut(QApplication::translate("Ide", "Ctrl+A", nullptr));
#endif // QT_NO_SHORTCUT
        mpActionToggleTriggerVisibility->setText(QApplication::translate("Ide", "Toggle visibility", nullptr));
#ifndef QT_NO_TOOLTIP
        mpActionToggleTriggerVisibility->setToolTip(QApplication::translate("Ide", "Toggle color of threads.", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        mpActionToggleTriggerVisibility->setShortcut(QApplication::translate("Ide", "Ctrl+T", nullptr));
#endif // QT_NO_SHORTCUT
        mpActionTriggerSmartHide->setText(QApplication::translate("Ide", "Smart hide", nullptr));
        mpThreadsSingleStep->setText(QApplication::translate("Ide", "Single-step each thread", nullptr));
#ifndef QT_NO_TOOLTIP
        mpThreadsSingleStep->setToolTip(QApplication::translate("Ide", "Execute a single step with each thread", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        mpThreadsSingleStep->setShortcut(QApplication::translate("Ide", "Ctrl++", nullptr));
#endif // QT_NO_SHORTCUT
        mpActionToggleSmartConnections->setText(QApplication::translate("Ide", "Toggle smart connections", nullptr));
#ifndef QT_NO_TOOLTIP
        mpActionToggleSmartConnections->setToolTip(QApplication::translate("Ide", "toggle smart connections", nullptr));
#endif // QT_NO_TOOLTIP
        mpActionClosePlots->setText(QApplication::translate("Ide", "Close all plots", nullptr));
#ifndef QT_NO_TOOLTIP
        mpActionClosePlots->setToolTip(QApplication::translate("Ide", "Closes all plots", nullptr));
#endif // QT_NO_TOOLTIP
        mpActionRecord->setText(QApplication::translate("Ide", "Record", nullptr));
        mpActionSnapshot->setText(QApplication::translate("Ide", "Snapshot", nullptr));
#ifndef QT_NO_TOOLTIP
        mpActionSnapshot->setToolTip(QApplication::translate("Ide", "Takes a snapshot from the registered steps", nullptr));
#endif // QT_NO_TOOLTIP
        mpActionToggleVisibilityOfPlots->setText(QApplication::translate("Ide", "Toggle visibility of plots", nullptr));
#ifndef QT_NO_TOOLTIP
        mpActionToggleVisibilityOfPlots->setToolTip(QApplication::translate("Ide", "Hide/show all open plots", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        mpActionToggleVisibilityOfPlots->setShortcut(QApplication::translate("Ide", "Ctrl+H", nullptr));
#endif // QT_NO_SHORTCUT
        mpActionNewPlotGroup->setText(QApplication::translate("Ide", "New Plot Group", nullptr));
#ifndef QT_NO_TOOLTIP
        mpActionNewPlotGroup->setToolTip(QApplication::translate("Ide", "Add a new plot group, containing all open plots", nullptr));
#endif // QT_NO_TOOLTIP
        mpActionRenamePlotGroup->setText(QApplication::translate("Ide", "Rename Current Plot Group", nullptr));
#ifndef QT_NO_TOOLTIP
        mpActionRenamePlotGroup->setToolTip(QApplication::translate("Ide", "Rename selected plot group", nullptr));
#endif // QT_NO_TOOLTIP
        mpActionDisplayPlotGroup->setText(QApplication::translate("Ide", "Display Plot Group", nullptr));
#ifndef QT_NO_TOOLTIP
        mpActionDisplayPlotGroup->setToolTip(QApplication::translate("Ide", "Toggle visibility of selected plot group", nullptr));
#endif // QT_NO_TOOLTIP
        mpActionDeletePlotGroup->setText(QApplication::translate("Ide", "Delete Plot Group", nullptr));
#ifndef QT_NO_TOOLTIP
        mpActionDeletePlotGroup->setToolTip(QApplication::translate("Ide", "delete selected plot group", nullptr));
#endif // QT_NO_TOOLTIP
        mpActionPerformanceOverview->setText(QApplication::translate("Ide", "Performance overview...", nullptr));
        mpActionExperiments->setText(QApplication::translate("Ide", "Experiments...", nullptr));
#ifndef QT_NO_TOOLTIP
        mpActionExperiments->setToolTip(QApplication::translate("Ide", "Framwork for starting experiments", nullptr));
#endif // QT_NO_TOOLTIP
        mpActionCopy->setText(QApplication::translate("Ide", "Copy", nullptr));
#ifndef QT_NO_SHORTCUT
        mpActionCopy->setShortcut(QApplication::translate("Ide", "Ctrl+C", nullptr));
#endif // QT_NO_SHORTCUT
        mpActionCopyConfiguration->setText(QApplication::translate("Ide", "Copy step configuration", nullptr));
#ifndef QT_NO_SHORTCUT
        mpActionCopyConfiguration->setShortcut(QApplication::translate("Ide", "Ctrl+Shift+C", nullptr));
#endif // QT_NO_SHORTCUT
        mpActionPaste->setText(QApplication::translate("Ide", "Paste", nullptr));
#ifndef QT_NO_SHORTCUT
        mpActionPaste->setShortcut(QApplication::translate("Ide", "Ctrl+V", nullptr));
#endif // QT_NO_SHORTCUT
        mpActionPasteConfiguration->setText(QApplication::translate("Ide", "Paste step configuration", nullptr));
#ifndef QT_NO_SHORTCUT
        mpActionPasteConfiguration->setShortcut(QApplication::translate("Ide", "Ctrl+Shift+V", nullptr));
#endif // QT_NO_SHORTCUT
        mpActionParameterLinker->setText(QApplication::translate("Ide", "Parameter linking...", nullptr));
        mpActionDataSlotPositioning->setText(QApplication::translate("Ide", "Enable data slot positioning (experimental)", nullptr));
        mpActionSaveSerializableData->setText(QApplication::translate("Ide", "Save serializable data...", nullptr));
#ifndef QT_NO_TOOLTIP
        mpActionSaveSerializableData->setToolTip(QApplication::translate("Ide", "<html><head/><body><p>Select a location to save all data in slots that are marked as serializable.</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        mpActionLoadSerializableData->setText(QApplication::translate("Ide", "Load serializable data...", nullptr));
#ifndef QT_NO_TOOLTIP
        mpActionLoadSerializableData->setToolTip(QApplication::translate("Ide", "<html><head/><body><p>Select a file from which to load data in slots that are marked as serializable.</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        mpActionFind->setText(QApplication::translate("Ide", "Find", nullptr));
#ifndef QT_NO_TOOLTIP
        mpActionFind->setToolTip(QApplication::translate("Ide", "Find an step", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        mpActionFind->setShortcut(QApplication::translate("Ide", "Ctrl+F", nullptr));
#endif // QT_NO_SHORTCUT
        actionNone->setText(QApplication::translate("Ide", "none", nullptr));
        mpActionResetSimulation->setText(QApplication::translate("Ide", "Reset simulation", nullptr));
#ifndef QT_NO_TOOLTIP
        mpActionResetSimulation->setToolTip(QApplication::translate("Ide", "Resets the simulation, i.e., calls reset on the architecture and rewinds the global timer.", nullptr));
#endif // QT_NO_TOOLTIP
        mpActionEditPlotGroup->setText(QApplication::translate("Ide", "Store Open Plots in Current Plot Group", nullptr));
#ifndef QT_NO_TOOLTIP
        mpActionEditPlotGroup->setToolTip(QApplication::translate("Ide", "Overwrite selected plot group with open plots", nullptr));
#endif // QT_NO_TOOLTIP
        mpActionToggleTriggerColor->setText(QApplication::translate("Ide", "Colorize steps by thread", nullptr));
#ifndef QT_NO_TOOLTIP
        mpActionToggleTriggerColor->setToolTip(QApplication::translate("Ide", "Hide/show thread association via colors", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        mpActionToggleTriggerColor->setShortcut(QApplication::translate("Ide", "Ctrl+Shift+T", nullptr));
#endif // QT_NO_SHORTCUT
        mpActionDummy->setText(QApplication::translate("Ide", "dummy action", nullptr));
#ifndef QT_NO_TOOLTIP
        mpActionDummy->setToolTip(QApplication::translate("Ide", "You should not see this. This is what tells the IDE where to (automatically) put buttons for, e.g., the boost control.", nullptr));
#endif // QT_NO_TOOLTIP
        mpActionShowRecentNotifications->setText(QApplication::translate("Ide", "Recent major changes...", nullptr));
        mpActionLockUIPositions->setText(QApplication::translate("Ide", "Lock UI positions", nullptr));
#ifndef QT_NO_TOOLTIP
        mpActionLockUIPositions->setToolTip(QApplication::translate("Ide", "Locks/unlocks the position of UI elements such as the log, the elements tab and so on.", nullptr));
#endif // QT_NO_TOOLTIP
        mpActionOpenRobotManager->setText(QApplication::translate("Ide", "Open the Robot Manager", nullptr));
#ifndef QT_NO_TOOLTIP
        mpActionOpenRobotManager->setToolTip(QApplication::translate("Ide", "<html><head/><body><p>open Robot Manager</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("Ide", "architecture", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabVisualisation), QApplication::translate("Ide", "visualisation", nullptr));
        menuFile->setTitle(QApplication::translate("Ide", "File", nullptr));
        menuSimulation->setTitle(QApplication::translate("Ide", "Simulation", nullptr));
        menuRobots->setTitle(QApplication::translate("Ide", "Robots", nullptr));
        mpMenuWindows->setTitle(QApplication::translate("Ide", "Windows", nullptr));
        mpMenuArchitecturePlots->setTitle(QApplication::translate("Ide", "Architecture widgets", nullptr));
        menuHelp->setTitle(QApplication::translate("Ide", "Help", nullptr));
        menuEdit->setTitle(QApplication::translate("Ide", "Edit", nullptr));
        menuView->setTitle(QApplication::translate("Ide", "View", nullptr));
        mpToolsMenu->setTitle(QApplication::translate("Ide", "Tools", nullptr));
        mpMenuArchitectureScripts->setTitle(QApplication::translate("Ide", "Scripting", nullptr));
        mpItemsWidget->setWindowTitle(QApplication::translate("Ide", "Steps", nullptr));
        mpLogWidget->setWindowTitle(QApplication::translate("Ide", "Log", nullptr));
        mpPropertiesWidget->setWindowTitle(QApplication::translate("Ide", "Settings", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_2), QApplication::translate("Ide", "Properties", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_2_1), QApplication::translate("Ide", "Code", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_2_5), QApplication::translate("Ide", "Comments", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_3), QApplication::translate("Ide", "Recorder", nullptr));
        mpToolBar->setWindowTitle(QApplication::translate("Ide", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Ide: public Ui_Ide {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IDE_H
