#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> record;
        for (int i = 0; i < nums.size(); ++i) {
            if (record.find(nums[i]) != record.end())
                ++record[nums[i]];
            else
                record.insert({nums[i], 1});
        }

        int max = 0;
        int index = -1;
        for (auto x : record) {
            if (x.second > max) {
                max = x.second;
                index = x.first;
            }
        }

        return index;
    }
};






int main() {
    std::cout << "Hello, World!" << std::endl;
//    vector<int> test = {3,2,3};
    vector<int> test = {2,2,1,1,1,2,2};

    Solution a;
    cout << a.majorityElement(test) << endl;




    return 0;
}