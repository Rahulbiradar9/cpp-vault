#include<bits/stdc++.h>

class solution{
    public:
    bool compareStrings(std::string str1,std::string str2){

        return str1 == str2;

    }
};

int main(){
    solution obj;

    std::string str1;
    std::cin >> str1;

    std::string str2;
    std::cin >> str2;

    if ( obj.compareStrings(str1, str2))
        std::cout << "strings are equal";

        else 
        std::cout << " strings are not equal";

        return 0;
}