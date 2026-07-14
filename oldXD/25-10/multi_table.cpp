#include <iostream>

int main(){
    int n = 5;

    std::cout<<"table :" << n << std::endl;
    for ( int i = 1 ; i <=10 ;i++){
        std::cout<<" "<< n*i << std::endl;
    }
    return 0;
}