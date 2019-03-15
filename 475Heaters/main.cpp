#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int findRadius(vector<int>& houses, vector<int>& heaters) {
        int minRadius = 0;
        sort(heaters.begin(), heaters.end());

        for (const auto &house : houses) {
            cout << "house=" << house << endl;
            int curRadius = INT32_MAX;
            auto larger = lower_bound(heaters.begin(), heaters.end(), house);
            if (larger != heaters.end()) {
                curRadius = *larger - house;
            }
            if (larger != heaters.begin()) {
                auto smaller = larger - 1;
//                curRadius = house - (*smaller); //! smaller是heaters里的larger的前一个index
                curRadius = min(curRadius, house - *smaller);
            }
            minRadius = max(minRadius, curRadius);
        }

        return minRadius;
    }
};


//
//class Solution {
//public:
//    int findRadius(vector<int>& houses, vector<int>& heaters) {
//        if (heaters.empty()) return 0;
//
//        sort(houses.begin(), houses.end());
//        sort(heaters.begin(), heaters.end());
//        int radius = 0;
//        int index = 0;
//        for (int i = 0; i < houses.size(); ++i) {
//            while (index + 1 < heaters.size() && (abs(heaters.at(index+1) - houses.at(i)) <= abs(heaters.at(index) - houses.at(i)))) {
//                ++ index;
//            }
//            radius = max(radius, abs(heaters.at(index) - houses.at(i)));
//        }
//
//        return radius;
//    }
//};

int main() {
    std::cout << "Hello, World!" << std::endl;
//    vector<int> house = {1, 2, 3, 4, 5, 6, 7, 8};
//    vector<int> heater = {1, 4};
    vector<int> house = {1, 5};
    vector<int> heater = {2};
    Solution a;
    cout << a.findRadius(house, heater) << endl;

    std::vector<int> data = { 1,2,3,4,5,6 };
    auto lower = std::lower_bound(data.begin(), data.end(), -1);
    auto lowerUpper = std::upper_bound(data.begin(), data.end(), 2);
    cout << "lower=" << *lower << endl;
    cout << "lower.end=" << (lower == data.end()) << endl;
    cout << "lowerUpper=" << *lowerUpper << endl;
//    cout << "INT_MAX=" << INT64_MAX << endl;

    return 0;
}