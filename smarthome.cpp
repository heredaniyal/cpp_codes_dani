#include <iostream>
using namespace std;

// NOT TESTED, TESTING BY ABDULLAH 9:27 AM, 04/06/2025

/*
Object Oriented Programming - Open Ended Lab
Smart Home Automation System
Objective: Apply all four OOP pillars to simulate a Smart Home system.
Total marks: 15

Lab Task Description:
You are required to design a Smart Home Automation System using OOP concepts. 
The system will manage devices like lights, fans, air conditioners, and security systems. 
Your design should simulate a home that can be controlled via code—turning devices on/off,
 setting temperatures, checking security status, etc.

Use the four pillars of OOP:
Requirements:
Encapsulation:
•	Create classes for devices (e.g., Light, Fan, AC, SecuritySystem) with private attributes and public methods to access/modify state.
Inheritance:
•	Use a base class Device and derive specific devices (e.g., Light, Fan) from it.
Polymorphism:
•	Implement a method statusReport() in the base class and override it in derived classes to show current status of each device differently.
Abstraction:
•	Use abstract class Controllable or interface-like design to enforce the implementation of methods like turnOn(), turnOff() in each device.
Deliverables:
•	Source code (C++)
•	Short documentation:
o	How OOP pillars were used
o	Sample output screenshots
o	How your system simulates real-life smart home behavior

Rubrics:
Criteria	Marks
Encapsulation implemented correctly	3
Inheritance hierarchy designed well	3
Polymorphism used meaningfully	3
Abstraction/interface usage	3
Code readability + creativity	3
*/

class Controllable // ABSTRACT CLASS
{
 public:
 // 2 pure virtual functions for making abstract class (1 can also do)
 virtual void turnOn() = 0; 
 virtual void turnOff() = 0;
};

class Device : public Controllable// BASE CLASS
{
public: // turnOn, turnOff included aswell
virtual void statusReport() {} // virtual function
};

class Light : public Device
{
private:
string lightstatus; // status of light
public:
void turnOn() {
    lightstatus = "On";
}
void turnOff() {
    lightstatus = "Off";
}
void statusReport() // overridden function ki definition de di gayi
{
    cout << " Light Status : " << lightstatus << endl;
}
};

class Fan : public Device
{
private:
string fanstatus; // status of fan
public:
void turnOn() {
    fanstatus = "On";
}
void turnOff() {
    fanstatus = "Off";
}
void statusReport() // overridden function ki definition de di gayi
{
    cout << " Fan Status : " << fanstatus << endl;
}
};

class AC : public Device
{
private:
string ACstatus; // status of AC
public:
void turnOn() {
    ACstatus = "On";
}
void turnOff() {
    ACstatus = "Off";
}
void statusReport() // overridden function ki definition de di gayi
{
    cout << " AC Status : " << ACstatus << endl;
}
};

class SecuritySystem : public Device
{
private:
string systemstatus; // status of fan
public:
void turnOn() {
    systemstatus = "On";
}
void turnOff() {
    systemstatus = "Off";
}
void statusReport() // overridden function ki definition de di gayi
{
    cout << " System Status : " << systemstatus << endl;
}
};

int main() // MAIN FUNCTION
{
    // will make a menu driven main to play around with
    int choice; // for main menu
    
    // OBJECTS CREATED SO THAT WE CAN ACCESS THEIR FUNCTIONS AND ATTRIBUTES
    Light l1;
    Fan f1;
    AC AC1;
    SecuritySystem SS;
    
    do
    {
        cout << " WHAT WOULD LIKE TO ACCESS AT THE MOMENT? " << endl;
        cout << "press any number other than 1 - 4 for EXIT " << endl;
        cout << "1. Light " << endl;
        cout << "2. Fan " << endl;
        cout << "3. AC " << endl;
        cout << "4. Security System " << endl;
        cin >> choice;

        if (choice == 1) // Light
        {
            int lightchoice;
           cout << " WHAT TO DO WITH LIGHT? " << endl;
           cout << " 1. Turn On Light " << endl;
           cout << " 2. Turn Off Light " << endl;
           cout << " 3. Light Status " << endl;
           cin >> lightchoice;
           if (lightchoice == 1) {l1.turnOn();}
           else if (lightchoice == 2) {l1.turnOff();}
           else {l1.statusReport();}
        }
        else if (choice == 2) // Fan
        {
            int fanchoice;
           cout << " WHAT TO DO WITH FAN? " << endl;
           cout << " 1. Turn On FAN " << endl;
           cout << " 2. Turn Off FAN " << endl;
           cout << " 3. FAN Status " << endl;
           cin >> fanchoice;
           if (fanchoice == 1) {f1.turnOn();}
           else if (fanchoice == 2) {f1.turnOff();}
           else {f1.statusReport();}
        }
        else if (choice == 3) // AC
        {
           int ACchoice;
           cout << " WHAT TO DO WITH AC? " << endl;
           cout << " 1. Turn On AC " << endl;
           cout << " 2. Turn Off AC " << endl;
           cout << " 3. AC Status " << endl;
           cin >> ACchoice;
           if (ACchoice == 1) {AC1.turnOn();}
           else if (ACchoice == 2) {AC1.turnOff();}
           else {AC1.statusReport();}
        }
        else // SECURITY SYSTEM MEANING 4 AUTOMATICALLY
        {
            int SSchoice;
           cout << " WHAT TO DO WITH Security System? " << endl;
           cout << " 1. Turn On Security System " << endl;
           cout << " 2. Turn Off Security System " << endl;
           cout << " 3. Security System Status " << endl;
           cin >> SSchoice;
           if (SSchoice == 1) {SS.turnOn();}
           else if (SSchoice == 2) {SS.turnOff();}
           else {SS.statusReport();}
        }
    } while (choice >= 1 && choice <= 4); // Tab tak chal jab tak 1 - 4 na ki range se bahir na chala jaye
    
    cout << " THANKS FOR USING OUR APPLICATION! ALLAH HAFIZ! "; // goodbye message 
    return 0;
}