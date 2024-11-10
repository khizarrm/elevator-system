#include "floor.h"
#include <QDebug>

Floor::Floor(int f, QObject * parent) : floorNumber(f), QObject(parent) {}

void Floor::pressButton(const QString &direction){
    emit display( "Passenger pressed " + direction + " button on floor: " + QString::number(floorNumber));
    qDebug() << "Passenger pressed button on floor " << floorNumber;
    emit sendSignal(floorNumber);
}

Floor::~Floor() {}
