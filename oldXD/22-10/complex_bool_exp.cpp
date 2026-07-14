// Use a complex boolean expression with relational and logical operators to check if a is greater than b, and b is greater than c, OR if a is equal to b and b is not equal to c.

#include <iostream>

int a = 10;
int b = 10;
int c = 15;

int main (){
    if(( a > b && b >c )||(a == b && b != c)){
        std::cout<<"true"<<std::endl;
    } else {
        std::cout<<"false"<<std::endl;
    }
    return 0;
}

// correct answer :)