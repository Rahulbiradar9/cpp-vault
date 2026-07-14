#include <iostream>

int main(){

int i , j , k;

std::cout<<"Enter the side of triangle";
std::cin>> i >> j >> k;

    if ( (i == j || i == k) && (i != j || i != k) ){
        std::cout<<"It is a isosceles";
    } else if ( i != j || i != k || j != k){
        std::cout<<"It is scalene Triangle";
    } else {
        std::cout<<"It is a equilateral Triangle";
    }
    return 0;
}

// given below is correct code above one i didnt use triangle thm which states that sum of 2 side should be greater then 3rd side
// #include <iostream>

// int main() {
//     int i, j, k;

//     std::cout << "Enter the sides of the triangle: ";
//     std::cin >> i >> j >> k;

//     // Check for triangle validity using triangle inequality theorem
//     if ((i + j > k) && (i + k > j) && (j + k > i)) {
//         // Valid triangle, now classify
//         if (i == j && j == k) {
//             std::cout << "It is an Equilateral Triangle.\n";
//         } else if (i == j || i == k || j == k) {
//             std::cout << "It is an Isosceles Triangle.\n";
//         } else {
//             std::cout << "It is a Scalene Triangle.\n";
//         }
//     } else {
//         std::cout << "The given sides do not form a valid triangle.\n";
//     }

//     return 0;
// }