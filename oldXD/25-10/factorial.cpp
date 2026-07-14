// #include <iostream>

// int main(){
//     int  i , n ;
//      std::cout<<"enter the number";
//      std::cin>> n ;
     
//     for ( int i = 0 ; i < n ; i++){
//         n = i * i;
//     }
//     std::cout<< "factorial : " << n ;
// }

#include <iostream>

int main() {
    int n;
    std::cout << "Enter the number: ";
    std::cin >> n;

    int factorial = 1;
    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }

    std::cout << "Factorial: " << factorial << std::endl;
    return 0;
}

//redo