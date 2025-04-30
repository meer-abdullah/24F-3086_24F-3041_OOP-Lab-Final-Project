Project Overview
StrongHold is a console-based kingdom management simulation game written in C++. It allows players to rule and develop a medieval stronghold by managing its population, army, economy, resources, and events. The game encourages strategic decision-making through a menu-driven interface and showcases principles of object-oriented programming (OOP), inheritance, encapsulation, and file handling.
Technologies Used
•	Language: C++
•	Concepts: OOP (Inheritance, Polymorphism), File I/O, Encapsulation
•	Compiler: Compatible with any standard C++ compiler (e.g., g++, MSVC)
•	IDE (optional): Code::Blocks, Visual Studio, or any C++ IDE of choice
Project Structure and Class Overview
The project is modular and structured across several classes, each representing a key system of the game:
 Person (Base Class)
•	Holds basic personal information like name and age.
•	Designed for possible future extensions like character management.
 SocialClass
•	Represents groups such as peasants, merchants, and nobles.
•	Tracks population and status of each class.
Population
•	Tracks total population and happiness.
•	Simulates population changes.
•	Manages social distribution.
•	Implements file save/load functionality.
 Army
•	Manages soldier count, morale, and food supply.
•	Handles recruitment and training.
•	Interacts with the Population system.
•	Save/load state from files.
 Economy
•	Controls taxation and treasury.
•	Introduces inflation effects.
•	Provides treasury status and transactions.
Bank
•	Manages loans and audits treasury.
•	Detects fraud and tracks loans issued.
•	Interfaces with Economy for financial simulations.
 ResourceManager
•	Tracks and manages core resources: food, wood, stone, iron.
•	Allows gathering and consumption of resources.
•	Handles fixed resource consumption.
•	Includes persistence through file operations.
 EventManager
•	Triggers random events affecting multiple systems.
•	Events include: famine, disease, war, betrayal, and earthquakes.
 Leader (Abstract Class)
•	Base class for different ruler types.
•	Defines a common interface to impose policies.
 King and Tyrant (Derived Classes)
•	Implement specific leadership styles.
•	Apply unique policies to influence army and economy.
Gameplay Flow
The game runs through a menu-driven interface:

1. View Kingdom Overview
2. Simulate Population Changes
3. Recruit and Train Army
4. Manage Economy (Taxation, Treasury)
5. Handle Resource Operations
6. Trigger Random Event
7. Save Game to File
8. Load Game from File
9. Exit

File Handling
Each major class (Population, Army, Economy, ResourceManager, Bank) includes:
•	saveToFile(): Saves current object state.
•	loadFromFile(): Restores object state.
This enables players to save and resume progress.



