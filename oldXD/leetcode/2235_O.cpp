#include <iostream>
using namespace std; 
class Solution {
public:
    int sum(int num1, int num2) {
        return num1 + num2;
    }
};
int main() {
    int num1, num2;
    cin >> num1;
    cin >> num2;

    Solution sol;
    cout << "Sum: " << sol.sum(num1, num2) << endl;

    return 0;
}

