#include <iostream>

int main() {
    int i ;
    std::cout<<"enter the age :";
    std::cin>> i ;

    if ( i >= 16){
        int j;
        std::cout<<"shows id :";
        std::cin>>j;
        if ( j == 1){
            std::cout<<" he is a student special discount of $5 ";
        }else{
            std::cout<<" he is not student";
        }
    } else {
    std::cout<<"they are younger than 16 , hence they are not allowed";
    }
    return 0;
}