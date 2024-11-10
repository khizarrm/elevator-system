#ifndef ELEVATOR_H
#define ELEVATOR_H

#include <QObject>
#include <QList>
#include <QTimer>

class Elevator : public QObject {
    Q_OBJECT
private:
    int id;
    int currentFloor;
    bool isOpen;
    QList<int> targetFloors;
    int count = 0;
    bool detectIssue(int weight, bool fire, bool powerOut, bool doorBlocked);
    bool fire = false;


public:
    Elevator(int id, int currFloor, QObject *parent = nullptr);
    int weight;
    bool helpCalled;
    int getCurrFloor();
    int getId();
    QString state;
    void move();
    void moveToNextFloor();
    void pressButton(int n);
    void toggleDoor(bool obstacle = false);
    void openDoor();
    void closeDoor();




public slots:
    void receiveECSSignal(int floor);
    void callForHelp();

signals:
    void display(const QString &message); //displays to ui
    void displayState(const QString &message);
};

#endif // ELEVATOR_H
