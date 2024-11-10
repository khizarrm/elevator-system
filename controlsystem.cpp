#include "controlsystem.h"
#include "elevator.h"
#include <QDebug>
#include <QApplication>
#include <QPushButton>
#include "mainwindow.h"

ControlSystem::ControlSystem(QObject * parent) : QObject(parent) {}

void ControlSystem::addElevator(Elevator *e){
    elevators.push_back(e);
}

void ControlSystem::receiveFloorSignal(int floor){
    display("ECS Received signal for floor " + QString::number(floor));
    Elevator * closest = computeClosestElevator(floor);
    QObject::disconnect(this, &ControlSystem::sendSignalToElevator, nullptr, nullptr);
    QObject::connect(this, &ControlSystem::sendSignalToElevator, closest, &Elevator::receiveECSSignal);
    emit sendSignalToElevator(floor);
}

void ControlSystem::sendElevatorToFloor(){
    QPushButton * button = qobject_cast<QPushButton*>(sender());
    if (button){
        QString name = button->objectName();
        qDebug() << "Button clicked" << name;
    }
    bool ok;
    emit sendSignalToElevator(button->text().toInt(&ok));
}

Elevator * ControlSystem::computeClosestElevator(int floor){

    Elevator* closestElevator = elevators[0];
    int minDistance = std::abs(closestElevator->getCurrFloor() - floor);

    for (Elevator* elevator : elevators) {
        int distance = std::abs(elevator->getCurrFloor() - floor);
        if (distance < minDistance) {
            minDistance = distance;
            closestElevator = elevator;
        }
    }
    return closestElevator;

}




