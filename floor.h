#ifndef FLOOR_H
#define FLOOR_H

#include <QObject>

class Floor : public QObject{
    Q_OBJECT
public:
    Floor(int floor, QObject * parent = nullptr);
    ~Floor();

private:
    int floorNumber;

public slots:
    void pressButton(const QString &direction);

signals:
    void sendSignal(int f);
    void display(const QString &message); //displays to ui
    void displayState(const QString &message);

};

#endif // FLOOR_H
