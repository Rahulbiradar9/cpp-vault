// Arrays can store numbers, strings, boolean values, characters, objects, etc. But once you define the type of values that your array will store, all its elements must be of that same type. You cannot “insert” different types of data in a single array.
// Arrays cannot store heterogeneous data, Now what it means.

// Syntax : Data_type  array_name  [Array_size] ;
// When you define the size of the array, all of that space in memory is “reserved” 
//  Insertion takes constant time O(1). removal tak O(1)
#include<bits/stdc++.h>

class Solution {
    public:
    int findLength(std::string s){

        return s.length();
    }
};
int main(){
    Solution obj;

    std::string s = "i am groot";

    std::cout << obj.findLength(s) << std::endl;
    return 0;
}
