#include <iostream>

int main() {
    int n, sum = 0;
    std::cout << "Enter the number up to which you want the sum of natural numbers: ";
    std::cin >> n;

    for (int i = 1; i <= n; ++i) {
        sum += i;
    }

    std::cout << "Sum of first " << n << " natural numbers is: " << sum << std::endl;
    return 0;
}