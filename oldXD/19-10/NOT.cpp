#include <iostream>
int a = 10;

int main(){
    if (!(a < 0)){
        std::cout << " only positive number exist\n"; // works "a" less than zero and but using NOT it turns into positive
    }
    else {
        std::cout << "negative number exists\n";
        return 0;
    }
}