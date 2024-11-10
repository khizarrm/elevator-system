#ifndef CONTROLSYSTEM_H
#define CONTROLSYSTEM_H

#include <QObject>
#include "elevator.h"

class ControlSystem : public QObject{
    Q_OBJECT
private:
    std::vector<Elevator*> elevators;
    int maxFloors = 5;

public:
    ControlSystem(QObject *parent = nullptr);
    void addElevator(Elevator* e);
    Elevator* computeClosestElevator(int floor);
    Elevator * closestElevator;

public slots:
    void receiveFloorSignal(int floor);
    void sendElevatorToFloor();

signals:
    void sendSignalToElevator(int floor);
    void display(const QString &message); //displays to ui
    void displayState();
};

#endif // CONTROLSYSTEM_H
