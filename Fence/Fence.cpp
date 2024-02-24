// Omar Vergara
// 02/24/2024
// Functions

#include <iostream>
#include <iomanip>
#include <cmath>    
#include <string>

using namespace std; // Added semicolon here
           
// Prototypes
string getName(); 
void printThings(string);


int main() {
    
    cout << "starting in Main" << endl; 
    string myName; // to catch the name returned by the getName function

    // function call 
    myName = getName(); // call the getName fuction, expecting a string to return
    cout << "Back in main" << endl;

    printThings(myName); 

    cout << "Back in main" << endl; 

    cout << myName << " is the name entered in the getName function. I'm back in main" << endl; 

    
    return 0; 

}

// the getName function takes no params, returns a string variable containing
// the name
string getName()
{
    string name; 
    cout << "In the getName function" << endl; 
    cout << "Enter the name: "; 
    getline(cin, name);
     return name; // this returns a copy of what lives in name
}

//printThings, takes a string and prints it out, returns nothing 
void printThings(string name)
{
    cout << "In printThings function" << endl;
    cout << " Here is your name " << name << endl; 
}