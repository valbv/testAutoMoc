/********************************************************************************
** Form generated from reading UI file 'testqt.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTQT_H
#define UI_TESTQT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_testQtClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *testQtClass)
    {
        if (testQtClass->objectName().isEmpty())
            testQtClass->setObjectName(QStringLiteral("testQtClass"));
        testQtClass->resize(600, 400);
        menuBar = new QMenuBar(testQtClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        testQtClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(testQtClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        testQtClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(testQtClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        testQtClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(testQtClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        testQtClass->setStatusBar(statusBar);

        retranslateUi(testQtClass);

        QMetaObject::connectSlotsByName(testQtClass);
    } // setupUi

    void retranslateUi(QMainWindow *testQtClass)
    {
        testQtClass->setWindowTitle(QApplication::translate("testQtClass", "testQt", 0));
    } // retranslateUi

};

namespace Ui {
    class testQtClass: public Ui_testQtClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTQT_H
