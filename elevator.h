#ifndef ELEVATOR_H
#define ELEVATOR_H

#include <QObject>
#include <QList>
#include <QTimer>

/**
 * @class Elevator
 * @brief Represents an elevator in the system.
 * 
 * This class manages the state and functionality of a single elevator, including 
 * movement between floors, handling door operations, and detecting safety issues 
 * such as fire and overload. The elevator interacts with the control system 
 * and provides updates to the user interface.
 */
class Elevator : public QObject {
    Q_OBJECT
private:
    int id; ///< Unique identifier for the elevator.
    int currentFloor; ///< Current floor the elevator is located on.
    bool isOpen; ///< Indicates if the elevator door is currently open.
    QList<int> targetFloors; ///< List of floors the elevator is scheduled to visit.
    int count = 0; ///< Counter for internal use, such as tracking movement steps.
    bool fire = false; ///< Indicates if a fire emergency is active.

    /**
     * @brief Detects issues based on various safety parameters.
     * 
     * This method checks for potential issues such as overload, fire, power outage, 
     * or door obstruction, and triggers appropriate responses.
     * 
     * @param weight Current weight in the elevator.
     * @param fire Indicates if there is a fire emergency.
     * @param powerOut Indicates if there is a power outage.
     * @param doorBlocked Indicates if the door is obstructed.
     * @return True if an issue is detected, false otherwise.
     */
    bool detectIssue(int weight, bool fire, bool powerOut, bool doorBlocked);

public:
    /**
     * @brief Constructor for the Elevator class.
     * 
     * Initializes an Elevator object with a unique identifier, starting floor, 
     * and optional parent.
     * 
     * @param id Unique identifier for the elevator.
     * @param currFloor Initial floor the elevator starts on.
     * @param parent Pointer to the parent QObject (default is nullptr).
     */
    Elevator(int id, int currFloor, QObject *parent = nullptr);

    int weight; ///< Maximum weight capacity of the elevator.
    bool helpCalled; ///< Indicates if a help request has been made.

    /**
     * @brief Gets the current floor of the elevator.
     * 
     * @return The current floor number.
     */
    int getCurrFloor();
    
    /**
     * @brief Gets the unique identifier of the elevator.
     * 
     * @return The elevator's unique ID.
     */
    int getId();
    
    QString state; ///< Current operational state of the elevator.

    /**
     * @brief Moves the elevator to the next scheduled floor.
     * 
     * This method initiates movement to the next floor in the queue, updating 
     * the elevator's position and state.
     */
    void move();
    
    /**
     * @brief Moves the elevator to the next floor in the target list.
     * 
     * Advances the elevator to the next floor specified in the `targetFloors` list.
     */
    void moveToNextFloor();
    
    /**
     * @brief Simulates pressing a button for a specific floor.
     * 
     * Adds the specified floor to the elevator's list of target floors.
     * 
     * @param n The floor number corresponding to the button pressed.
     */
    void pressButton(int n);
    
    /**
     * @brief Toggles the door state, optionally considering obstacles.
     * 
     * Opens or closes the elevator door, with an option to account for 
     * obstructions that may prevent normal door operation.
     * 
     * @param obstacle Indicates if an obstacle is blocking the door.
     */
    void toggleDoor(bool obstacle = false);
    
    /**
     * @brief Opens the elevator door.
     * 
     * Sets the door to the open state, allowing passengers to enter or exit.
     */
    void openDoor();
    
    /**
     * @brief Closes the elevator door.
     * 
     * Sets the door to the closed state to secure passengers inside.
     */
    void closeDoor();

public slots:
    /**
     * @brief Receives a floor request signal from the control system.
     * 
     * This slot handles requests from th
