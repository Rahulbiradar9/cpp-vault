#include <iostream>
int main(){
    int i=0;
    for ( ; i < 5 ; ){// Increment part is omitted
        std::cout<<"value of i :\n" << i << std::endl;
        i++;  // Increment i inside the loop body
    }
    return 0;
}