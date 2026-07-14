//Number Comparison: Write a C program that takes two numbers as input and prints the larger of the two. If the numbers are equal, print "The numbers are equal."

#include <iostream>

int i,j;
int main(){
    std::cout<< "enter two numbers :\n";
    std::cin>> i >> j;

    if( i > j){
        std::cout << "larger number is "<< i ;
    } else if ( i < j) {
        std::cout<< "larger number is "<<j ;
    } else{
        std::cout << "both are equal";
    }
    return 0;
}


// correct answer