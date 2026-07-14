#include <iostream>

int i;
int main(){
    std::cout<< " enter the number ";
    std::cin >> i ;
    {
        if( i % 2 == 0){
            std::cout<< " number is even" << std::endl;
        } else {
        std::cout<<"number is odd"<< std::endl;
        }
    }
}