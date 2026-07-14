#include <iostream>

int main (){
    int i , j;
    std::cout<<"\n enter two values :";
    std::cin >> i >> j ;
    
    int a1 = i == j;
    int a2 = i != j;
    int a3 = i > j;

    std::cout<< a1 <<"\n" ;
    std::cout<< a2 <<"\n" ;
    std::cout<< a3 <<"\n" ;
}