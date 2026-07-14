#include <iostream>

int main(){
    int age;
    std::cout<<" Enter age of person:";
    std::cin>> age;
    
    if(age >= 0 && age <= 100){
        std::cout<<"age of person is vaild"<< age << std::endl;
    }
    else {
        std::cout<<"person age is not vaild"<< std::endl;
    }
    return 0;
}