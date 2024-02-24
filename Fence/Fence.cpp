#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>

using namespace std;

// Prototypes
string getName();
void getAssignNames(string[]);
void printIt(string, string[]);

int main()
{
    string studentName;
    string assignName[3];

    studentName = getName();
    getAssignNames(assignName);

    // Call to print the results
    printIt(studentName, assignName);

    return 0;
}

string getName()
{
    string name;
    cout << "Enter the student's first and last name: ";
    getline(cin, name);
    return name;
}

void getAssignNames(string names[])
{
    cout << "Enter the name of Assignment 1: ";
    getline(cin, names[0]);

    cout << "Enter the name of Assignment 2: ";
    getline(cin, names[1]);

    cout << "Enter the name of Assignment 3: ";
    getline(cin, names[2]);
}

void printIt(string name, string assignments[])
{
    cout << "The student name is " << name << endl;
    cout << "Assignment 1 is: " << assignments[0] << endl; // Corrected 'assignment' -> 'assignments'
    cout << "Assignment 2 is: " << assignments[1] << endl;
    cout << "Assignment 3 is: " << assignments[2] << endl;
}