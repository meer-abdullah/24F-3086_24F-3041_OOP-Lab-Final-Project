#include <iostream>
#include "Stronghold.h" 
using namespace std;
int main() {
    Population populationSystem;
    Army armySystem;
    Economy economySystem;
    ResourceManager resourceSystem;
    Leader* currentLeader = new King();  
    EventManager eventSystem;
    Bank bankSystem;

    int choice;
    bool running = true;
    cout << "Welcome to StrongHold Game" << endl;
    cout << endl;
    while (running) {
        cout << "\n================ STRONGHOLD MENU ================\n";
        cout << "1. View Kingdom Overview\n";
        cout << "2. Simulate Population Changes\n";
        cout << "3. Recruit and Train Army\n";
        cout << "4. Manage Economy (Taxation, Treasury)\n";
        cout << "5. Handle Resource Operations\n";
        cout << "6. Trigger Random Event\n";
        cout << "7. Save Game to File\n";
        cout << "8. Load Game from File\n";
        cout << "9. Exit\n";
        cout << "=================================================\n";
        cout << "Enter your choice: ";
        cin >> choice;
        if (choice < 1 || choice > 9) {
            cout << "Invalid input! Please enter a number between 1 and 9.\n";
            continue;
        }
        switch (choice) {
        case 1:
            populationSystem.showStats();
            armySystem.showStats();
            economySystem.showStats();
            resourceSystem.showStats();
            bankSystem.showStats();
            break;
        case 2:
            populationSystem.simulate();
            break;
        case 3:
            armySystem.recruitAndTrain(populationSystem);
            break;
        case 4:
            economySystem.taxPopulation(populationSystem);
            bankSystem.auditTreasury(economySystem);
            break;
        case 5:
            resourceSystem.manage();
            break;
        case 6:
            eventSystem.trigger(populationSystem, armySystem, economySystem, resourceSystem);
            break;
        case 7:
            populationSystem.saveToFile();
            armySystem.saveToFile();
            economySystem.saveToFile();
            resourceSystem.saveToFile();
            bankSystem.saveToFile();
            break;
        case 8:
            populationSystem.loadFromFile();
            armySystem.loadFromFile();
            economySystem.loadFromFile();
            resourceSystem.loadFromFile();
            bankSystem.loadFromFile();
            break;
        case 9:
            running = false;
            break;
        }
    }
    delete currentLeader; 
    cout << "\nGame exited successfully. Long live the kingdom!\n";
    return 0;
}
