#include <iostream>

int main(){
    int i;
    int arr[] = {1,2,3,4,5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int sum = 0;

    for (int i = 0 ; i < 5 ; i++){
        sum += arr[i] ;
    }
    std::cout<<"sum of array :" << sum  << std::endl;
    return 0;

}