#include <iostream>

int i ,j;

int main(){
    std::cout<<"Enter the First Integer:";
    std::cin >> i;

    std::cout<<"Enter the second Integer:";
    std::cin >> j;

    if( j == 0){
        std::cout<<"its is not allowed"<<std::endl;
    }else {

    if (i % j  == 0){
        std::cout<<"The first number is divisible by the second number"<<std::endl;
    } else {
        std::cout<<"The first number is not divisible by the second number"<<std::endl;
    }
    }
    return 0;
}