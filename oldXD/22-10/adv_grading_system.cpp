#include <iostream>

int main() {
    int i;
    std::cout<<"Enter the marks :";
    std::cin >> i ;

    {
        if(i >=97 && i<= 100){
            std::cout<<"A+";
        } else if ( i >= 93 && i<=96){
            std::cout<<"A";
        } else if ( i >= 90 && i<=92){
            std::cout<<"A-";
        } else if ( i >= 87 && i<=89){
            std::cout<<"B+";
        } else {
            std::cout<<"F";
        }
    }
    return 0 ;
}