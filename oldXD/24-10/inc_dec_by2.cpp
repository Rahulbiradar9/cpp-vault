#include <iostream>

int main(){
    int i , j , k;
     for (i= 0 ; i < 5 ; i++){
        std::cout<<"value of i :" << i <<std::endl;
     }
     for (j = 5 ; j > 0 ; j--){
        std::cout<<"value of j :" << j <<std::endl;
     }
     for ( k = 0 ; k < 10 ; k+=2){
        std::cout<<"value of k :" << k << std::endl;
     }
     return 0;
}