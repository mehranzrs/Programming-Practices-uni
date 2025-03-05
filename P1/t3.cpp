#include <iostream>
#include <string>
using namespace std;

int main() {
    const int numPeople = 10; 
    string firstNames[numPeople], lastNames[numPeople];
    int ages[numPeople];
    double heights[numPeople], weights[numPeople];

    
    for (int i = 0; i < numPeople; i++) {
        cout << "Enter details for person " << i + 1 << ":" << endl;
        cout << "First Name: ";
        cin >> firstNames[i];
        cout << "Last Name: ";
        cin >> lastNames[i];
        cout << "Age: ";
        cin >> ages[i];
        cout << "Height (in cm): ";
        cin >> heights[i];
        cout << "Weight (in kg): ";
        cin >> weights[i];
        cout << "-----------------------------" << endl;
    }

    
    int totalAge = 0;
    for (int i = 0; i < numPeople; i++) {
        totalAge += ages[i];
    }
    double averageAge = static_cast<double>(totalAge) / numPeople;

  
    cout << "The average age of the group is: " << averageAge << endl;

    return 0;
}