#include <iostream>

int main(){
    float num1 , num2; //float only 6 to 7 decimal points
    std::cout<<"Enter the number :";
    std::cin>> num1 >> num2;

    char op;
    std::cout<<"enter the operator (+ , - , / ,*) :";
    std::cin>> op;

    switch (op){
        case '+':
        std::cout<<"result :"<< num1 + num2 << std::endl ;
        break;

        case '-':
        std::cout<<"result :"<< num1 - num2 << std::endl ;
        break;

        case '*':
        std::cout<<"result :"<< num1 * num2 << std::endl ;
        break;

        case '/':
        if(num2!=0){
        std::cout<<"result :"<< num1 / num2 << std::endl ;
        } else {
            std::cout<<"result: invaild input";
        }
        break;
    }   
}