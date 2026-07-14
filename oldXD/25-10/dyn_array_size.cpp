#include <iostream>

int main(){
    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int size = sizeof(numbers) / sizeof(numbers[0]);

//  - sizeof(numbers) → 5 elements × 4 bytes (assuming int is 4 bytes) = 20 bytes
// - sizeof(numbers[0]) → 4 bytes
// - size → 20 / 4 = 5


    for ( int i = 0; i < size; i++){
        std::cout<<"element at index " << i << ":" << numbers[i] << std::endl;
    }
    return 0;
}