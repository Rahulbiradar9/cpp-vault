#include <iostream>

int main(){
    int size;
    std::cout<<"Enter the size of array : ";
    std::cin>> size ;
    int numbers[size];

    for ( int i = 0 ; i < size ; i++){
        numbers[i] = i * 10;
    }

    for ( int i = 0 ; i < size ; i++){
        std::cout<<"element at index " << i << " : " << numbers[i] << std::endl;
    }
    return 0;
}