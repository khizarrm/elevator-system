#include "mainwindow.h"
#include "elevator.h"
#include "floor.h"
#include "controlsystem.h"
#include "./ui_mainwindow.h"
#include "floor.h"
#include <QThread>
#include <QApplication>
#include <QLayout>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow), f1(1), f2(2), f3(3), f4(4), f5(5),
    e1(1, 1), e2(2, 3)
{
    ui->setupUi(this);
    //connecting floors and ecs
    QObject::connect(&f1, &Floor::sendSignal, &ecs, &ControlSystem::receiveFloorSignal);
    QObject::connect(&f2, &Floor::sendSignal, &ecs, &ControlSystem::receiveFloorSignal);
    QObject::connect(&f3, &Floor::sendSignal, &ecs, &ControlSystem::receiveFloorSignal);
    QObject::connect(&f4, &Floor::sendSignal, &ecs, &ControlSystem::receiveFloorSignal);
    QObject::connect(&f5, &Floor::sendSignal, &ecs, &ControlSystem::receiveFloorSignal);

    // Floor 1
    // Floor 1
    QObject::connect(ui->f1Down, &QPushButton::clicked, [this]() { f1.pressButton("down"); });
    QObject::connect(ui->f1Up, &QPushButton::clicked, [this]() { f1.pressButton("up"); });

    // Floor 2
    QObject::connect(ui->f2Down, &QPushButton::clicked, [this]() { f2.pressButton("down"); });
    QObject::connect(ui->f2Up, &QPushButton::clicked, [this]() { f2.pressButton("up"); });

    // Floor 3
    QObject::connect(ui->f3Down, &QPushButton::clicked, [this]() { f3.pressButton("down"); });
    QObject::connect(ui->f3Up, &QPushButton::clicked, [this]() { f3.pressButton("up"); });

    // Floor 4
    QObject::connect(ui->f4Down, &QPushButton::clicked, [this]() { f4.pressButton("down"); });
    QObject::connect(ui->f4Up, &QPushButton::clicked, [this]() { f4.pressButton("up"); });

    // Floor 5
    QObject::connect(ui->f5Down, &QPushButton::clicked, [this]() { f5.pressButton("down"); });
    QObject::connect(ui->f5Up, &QPushButton::clicked, [this]() { f5.pressButton("up"); });


    //displays for floors
    QObject::connect(&f1, &Floor::display, this, &MainWindow::displayText);
    QObject::connect(&f2, &Floor::display, this, &MainWindow::displayText);
    QObject::connect(&f3, &Floor::display, this, &MainWindow::displayText);
    QObject::connect(&f4, &Floor::display, this, &MainWindow::displayText);
    QObject::connect(&f5, &Floor::display, this, &MainWindow::displayText);
    QObject::connect(&f1, &Floor::display, this, &MainWindow::displayText);

    //displays for elevators
    QObject::connect(&e1, &Elevator::display, this, &MainWindow::displayText);
    QObject::connect(&e2, &Elevator::display, this, &MainWindow::displayText);


    //display for ecs
    QObject::connect(&ecs, &ControlSystem::display, this, &MainWindow::displayText);
    QObject::connect(&ecs, &ControlSystem::displayState, this, &MainWindow::displayState);

    //connecting button panel to ecs signals
    QObject::connect(ui->B1, &QPushButton::clicked, &ecs, &ControlSystem::sendElevatorToFloor);
    QObject::connect(ui->B2, &QPushButton::clicked, &ecs, &ControlSystem::sendElevatorToFloor);
    QObject::connect(ui->B3, &QPushButton::clicked, &ecs, &ControlSystem::sendElevatorToFloor);
    QObject::connect(ui->B4, &QPushButton::clicked, &ecs, &ControlSystem::sendElevatorToFloor);
    QObject::connect(ui->B5, &QPushButton::clicked, &ecs, &ControlSystem::sendElevatorToFloor);


    //displays for elevators
    QObject::connect(&e1, &Elevator::displayState, this, &MainWindow::displayState);
    QObject::connect(&e2, &Elevator::displayState, this, &MainWindow::displayState);

    //start button
    QObject::connect(ui->startButton, &QPushButton::clicked, this, &MainWindow::startProgram);


    ecs.addElevator(&e1);
    ecs.addElevator(&e2);

    QObject::connect(ui->HELP, &QPushButton::clicked, &e1, &Elevator::callForHelp);

    //initially hide all element
    hideAllWidgets();

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::displayText(const QString &message){
    QApplication::processEvents();
    displayState();
    ui->display->append(message);
}

void MainWindow::displayState(){
    QString e1State = "Elevator 1 State: " + e1.state;
    QString e2State = "Elevator 2 State: " + e2.state;
    ui->state->clear();
    ui->state->append(e1State);
    ui->state->append(e2State);
}

void MainWindow::startProgram() {
    // Show all floor buttons
    ui->f1Up->show();
    ui->f1Down->show();
    ui->f2Up->show();
    ui->f2Down->show();
    ui->f3Up->show();
    ui->f3Down->show();
    ui->f4Up->show();
    ui->f4Down->show();
    ui->f5Up->show();
    ui->f5Down->show();

    // Show all elevator panel buttons
    ui->B1->show();
    ui->B2->show();
    ui->B3->show();
    ui->B4->show();
    ui->B5->show();

    // Show labels
    ui->label->show();
    ui->label_2->show();
    ui->label_3->show();
    ui->label_4->show();
    ui->label_5->show();

    ui->openDoor->show();
    ui->closeDoor->show();
    // Show the HELP button
    ui->HELP->show();

    // Show display and state elements
    ui->display->show();
    ui->state->show();

    // Hide the start button
    ui->startButton->hide();
}



void MainWindow::hideAllWidgets() {
    // Hide all floor buttons
    ui->f1Up->hide();
    ui->f1Down->hide();
    ui->f2Up->hide();
    ui->f2Down->hide();
    ui->f3Up->hide();
    ui->f3Down->hide();
    ui->f4Up->hide();
    ui->f4Down->hide();
    ui->f5Up->hide();
    ui->f5Down->hide();

    // Hide all elevator panel buttons except B1
    ui->B2->hide();
    ui->B3->hide();
    ui->B4->hide();
    ui->B5->hide();
    ui->B1->hide();

    // Hide labels
    ui->label->hide();
    ui->label_2->hide();
    ui->label_3->hide();
    ui->label_4->hide();
    ui->label_5->hide();

    ui->openDoor->hide();
    ui->closeDoor->hide();

    // Hide the HELP button
    ui->HELP->hide();

    // Hide display and state elements
    ui->display->hide();
    ui->state->hide();

    // Show only the startButton and B1
    ui->startButton->show();
}


