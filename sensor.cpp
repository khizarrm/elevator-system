#include "sensor.h"

Sensor::Sensor(QObject * parent) : QObject(parent) {}

bool Sensor::detectIssue(int weight, bool fire, bool powerOut, bool doorBlocked){
        if (weight > 1000) {
            qDebug() << "Issue detected: Overweight!";
            return true;
        }

        if (fire) {
            qDebug() << "Issue detected: Fire alarm activated!";
            return true;
        }

        if (powerOut) {
            qDebug() << "Issue detected: Power outage!";
            return true;
        }

        if (doorBlocked) {
            qDebug() << "Issue detected: Door is blocked!";
            return true;
        }

        return false;
}
