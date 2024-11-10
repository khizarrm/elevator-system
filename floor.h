#ifndef FLOOR_H
#define FLOOR_H

#include <QObject>

/**
 * @class Floor
 * @brief Represents a floor in the elevator system.
 * 
 * This class handles interactions specific to each floor, including managing 
 * requests for elevator movement in a specified direction. It communicates 
 * with the control system and the user interface to display messages and 
 * handle user requests.
 */
class Floor : public QObject {
    Q_OBJECT
public:
    /**
     * @brief Constructor for the Floor class.
     * 
     * Initializes the Floor object with a specified floor number and an 
     * optional parent object.
     * 
     * @param floor The floor number this object represents.
     * @param parent Pointer to the parent QObject (default is nullptr).
     */
    Floor(int floor, QObject *parent = nullptr);

    /**
     * @brief Destructor for the Floor class.
     * 
     * Ensures that any allocated resources are properly released upon 
     * destruction of the Floor object.
     */
    ~Floor();

private:
    int floorNumber; ///< The number of the floor that this object represents.

public slots:
    /**
     * @brief Slot to handle button press events for requesting elevator movement.
     * 
     * Called when a user presses the "Up" or "Down" button on this floor, 
     * signaling the need for an elevator in the specified direction.
     * 
     * @param direction The direction (e.g., "up" or "down") in which the 
     *                  elevator is requested to move.
     */
    void pressButton(const QString &direction);

signals:
    /**
     * @brief Signal to notify the control system about a floor request.
     * 
     * Emits a signal to the control system indicating that an elevator 
     * is requested to come to this floor.
     * 
     * @param f The floor number where the request originated.
     */
    void sendSignal(int f);

    /**
     * @brief Signal to display a message in the user interface.
     * 
     * Emits a message to be displayed on the UI, allowing the floor to 
     * communicate status updates or requests to the user.
     * 
     * @param message The message to be displayed in the UI.
     */
    void display(const QString &message); // Displays to UI

};

#endif // FLOOR_H
