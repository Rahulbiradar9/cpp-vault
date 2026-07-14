#include <iostream>

int main(){
    int numbers[] = {10 ,20 ,30 ,40 ,50};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    for ( int i = 0; i < size ; i++){
        std::cout<<"element at index : "<< i << " "<< numbers[i] << std::endl;
    }
    return 0;
}