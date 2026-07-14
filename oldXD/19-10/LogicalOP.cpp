#include <iostream>
int main(){
    int a = 5, b = -10, c = 15;

if (a > 0 && (b > 0 || c > 0)) {
    std::cout << "At least two values are positive.\n";
}
return 0;
}