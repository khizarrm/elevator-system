#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "floor.h"
#include "elevator.h"
#include "controlsystem.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

/**
 * @class MainWindow
 * @brief The main GUI window for the elevator control simulation.
 * 
 * This class represents the primary interface for the elevator simulation, 
 * including the display of floors, elevators, and control system states. 
 * It handles user interactions and displays system messages, state updates, 
 * and event responses in the GUI.
 */
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    /**
     * @brief Constructor for MainWindow.
     * 
     * Initializes the main window, including UI setup and connecting signals 
     * to slots for handling events and state updates.
     * 
     * @param parent Pointer to the parent widget, if any (default is nullptr).
     */
    MainWindow(QWidget *parent = nullptr);

    /**
     * @brief Destructor for MainWindow.
     * 
     * Cleans up resources, ensuring safe destruction of the MainWindow object 
     * and any associated resources.
     */
    ~MainWindow();

    /**
     * @brief Displays a message in the main window UI.
     * 
     * This function sends a text message to the main UI display area, 
     * allowing feedback and updates from the control system and elevators.
     * 
     * @param message The message to display on the UI.
     */
    void displayText(const QString &message);

    /**
     * @brief Hides all widgets in the main window except essential components.
     * 
     * This function is used to clear the interface of any unnecessary widgets, 
     * focusing on critical display elements for the simulation.
     */
    void hideAllWidgets();

public slots:
    /**
     * @brief Slot to update and display the state of the system.
     * 
     * Called when there is a change in the system’s state that needs to be 
     * reflected in the UI, such as elevator movements or floor requests.
     */
    void displayState();

    /**
     * @brief Slot to start the elevator simulation program.
     * 
     * Initializes the elevator system, setting up initial parameters and 
     * starting the control system to begin handling requests.
     */
    void startProgram();

private:
    Ui::MainWindow *ui; ///< Pointer to the UI interface of the main window.

    // Floor objects representing each floor in the building.
    Floor f1; ///< Floor 1 in the building.
    Floor f2; ///< Floor 2 in the building.
    Floor f3; ///< Floor 3 in the building.
    Floor f4; ///< Floor 4 in the building.
    Floor f5; ///< Floor 5 in the building.

    // Elevator objects representing the available elevators in the system.
    Elevator e1; ///< First elevator in the system.
    Elevator e2; ///< Second elevator in the system.

    ControlSystem ecs; ///< The central control system for managing elevators.
};

#endif // MAINWINDOW_H
