#include <iostream>

int main (){
    int weight ;
    char region;
    
    std::cout<<"enter the weight :";
    std::cin>>weight;

    std::cout<<"Enter the region A or B:";
    std::cin>>region;

    int cost = 0 ;
    if (region == 'a'){
        if ( weight <= 5){
            cost = 10;
        } else {
            cost = 10 + 2 * (weight - 5);
        }
    } else if ( region == 'b'){
        if (weight <= 5){
            cost = 15;
        } else {
            cost = 15 + 3 * ( weight - 5);
        }
    } else {
        std::cout << " Invaild region entered."<< std::endl;
        return 1;
    }
    std::cout << " total shipping cost : $"<< cost << std::endl;
    return 0;

}

// redo