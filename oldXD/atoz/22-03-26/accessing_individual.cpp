#include<bits/stdc++.h>

class Solution{
    public:
    void accessChar(std::string s){
        for(int i = 0; i < s.length(); i++){
            std::cout<< s[i] << std::endl;
        }
    }
};

int main() {
    Solution obj;
    std::string s = "he hahaha";
    obj.accessChar(s);
    return 0;
}