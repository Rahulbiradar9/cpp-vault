#include<iostream>

int i ;

int main (){
    std::cout<<"enter marks on 1-100:";
    std::cin >> i ;

    if( i >= 90){
        std::cout<<"A-grade";
    }else{
        if(i >= 80 && i <= 89){
            std::cout<<"B-grade";
        }else{
            if(i >= 70 && i <= 79){
                std::cout<<"C-grade";
            }else{
                if(i >= 60 && i <= 69){
                    std::cout<<"D-grade";
                }else{
                    std::cout<<"Fail";
                }
            }
        }
    }
    return 0;
}