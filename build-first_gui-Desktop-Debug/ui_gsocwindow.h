/********************************************************************************
** Form generated from reading UI file 'gsocwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GSOCWINDOW_H
#define UI_GSOCWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GSOCwindow
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;
    QLabel *label;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *GSOCwindow)
    {
        if (GSOCwindow->objectName().isEmpty())
            GSOCwindow->setObjectName(QStringLiteral("GSOCwindow"));
        GSOCwindow->resize(400, 300);
        centralWidget = new QWidget(GSOCwindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(150, 170, 94, 27));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(170, 80, 72, 19));
        GSOCwindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(GSOCwindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 24));
        GSOCwindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(GSOCwindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        GSOCwindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(GSOCwindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        GSOCwindow->setStatusBar(statusBar);

        retranslateUi(GSOCwindow);

        QMetaObject::connectSlotsByName(GSOCwindow);
    } // setupUi

    void retranslateUi(QMainWindow *GSOCwindow)
    {
        GSOCwindow->setWindowTitle(QApplication::translate("GSOCwindow", "GSOCwindow", Q_NULLPTR));
        pushButton->setText(QApplication::translate("GSOCwindow", "Login", Q_NULLPTR));
        label->setText(QApplication::translate("GSOCwindow", "STATUS:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class GSOCwindow: public Ui_GSOCwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GSOCWINDOW_H
