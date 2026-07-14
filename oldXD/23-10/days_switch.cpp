#include <iostream>

int main(){
    int day ;
    std::cout<<"Enter the number day in manner of 1-7 for monday to sunday to get o/p :";
    std::cin>> day ;

    switch(day){
        case 1:
        std::cout<<"Monday";
        break;
        case 2:
        std::cout<<"tuesday";
        break;
        case 3:
        std::cout<<"wednesday";
        break;

        case 4:
        std::cout<<"thursday";
        break;

        case 5:
        std::cout<<"friday";
        break;

        case 6:
        std::cout<<"saturday";
        break;

        case 7:
        std::cout<<"sunday";

        default:
        std::cout<<"Invaild day\n";
        
    }
    return 0;
}