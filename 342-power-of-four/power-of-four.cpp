class Solution {
public:
    bool isPowerOfFour(int n) {
        if ( n <= 0 )
        return false;
        //power of 2 and divible by 3
        return (n & (n-1))==0 && (n-1) % 3==0;
    }
};