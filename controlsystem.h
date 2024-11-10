#ifndef CONTROLSYSTEM_H
#define CONTROLSYSTEM_H

#include <QObject>
#include "elevator.h"

/**
 * @class ControlSystem
 * @brief Manages and controls multiple elevators within the system.
 * 
 * This class serves as the central controller for all elevator operations, 
 * managing elevator requests, dispatching elevators to floors, and coordinating 
 * the response to passenger requests and emergencies. It communicates 
 * with the elevators and updates the user interface with relevant information.
 */
class ControlSystem : public QObject {
    Q_OBJECT
private:
    std::vector<Elevator*> elevators; ///< Vector to store pointers to Elevator objects.

public:
    /**
     * @brief Constructor for the ControlSystem class.
     * 
     * Initializes the ControlSystem object, allowing it to manage elevators 
     * and respond to floor requests.
     * 
     * @param parent Pointer to the parent QObject (default is nullptr).
     */
    ControlSystem(QObject *parent = nullptr);

    /**
     * @brief Adds an Elevator object to the control system.
     * 
     * Registers a new elevator within the control system, enabling it 
     * to receive floor requests and perform operations.
     * 
     * @param e Pointer to the Elevator object to be added.
     */
    void addElevator(Elevator* e);

    /**
     * @brief Computes the closest Elevator to a specified floor.
     * 
     * Determines which elevator is nearest to the requested floor to optimize 
     * response time and dispatches it to fulfill the request.
     * 
     * @param floor The floor number to which the closest Elevator is to be computed.
     * @return Pointer to the closest Elevator object.
     */
    Elevator* computeClosestElevator(int floor);
    
    Elevator *closestElevator; ///< Pointer to the closest Elevator object.

public slots:
    /**
     * @brief Receives a floor request signal and processes it.
     * 
     * This slot is triggered when a floor requests an elevator, prompting 
     * the control system to compute the best elevator to respond.
     * 
     * @param floor The floor number that the request originated from.
     */
    void receiveFloorSignal(int floor);

    /**
     * @brief Sends the closest available Elevator to the requested floor.
     * 
     * Dispatches the pre-computed closest elevator to the target floor 
     * based on the received request.
     */
    void sendElevatorToFloor();

signals:
    /**
     * @brief Signal to send a command to an Elevator to go to a specific floor.
     * 
     * This signal instructs an elevator to move to the specified floor 
     * to respond to a passenger request.
     * 
     * @param floor The floor number to which the Elevator should go.
     */
    void sendSignalToElevator(int floor);

    /**
     * @brief Signal to display a message in the user interface.
     * 
     * Emits a message to be shown on the UI, providing system status 
     * updates or notifications.
     * 
     * @param message The message to be displayed in the UI.
     */
    void display(const QString &message);

    /**
     * @brief Signal to display the current state of the system.
     * 
     * Updates the UI with the current operational state of the control system, 
     * reflecting actions like dispatching elevators or responding to emergencies.
     * 
     * @param message The state message to be displayed.
     */
    void displayState(const QString &message);
};

#endif // CONTROLSYSTEM_H
