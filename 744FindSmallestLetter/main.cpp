#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;


//class Solution {
//public:
//    char nextGreatsetLetter(vector<char> &letters, char target) {
//        for (int i = 0; i < letters.size(); ++i) {
//            if (letters.at(i) - target > 0) {
//                return letters.at(i);
//            }
//        }
//
//        return letters.at(0);
//    }
//};

//! 852
//class Solution {
//public:
//    int peakIndexInMountainArray(vector<int>& A) {
//        int low = 0;
//        int high = A.size() - 1;
//        int maxIndex = -1;
//        while (low <= high) {
//            int mid = low + (high - low) / 2;
//            cout << "mid=" << mid << endl;
//            if (A.at(mid) > A.at(low) && A.at(mid) > A.at(high)) {
//                maxIndex = mid;
//                low = mid + 1;
//            } else if (A.at(mid) < A.at(low)) {
//                high = mid - 1;
//            } else if (A.at(mid) < A.at(high)) {
//                low = mid + 1;
//            }
//            if (maxIndex != -1 && A.at(mid) > A.at(maxIndex)) {
//                maxIndex = mid;
//            }
//
//
//        }
//
//        return maxIndex;
//    }
//};

//class Solution {
//public:
//    int peakIndexInMountainArray(vector<int>& A) {
//        int maxIndex = 0;
//        for (int i = 0; i < A.size(); ++i) {
//            auto larger = lower_bound(A.begin(), A.end(), A.at(i));
//            cout << "i=" << i << ", " << A.at(i) << ", larger=" << *larger << endl;
//            cout << "maxIndex=" << maxIndex << endl;
//            if (larger == A.end()) maxIndex = i;
//            if (*larger > A.at(maxIndex)) {
//                maxIndex = i;
//            }
//        }
//
//        return maxIndex;
//    }
//};

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& A) {
        int max = 0;
        int maxIndex = 0;
        for (int i = 0; i < A.size(); ++i) {
            if (A.at(i) > max) {
                max = A.at(i);
                maxIndex = i;
            }
        }
        return maxIndex;
    }
};


int main() {
    std::cout << "Hello, World!" << std::endl;
    vector<char> letters = {'c', 'f', 'j'};
    char target = 'z';
    Solution a;
//    cout << a.nextGreatsetLetter(letters, target) << endl;

//    vector<int> A = {0, 2, 1, 0};
    vector<int> A = {3, 4, 5, 1};
//    vector<int> A = {1, 2, 4, 5, 0};
    cout << a.peakIndexInMountainArray(A) << endl;

    return 0;
}