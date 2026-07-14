#include <iostream>
using namespace std;

int main() {
    int year;

    // Prompt user for input
    cout << "Enter a year: ";
    cin >> year;

    // Check leap year conditions
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                cout << year << " is a leap year." << endl;
            } else {
                cout << year << " is not a leap year." << endl;
            }
        } else {
            cout << year << " is a leap year." << endl;
        }
    } else {
        cout << year << " is not a leap year." << endl;
    }

    return 0;
}

// re do