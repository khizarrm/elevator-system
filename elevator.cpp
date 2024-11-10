#include "elevator.h"
#include <QDebug>
#include <QString>
#include <QThread>

Elevator::Elevator(int id, int f, QObject * parent) : id(id), currentFloor(f), QObject(parent), weight(100), state("Idle"), helpCalled(false), isOpen(false) {
}

void Elevator::move() {
    if (detectIssue(100, false, false, false)) {
        display("Elevator is stopped due to an issue.");
        return;
    }
    state = "Moving";
    if (!targetFloors.isEmpty()) {
        moveToNextFloor();
    } else {
        state = "Idle";
        display("Elevator has reached floor: " + QString::number(currentFloor));
        toggleDoor();
    }
}

void Elevator::moveToNextFloor() {
    if (targetFloors.isEmpty()) {
        state = "Idle";
        display("Elevator has reached floor: " + QString::number(currentFloor));
        toggleDoor();
        return;
    }
    int floor = targetFloors.first();
    if (currentFloor < floor) {
        currentFloor++;  
    } else if (currentFloor > floor) {
        currentFloor--;  
    }
    display("Elevator " + QString::number(id) + " currently at floor: " + QString::number(currentFloor));
    if (currentFloor == floor) {
        targetFloors.removeOne(floor);
    }
    QTimer::singleShot(2000, this, &Elevator::moveToNextFloor);
}

void Elevator::receiveECSSignal(int floor){
    qDebug() << "Signal received";
    targetFloors.push_back(floor);
    move();
}

int Elevator::getId(){
    return id;
}

int Elevator::getCurrFloor(){
    return currentFloor;
}

void Elevator::toggleDoor() {
    if (isOpen) {
        display("Doors are: closed");
        isOpen = false;
    } else {
        display("Doors are: open");
        isOpen = true;
    }
}

void Elevator::openDoor() {
    if (isOpen) {
        display("Doors are already open ");
    } else if (state == "Moving"){
        display("Cannot open, elevator is moving");
        return;
    } else {
        display("Doors are: opened");
    }
    isOpen = true;
}

void Elevator::closeDoor() {
    if (!isOpen) {
        display("Doors are already closed ");
    } else {
        display("Doors are: closed");
    }
    isOpen = false;
}

void Elevator::pressButton(int n){
    display("Floor " + QString::number(n) + " pressed");
    targetFloors.push_back(n);
    move();
}

void Elevator::callForHelp() {
    state = "Idle";
    display("Calling emergency services...");
    int countdown = 5;
    QTimer *timer = new QTimer(this);
    QObject::connect(timer, &QTimer::timeout, [this, countdown, timer]() mutable {
        if (countdown > 0) {
            display("Calling 911 in " + QString::number(countdown) + " seconds...");
            countdown--;
        } else {
            timer->stop();
            display("Connected to 911");
            move();
        }
    });
    timer->start(1000);
}

bool Elevator::detectIssue(int weight, bool fire, bool powerOut, bool doorBlocked) {
    if (weight > 1000) {
        display("Elevator overload! Please reduce weight");
        return true;
    }
    if (fire) {
        display("Fire detected. Stopping at the current floor and opening doors.");
        state = "Idle";
        if (!isOpen) {
            toggleDoor();
        }
        return true;
    }
    if (powerOut) {
        display("Power outage detected! Sopping at safe floor. Passengers please disembark");
        return true;
    }
    if (doorBlocked) {
        display("Door is blocked!");
        return true;
    }
    return false;
}
