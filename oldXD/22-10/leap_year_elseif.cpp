#include <iostream>

int main() {
    int year;
    std::cout << "Enter the year: ";
    std::cin >> year;

    if (year % 400 == 0) {
        std::cout << "It is a leap year.\n";
    } else if (year % 100 == 0) {
        std::cout << "It is not a leap year.\n";
    } else if (year % 4 == 0) {
        std::cout << "It is a leap year.\n";
    } else {
        std::cout << "It is not a leap year.\n";
    }

    return 0;
}

//redo