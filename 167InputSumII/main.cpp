#include <iostream>
#include <vector>

using namespace std;


class Solution {
public:
//    vector<int> twoSum(vector<int>& numbers, int target) {
////        int low = 0, high = numbers.size() - 1;
//        vector<int> result;
//        int rest;
//        for (int i = 0; i < numbers.size(); ++i) {
//            rest = target - numbers.at(i);
//            int low = 0;
//            int high = numbers.size() -1;
//            cout << "i=" << i << endl;
//            while (low < high) {
//                int mid = low + (high - low) / 2;
//                cout << "low=" << low << endl;
//                cout << "mid=" << mid << endl;
//                cout << "high=" << high << endl;
//                if (numbers.at(mid) == rest) {
//                    if (mid == i) {
//                        break;
//                    }
//                    if (i < mid) {
//                        result.push_back(i+1);
//                        result.push_back(mid+1);
//                    } else {
//                        result.push_back(mid+1);
//                        result.push_back(i+1);
//                    }
//
//                    return result;
//                } else if (numbers.at(mid) < rest) {
//                    low = mid + 1;
//                } else {
//                    high = mid - 1;
//                }
//            }
//
//        }
//
//        return result;
//    }

    vector<int> twoSum(vector<int> &numbers, int target) {
        int left = 0;
        int right = numbers.size() - 1;
        while (left < right) {
            if (numbers[left] + numbers[right] == target) {
                vector<int> res{left + 1, right + 1};
                return res;
            } else if (numbers[left] + numbers[right] > target) {
                -- right;
            } else {
                ++ left;
            }

        }

    }

};


int main() {
    std::cout << "Hello, World!" << std::endl;

    Solution a;
//    vector<int> arr = {2, 7, 11, 15};
//    vector<int> arr = {2, 3, 4};
    vector<int> arr = {1,2,3,4,4,9,56,90};
    int target = 8;
    vector<int> tResult = a.twoSum(arr, target);
    for (int i = 0; i < tResult.size(); ++i) {
        cout << tResult.at(i) << endl;
    }

    return 0;
}