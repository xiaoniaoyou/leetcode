#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>

using namespace std;
//
//class Solution {
//public:
//    vector<int> intersection(vector<int> &nums1, vector<int> &nums2) {
//        unordered_set<int> interRes;
//        for (int i = 0; i < nums1.size(); ++i) {
//            if (isNumFound(nums2, nums1.at(i))) {
//                interRes.insert(nums1.at(i));
//            }
//        }
//
//        vector<int> res(interRes.begin(), interRes.end());
//        return res;
//    }
//
//    bool isNumFound(vector<int> &arr, int target) {
//        int left = 0;
//        int right = arr.size() - 1;
//        while (left <= right) {
//            if (arr.at(left) == target || arr.at(right) == target) {
//                return true;
//            }
//            ++left;
//            --right;
//        }
//        return false;
//    }
//};
//


class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;
        for (int i = 0; i < nums1.size(); ++i) {
            if (isNumFound(nums2, nums1.at(i))) {
                res.push_back(nums1.at(i));
            }
        }

        return res;
    }


    bool isNumFound(vector<int> &arr, int target) {
        if (arr.empty()) return false;
        vector<int>::iterator left = arr.begin();
        vector<int>::iterator right = arr.end() - 1;
        while (left <= right) {
            if (*left == target) {
                arr.erase(left);
                return true;
            }
            if (*right == target) {
                arr.erase(right);
                return true;
            }
            ++left;
            --right;
        }
        return false;
    }

};





int main() {
    std::cout << "Hello, World!" << std::endl;

    vector<int> nums1 = {1};
    vector<int> nums2 = {};
//    vector<int> nums1 = {4, 9, 5};
//    vector<int> nums2 = {9, 4, 9, 8, 4};
//    vector<int> nums2 = {4, 4, 8, 9, 9};

//    Solution a;
//    vector<int> res = a.intersection(nums1, nums2);
//    for (int i = 0; i < res.size(); ++i) {
//        cout << res.at(i) << endl;
//    }

    Solution a;
    vector<int> res = a.intersect(nums1, nums2);
    for (int i = 0; i < res.size(); ++i) {
        cout << res.at(i) << endl;
    }

    return 0;
}