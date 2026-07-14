#include <iostream>

int main(){
    enum wd {
        m,
        t,
        w,
        th,
        f,
        s,
        sd
    };

    enum wd today = w;

    switch (today){
        case m:
        std::cout<<"its monday";
        break;

        case t:
        std::cout<<"its tuesday";
        break;

        case w:
        std::cout<<"wednesday";
        break;

        case th:
        std::cout<<" thrusady";
        break;

        case f:
        std::cout<<" friday";
        break;

        case s:
        std::cout<<"saturday";
        break;

        case sd:
        std::cout<<"sunday";
        break;
        
        default:
        std::cout<<"invaild";

    }
}

//This example uses an enum (enumeration) to define a set of named integer constants representing the days of the week. The switch statement then uses these enum values in the case labels. This approach can improve code readability and maintainability.