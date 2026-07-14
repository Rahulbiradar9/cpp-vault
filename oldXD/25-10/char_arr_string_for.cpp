#include <iostream>

int main(){
    char message[] = "Hello, world!"; 
    //size of message is 14 bcz it includes '\0'
    //string length is 13 
    int i;

    for (i = 0 ; message[i] != '\0'; i++){
        std::cout<<" Character at index " << i << ":" << message[i] << std::endl;
    }
    return 0;
}