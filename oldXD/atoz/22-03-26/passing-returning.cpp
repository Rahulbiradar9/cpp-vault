#include<bits/stdc++.h>

class Solution {
    public:
    std::string modifyString(std::string str){
        std::string newStr = str;
        newStr[0] = 'H';
        return newStr;
    }
};

int main(){
    std::string original = "hello";

    Solution sol;
    
    std::string modified = sol.modifyString(original);

    std::cout << "original String :" << original << std::endl;
    std::cout << " modified String:" << modified << std::endl;

    return 0;
}