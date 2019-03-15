#include <iostream>
#include <vector>

using namespace std;


class Solution {
public:
//    bool isPerfectSquare(int num) {
//       int left = 1;
//       int right = num / 2 + 1;
//       while (left <= right) {
//           if (left * left == num || right * right == num) {
//               return true;
//           }
//           ++ left;
//           -- right;
//       }
//        return false;
//    }

    bool isPerfectSquare(int num) {
        int left = 1;
        int right = num / 2 + 1;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (mid * mid == num) {
                return true;
            } else if (mid * mid < num) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }

        }
        return false;
    }

};


int main() {
    std::cout << "Hello, World!" << std::endl;
    Solution a;

    cout << a.isPerfectSquare(2147483647) << endl;



    return 0;
}