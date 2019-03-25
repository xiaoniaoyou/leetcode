#include <iostream>
#include <vector>
using namespace std;


class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& A) {
        int left = 0;
        int right = A.size()-1;
        int first = 0, second = 0, third = 0;
        while (left < right) {
            for (int i = 0; i <= left; ++i)
                first += A[i];
            for (int i = left+1; i < right; ++i)
                second += A[i];
            for (int i = right; i <= A.size()-1; ++i)
                third += A[i];
            if (first == second && first == third)
                return true;
            if (first != second)
                ++left;
            if (second != third)
                --right;
            first = second = third = 0;
        }
        return false;
    }
};



int main() {
    std::cout << "Hello, World!" << std::endl;
    vector<int> test;
//    test = {0,2,1,-6,6,-7,9,1,2,0,1};
//    test = {0,2,1,-6,6,7,9,-1,2,0,1};
    test = {3,3,6,5,-2,2,5,1,-9,4};
    Solution a;
    cout << a.canThreePartsEqualSum(test) << endl;

    return 0;
}