#include <iostream>
int main(){
    int a = 5 , b = 3;
    int r1 = a & b;
    int r2 = a | b;
    int r3 = a ^ b;
    int r4 = ~a ;
    int r5 = a>>1;
    int r6 = a<<1;

    std::cout << r1 <<"\n";
    std::cout << r2 <<"\n";
    std::cout << r3 <<"\n";
    std::cout << r4 <<"\n";
    std::cout << r5 <<"\n";
    std::cout << r6 <<"\n";

    return r1,r2,r3,r4,r5,r6;
}