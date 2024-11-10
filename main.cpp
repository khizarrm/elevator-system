#include "mainwindow.h"
#include "floor.h"
#include "elevator.h"
#include "controlsystem.h"

#include <QApplication>
#include <QObject>
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
