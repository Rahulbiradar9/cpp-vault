#include <iostream>

int main(){
    int numbers[] = {1, 2, 3, 4, 5};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    // Multiply each element by 2

    for ( int i = 0 ; i < size ; i++){
        numbers [i] = numbers[i] * 2;
    }

    // new arr will be arr[] = {2,4,6,8,10}

    for ( int i = 0 ; i < size ; i++){
        std::cout<<"element at index "<< i << ":"<< numbers[i]<<std::endl;
    }
    return 0 ;
}