#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
using namespace std;

int main() {
    // Constant for the number of names.
    const int MAX_NAMES = 5;
    // Variables
    string name, lowest, highest;
    int count;
    // Get the first name.
    cout << "Enter the first name: ";
    cin >> name;
    // Since this is the only name entered so far,
    // it is both the lowest and highest (alphabetically).
    // Assign the name to lowest and highest.
    lowest = name;
    highest = name;
    // Get the rest of the names and keep the lowest and highest.
    for(count = 2; count <= MAX_NAMES; count++){
        cout << "Enter the next name: ";
        cin >> name;
          // Determine whether this is the lowest or highest name.
        if (name < lowest){
            lowest = name;
        }   
        else if (name > highest){
            highest = name;
        }                  
    }   
    // Display the first and last names.
    cout << "First " << lowest << endl;
    cout << "Last " << highest<<endl;
    return 0;
}