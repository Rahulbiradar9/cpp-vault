// #include <iostream>

// int main(){
//     int i;
//     int n;
//     int sum = 0;
//     std::cout<<"enter the number : ";
//     std::cin>> n ;
//     for ( i = 1 ; i <= n; i++){
//         sum += n ;
//     }
//     std::cout<<"value : " << sum <<std::endl;
//     return 0;
// }

#include <iostream>

int main() {
    int n;
    std::cout << "Enter how many Fibonacci numbers to print: ";
    std::cin >> n;

    int a = 0, b = 1;
    std::cout << "Fibonacci sequence: ";
    for (int i = 0; i < n; ++i) {
        std::cout << a << " ";
        int next = a + b;
        a = b;
        b = next;
    }
    std::cout << std::endl;
    return 0;
}

