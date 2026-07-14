#include <iostream>
using namespace std;

int countOdds(int low, int high) {
    return ((high + 1) / 2) - (low / 2);
}

int main() {
    int low1 = 11, high1 = 19;
    cout << "Odd count between " << low1 << " and " << high1 << " is: " << countOdds(low1, high1) << endl;
    return 0;
}
