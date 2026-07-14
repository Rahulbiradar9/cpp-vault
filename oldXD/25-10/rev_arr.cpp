#include <iostream>

int main(){
    int arr [] = {1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int temp;
    for (int i = 0; i < n / 2; i++) {
        temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }
        std::cout << "Reversed array: ";
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    return 0;
}