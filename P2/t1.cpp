#include <iostream>
using namespace std;

class PersonInfo {
private:
    string names[10] = {"Ali", "Mahmoud", "Maryam", "Zahra", "Mohammad", "Sara", "Hossein", "Reza", "Fereshteh", "Amir"};
    int ages[10] = {12, 32, 45, 67, 34, 1, 54, 37, 15, 9};

public:
    void showPersons() {
        cout << "List of Persons:\n";
        for (int i = 0; i < 10; i++) {
            cout << "Name: " << names[i] << " - Age: " << ages[i] << endl;
        }
    }

    double averageAge() {
        int total = 0;
        for (int i = 0; i < 10; i++) {
            total += ages[i];
        }
        return (double)total / 10;
    }
};

int main() {
    PersonInfo people;
    
    people.showPersons();
    
    cout << "Average age: " << people.averageAge() << endl;

    return 0;
}
