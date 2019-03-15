#include <iostream>


using namespace std;

class Solution {
public:
//    int climbStairs(int n) {
//        if (n == 1) return 1;
//        if (n == 2) return 2;
//        return climbStairs(n-1) + climbStairs(n-2);
//    }

    int climbStairs(int n) {
        if (n == 1) return 1;
        if (n == 2) return 2;
        int arr[n] = {0};
        arr[0] = 1;
        arr[1] = 2;
        for (int i = 2; i < n; ++i) {
            arr[i] = arr[i-1] + arr[i-2];
        }
        return arr[n-1];
    }


};




int main() {
    std::cout << "Hello, World!" << std::endl;

    Solution a;
    int test = 10;
    cout << a.climbStairs(test) << endl;

    return 0;
}