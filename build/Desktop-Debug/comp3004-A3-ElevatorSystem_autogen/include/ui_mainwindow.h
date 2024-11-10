/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTextEdit *state;
    QPushButton *B1;
    QPushButton *B2;
    QPushButton *B3;
    QPushButton *B4;
    QPushButton *B5;
    QPushButton *HELP;
    QPushButton *f1Up;
    QPushButton *f1Down;
    QPushButton *f2Up;
    QPushButton *f2Down;
    QPushButton *f3Up;
    QPushButton *f3Down;
    QPushButton *f4Up;
    QPushButton *f4Down;
    QPushButton *f5Up;
    QPushButton *f5Down;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QTextEdit *display;
    QPushButton *startButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(660, 338);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        state = new QTextEdit(centralwidget);
        state->setObjectName(QString::fromUtf8("state"));
        state->setGeometry(QRect(190, 10, 291, 71));
        state->setReadOnly(true);
        B1 = new QPushButton(centralwidget);
        B1->setObjectName(QString::fromUtf8("B1"));
        B1->setGeometry(QRect(510, 120, 31, 31));
        B2 = new QPushButton(centralwidget);
        B2->setObjectName(QString::fromUtf8("B2"));
        B2->setGeometry(QRect(550, 120, 31, 31));
        B3 = new QPushButton(centralwidget);
        B3->setObjectName(QString::fromUtf8("B3"));
        B3->setGeometry(QRect(590, 120, 31, 31));
        B4 = new QPushButton(centralwidget);
        B4->setObjectName(QString::fromUtf8("B4"));
        B4->setGeometry(QRect(510, 170, 31, 31));
        B5 = new QPushButton(centralwidget);
        B5->setObjectName(QString::fromUtf8("B5"));
        B5->setGeometry(QRect(550, 170, 31, 31));
        HELP = new QPushButton(centralwidget);
        HELP->setObjectName(QString::fromUtf8("HELP"));
        HELP->setGeometry(QRect(590, 170, 41, 31));
        f1Up = new QPushButton(centralwidget);
        f1Up->setObjectName(QString::fromUtf8("f1Up"));
        f1Up->setGeometry(QRect(30, 30, 83, 24));
        f1Down = new QPushButton(centralwidget);
        f1Down->setObjectName(QString::fromUtf8("f1Down"));
        f1Down->setGeometry(QRect(30, 50, 83, 24));
        f2Up = new QPushButton(centralwidget);
        f2Up->setObjectName(QString::fromUtf8("f2Up"));
        f2Up->setGeometry(QRect(30, 130, 83, 24));
        f2Down = new QPushButton(centralwidget);
        f2Down->setObjectName(QString::fromUtf8("f2Down"));
        f2Down->setGeometry(QRect(30, 150, 83, 24));
        f3Up = new QPushButton(centralwidget);
        f3Up->setObjectName(QString::fromUtf8("f3Up"));
        f3Up->setGeometry(QRect(30, 220, 83, 24));
        f3Down = new QPushButton(centralwidget);
        f3Down->setObjectName(QString::fromUtf8("f3Down"));
        f3Down->setGeometry(QRect(30, 240, 83, 24));
        f4Up = new QPushButton(centralwidget);
        f4Up->setObjectName(QString::fromUtf8("f4Up"));
        f4Up->setGeometry(QRect(140, 130, 83, 24));
        f4Down = new QPushButton(centralwidget);
        f4Down->setObjectName(QString::fromUtf8("f4Down"));
        f4Down->setGeometry(QRect(140, 150, 83, 24));
        f5Up = new QPushButton(centralwidget);
        f5Up->setObjectName(QString::fromUtf8("f5Up"));
        f5Up->setGeometry(QRect(140, 220, 83, 24));
        f5Down = new QPushButton(centralwidget);
        f5Down->setObjectName(QString::fromUtf8("f5Down"));
        f5Down->setGeometry(QRect(140, 240, 83, 24));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 10, 62, 16));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(40, 110, 62, 16));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(40, 200, 62, 16));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(150, 110, 62, 16));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(150, 200, 62, 16));
        display = new QTextEdit(centralwidget);
        display->setObjectName(QString::fromUtf8("display"));
        display->setGeometry(QRect(250, 110, 231, 161));
        display->setReadOnly(true);
        startButton = new QPushButton(centralwidget);
        startButton->setObjectName(QString::fromUtf8("startButton"));
        startButton->setGeometry(QRect(230, 100, 161, 81));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 660, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        B1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        B2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        B3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        B4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        B5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        HELP->setText(QCoreApplication::translate("MainWindow", "Help", nullptr));
        f1Up->setText(QCoreApplication::translate("MainWindow", "Up", nullptr));
        f1Down->setText(QCoreApplication::translate("MainWindow", "Down", nullptr));
        f2Up->setText(QCoreApplication::translate("MainWindow", "Up", nullptr));
        f2Down->setText(QCoreApplication::translate("MainWindow", "Down", nullptr));
        f3Up->setText(QCoreApplication::translate("MainWindow", "Up", nullptr));
        f3Down->setText(QCoreApplication::translate("MainWindow", "Down", nullptr));
        f4Up->setText(QCoreApplication::translate("MainWindow", "Up", nullptr));
        f4Down->setText(QCoreApplication::translate("MainWindow", "Down", nullptr));
        f5Up->setText(QCoreApplication::translate("MainWindow", "Up", nullptr));
        f5Down->setText(QCoreApplication::translate("MainWindow", "Down", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "FLOOR 1", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "FLOOR 2", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "FLOOR 3", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "FLOOR 4", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "FLOOR 5", nullptr));
        startButton->setText(QCoreApplication::translate("MainWindow", "START", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
