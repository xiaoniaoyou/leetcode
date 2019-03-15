#include <iostream>

using namespace std;


class Solution {
public:
    int arrangeCoins(int n) {
        int rest = n;
        int k = 1;
        while (rest > k) {
            cout << "rest=" << rest << endl;
            cout << "k=" << k << endl;
            rest = rest - k;
            ++ k;
        }

        return k-1;
    }
};


int main() {
    std::cout << "Hello, World!" << std::endl;
    Solution a;
    int n = 1;
    cout << a.arrangeCoins(n) << endl;



    return 0;
}