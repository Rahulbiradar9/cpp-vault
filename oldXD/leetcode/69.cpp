#include <iostream>
using namespace std;

int mySqrt(int x) {
    if (x < 2)
        return x;
    int i = 2;
    while (i * i <= x) {
        i++;
    }
    return i - 1;
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    int result = mySqrt(number);
    cout << "Integer square root of " << number << " is: " << result << endl;

    return 0;
}