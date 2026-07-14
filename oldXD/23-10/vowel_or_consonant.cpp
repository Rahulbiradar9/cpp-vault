// #include <iostream>

// int main(){
//     char AZ;
//     std::cout<<"enter any letter a to z in lower case";
//     std::cin>> AZ;
    
//     switch (AZ){
//         case a:
//         std::cout<<" _a_ is vowel";
//         break;

//         case e:
//         std::cout<<" _a_ is vowel";
//         break;

//         case i:
//         std::cout<<" _a_ is vowel";
//         break;

//         case o:
//         std::cout<<" _a_ is vowel";
//         break;

//         case u:
//         std::cout<<" _a_ is vowel";
//         break;

//         default:
//         std::cout<<"its  a consonant";
//     }
// }

// change code accordingly

#include <iostream>

int main() {
    char AZ;
    std::cout << "Enter any letter (a to z or A to Z): ";
    std::cin >> AZ;

    switch (AZ) {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
            std::cout << AZ << " is a vowel.\n";
            break;
        default:
            std::cout << AZ << " is a consonant.\n";
    }

    return 0;
}