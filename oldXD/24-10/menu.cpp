#include <iostream>

int main(){
    int choice;

    std::cout<<"Menu:\n";

    std::cout<<"1. Option A \n";
    std::cout<<"2. Option B \n";
    std::cout<<"3. Option C \n";

    std::cout<<"Enter your choice:";
    std::cin>> choice ;

    switch(choice){
        case 1:
        std::cout<<"Executing option A\n";
        break;

        case 2:
        std::cout<<"Executing option B\n";
        break;

        case 3:
        std::cout<<"Executing option C\n";
        break;

        default:
        std::cout<<"invaild choice";
    }
}