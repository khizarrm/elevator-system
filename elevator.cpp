#include "elevator.h"
#include <QDebug>
#include <QString>

Elevator::Elevator(int id, int f, QObject * parent) : id(id), currentFloor(f), QObject(parent), state("Idle"), helpCalled(false), isPaused(false), isOpen(false) {
}

void Elevator::move() {

    if (isOpen) {
        toggleDoor();
    }


    state = "Moving";
        if (!targetFloors.isEmpty()) {
        if (state != "Idle"){
            moveToNextFloor();
        }
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
        currentFloor++;  // Move up
    } else if (currentFloor > floor) {
        currentFloor--;  // Move down
    }

    display("Elevator " + QString::number(id) + " currently at floor: " + QString::number(currentFloor));

    if (currentFloor == floor) {
        targetFloors.removeOne(floor);
    }

    QTimer::singleShot(1000, this, &Elevator::moveToNextFloor);
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

    // Countdown timer
    QTimer *timer = new QTimer(this);
    QObject::connect(timer, &QTimer::timeout, [this, countdown, timer]() mutable {
        if (countdown > 0) {
            display("Calling 911 in " + QString::number(countdown) + " seconds...");
            countdown--;
        } else {
            timer->stop();
            display("Connected to 911");
            move();  // Continue moving if there are target floors
        }
    });

    timer->start(1000);  // Start the countdown with 1-second intervals
}
