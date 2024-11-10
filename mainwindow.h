#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "floor.h"
#include "elevator.h"
#include "controlsystem.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void displayText(const QString &message);
    void hideAllWidgets();

public slots:
    void displayState();
    void startProgram();

private:
    Ui::MainWindow *ui;
    Floor f1;
    Floor f2;
    Floor f3;
    Floor f4;
    Floor f5;

    Elevator e1;
    Elevator e2;


    ControlSystem ecs;
};
#endif // MAINWINDOW_H
