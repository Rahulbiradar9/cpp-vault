#include<bits/stdc++.h>

void modify(int a){
    a = a + 10;
}

int main(){
    int x = 5;
    modify(x);
    std::cout<< x << std::endl;
    return 0 ;
}