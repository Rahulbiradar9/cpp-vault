#include <iostream>

int i;

int main(){
    std::cout<<"\n Enter the temperature in degree Celsius :";
    std::cin >> i;
    {
        if(i < 0 ){
            std::cout<<"it's freezing!"<<std::endl;
        } else {
        std::cout<<"it's above freezing"<<std::endl;
        }
    }
    return 0;
}