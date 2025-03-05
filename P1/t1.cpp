#include <iostream>
using namespace std;


int abs(int num) {
    if (num < 0) {
        return -num;
    } else {
        return num;
    }
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    cout << "Answer is " << abs(num) << endl;

    return 0;
}