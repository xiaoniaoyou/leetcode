#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;


class Solution {
public:
//    bool isHappy(int n) {
//        if (n == 1) return true;
//        if (n == 0 ) return false;
//
//        int result = splitToSquareSum(n);
//        return isHappy(result);
//    }

    bool isHappy(int n) {

        int result = splitToSquareSum(n);
        unordered_set<int> resultSet;
        resultSet.insert(result);
        while (result != 1) {
            result = splitToSquareSum(result);
            if (resultSet.find(result) != resultSet.end()) {
                return false;
            }
            resultSet.insert(result);
        }

        return true;
    }

//    int splitToSquareSum(int n) {
//        vector<int> nums;
//        int temp = n;
//        while (temp) {
//            nums.push_back(temp % 10);
//            temp = temp / 10;
//        }
//        int squareSum = 0;
//        for (int i = 0; i < nums.size(); ++i) {
//            squareSum += nums[i] * nums[i];
//        }
//        cout << "-->" << squareSum << endl;
//        return squareSum;
//    }
    int splitToSquareSum(int n) {
        int temp = n;
        int squareSum = 0;
        while (n) {
            temp = n % 10;
            squareSum += temp * temp;
            n /= 10;
        }
        return squareSum;
    }


};


int main() {
    std::cout << "Hello, World!" << std::endl;

    int test = 7;
    Solution a;
    cout << "a.isHappy()=" << a.isHappy(test) << endl;



    return 0;
}