#include <iostream>

int main() {
    int x = 10;
    int y = x++;
    int z = --y;
    std::cout << "y:" << y << std::endl;
    std::cout << "z:" << z << std::endl;
}