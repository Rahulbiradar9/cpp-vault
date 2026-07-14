#include <iostream>
int a = 5, b =10;
int main(){
    if(a > 0 && b < 0){
        std::cout << "1\n"; // 1 is true 0 is false
    }
    else{
        std::cout << "0\n";
    }
    return 0;
}