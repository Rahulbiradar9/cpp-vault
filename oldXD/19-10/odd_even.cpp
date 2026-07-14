#include <iostream>
int main(){
    // for odd
    for(int i = 1; i < 100; i++) {
        if (i % 2 == 1 ){
            std::cout<<i<<"\n";
        }
    }
    // for even
        for(int j = 1; j < 100; j++) {
        if (j % 2 == 0 ){
            std::cout<<j<<"\n";
        }
    }
}