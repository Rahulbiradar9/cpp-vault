#include <iostream>

int main(){
    int n = -1;
    if( n > 0){
        std::cout<< " n is positive number";
    } else{
        if(n == 0){
            std::cout<<"n is equal to zero";
        }else{
            std::cout<<"n is a negative number";
        }
    }
    return 0;
}