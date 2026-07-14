#include <iostream>
int a = 2 , b = 3;
// OR such a way that either 1 of the expreesion should be true so we will get 1 as output (1 + anything)
int main()  {
    if (a > 0 || b < 0){
        std::cout << "1\n"; // ture
    }
    else {
        std::cout << "0\n"; // false
    }
}