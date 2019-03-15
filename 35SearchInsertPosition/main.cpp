#include <iostream>
#include <vector>
#include <math.h>

using namespace std;



//class Solution {
//public:
//    int searchInsert(vector<int>& nums, int target) {
//        int index = 0;
//        if (target > nums.at(nums.size()-1)) {
//            index = nums.size();
//            return index;
//        }
//
//        for (int i = 0; i < nums.size(); ++i) {
//            if (target == nums.at(i)) {
//                index = i;
//                break;
//            } else if (target > nums.at(i)) {
//                continue;
//            } else if (target < nums.at(i)) {
//                index = i;
//                break;
//            }
//
//        }
//
//        return index;
//    }
//};


//class Solution {
//public:
//    int searchInsert(vector<int>& nums, int target) {
//        int low = 0, high = nums.size() - 1;
//
//        while (low <= high) {
//            int mid = low + (high - low) / 2;
//            if (nums[mid] < target)
//                low = mid + 1;
//            else
//                high = mid - 1;
//        }
//
//        return low;
//    }
//};


class Solution {
public:
//    int mySqrt(int x) {
//        int result;
//        result = sqrt(x);
//        return result;
//    }

    int mySqrt(int x) {
        int low = 1, high = x;
        int mid;
        while (low < high) {
            mid = low + (high - low) / 2;
//            cout << "mid=" << mid << endl;
            if (mid == x / mid) {
                return (int)mid;
            } else if (mid > x / mid) {
                high = mid - 1;
            }  else {
                low = mid + 1;
            }
        }
//        cout << "low=" << low << endl;
        return low > x / low ? (int) low - 1 : (int) low;
    }

};


int main() {
    std::cout << "Hello, World!" << std::endl;

//    vector<int> arr = {1, 3, 5, 6};
    vector<int> arr = {1, 3, 5, 6};
    int target = 7;

    Solution a;
//    cout << a.searchInsert(arr, target) << endl;
    cout << a.mySqrt(0) << endl;




    return 0;
}