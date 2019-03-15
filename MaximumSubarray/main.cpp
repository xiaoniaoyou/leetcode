#include <iostream>
#include <vector>

using namespace std;



class Solution {
public:

    int max(int a, int b) {
        return (a > b) ? a : b;
    }

    int max(int a, int b, int c) {
        return max(max(a, b), c);
    }

    int maxSubArray(vector<int>& nums) {
        return maxSubArraySum(nums, 0, nums.size()-1);
    }

    int maxCrossingSum(vector<int> &nums, int left, int mid, int right) {
        int sum = 0;
        int leftSum = INT32_MIN;
        for (int i = mid; i >= left; --i) {
            sum += nums[i];
            if (sum > leftSum) leftSum = sum;
        }

        sum = 0;
        int rightSum = INT32_MIN;
        for (int i = mid + 1; i <= right; ++i) {
            sum += nums[i];
            if (sum > rightSum) rightSum = sum;
        }

        return leftSum + rightSum;
    }

    int maxSubArraySum(vector<int> &nums, int left, int right) {
        if (left == right) return nums[left];
        int mid = (left + right) / 2;

        return max(maxSubArraySum(nums, left, mid),
                    maxSubArraySum(nums, mid+1, right),
                   maxCrossingSum(nums, left, mid, right)
        );

    }


};


//class Solution {
//public:
//    int maxSubArray(vector<int>& nums) {
//        vector<int> res;
//        int max = INT32_MIN;
//        for (int i = 0; i < nums.size(); ++i) {
//            int oneRoundMax = sum(nums, i);
////            cout << "oneRoundMax=" << oneRoundMax << endl;
//            if (oneRoundMax > max) max = oneRoundMax;
//        }
//
//        return max;
//    }
//
//    int sum(vector<int> &nums, int begin) {
//        int sum = 0;
//        int max = INT32_MIN;
//        for (int i = begin; i < nums.size(); ++i) {
//            sum += nums.at(i);
////            cout << "-->" << sum << endl;
//            if (sum > max) max = sum;
//        }
//        return max;
//    }
//
//};



int main() {
    std::cout << "Hello, World!" << std::endl;
//    vector<int> test = {-2,1,-3,4,-1,2,1,-5,4};
    vector<int> test = {-2,-1};
    Solution a;
    cout << a.maxSubArray(test) << endl;



    return 0;
}