#include <iostream>

int main(){
    enum light {
        Red,
        Yellow,
        Green
    };

    enum light change = Red;

    switch (change){
        case Red:
        std::cout<<"stop dont crossroad";
        break;

        case Yellow:
        std::cout<<"light will turn red stop";
        break;

        case Green:
        std::cout<<"go ahead";
        break;

        default :
        std::cout<<"green ! no traffic";
    }
}