#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;


class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_set<int> bucket;
        int result = 0;
        unordered_set<int>::const_iterator it;
        for (int i = 0; i < nums.size(); ++i) {
            it = bucket.find(nums.at(i));
            if (it == bucket.end()) {
                cout << "-->" << nums.at(i) << endl;
                bucket.insert(nums.at(i));
            } else {
                bucket.erase(nums.at(i));
            }

        }

//        for (const int &element : bucket) {
//            cout << element << endl;
//        }

        result = *bucket.begin();

        return result;

    }
};


int main() {
    std::cout << "Hello, World!" << std::endl;
    vector<int> test = {4,1,2,1,2};

    Solution a;
    cout << a.singleNumber(test) << endl;

    return 0;
}