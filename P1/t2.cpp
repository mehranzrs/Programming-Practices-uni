#include <iostream>
using namespace std;


int max(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}


int min(int a, int b) {
    if (a < b) {
        return a;
    } else {
        return b;
    }
}

int main() {
    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;

    cout << "Max of " << x << " and " << y << " is " << max(x, y) << endl;
    cout << "Min of " << x << " and " << y << " is " << min(x, y) << endl;

    return 0;
}