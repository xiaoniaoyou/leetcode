#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int K) {
        unordered_map<int, int> distance;
        for (int i = 0; i < points.size(); ++i) {
            int temp = points.at(i).at(0) *  points.at(i).at(0) +  points.at(i).at(1) *  points.at(i).at(1);
            distance.insert({i, temp});
        }

        int min = INT32_MAX;
        for (auto x : distance) {
            if (x.second < min) {
                min = x.second;
            }
        }

        vector<int> index;
        for (auto x : distance) {
            if (min == x.second) {
                index.push_back(x.first);
            }
        }

        vector<vector<int>> res;
        for (int i = 0; i < index.size(); ++i) {
            res.push_back(points.at(i));
        }

        return res;
    }
};


int main() {
    std::cout << "Hello, World!" << std::endl;
    Solution a;

    return 0;
}