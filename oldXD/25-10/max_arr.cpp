#include <iostream>

int main() {
    int arr[] = {12, 45, 23, 67, 34};
    int size = sizeof(arr) / sizeof(arr[0]);
    int max = arr[0];  
    // Start by assuming the first element is the maximum

    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    std::cout << "Maximum value in the array: " << max << std::endl;
    return 0;
}