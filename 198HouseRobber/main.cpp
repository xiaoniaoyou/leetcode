#include <iostream>
#include <vector>
using namespace std;


class Solution {
public:
    int rob(vector<int>& nums) {
        const int n = nums.size();
        if (n == 0) return 0;
        if (n == 1) return nums[0];
        if (n == 2) return max(nums[0], nums[1]);
        vector<int> f(n, 0);
        f[0] = nums[0];
        f[1] = max(nums[0], nums[1]);
        for (int i = 2; i < n; ++i) {
            f[i] = max(f[i-2] + nums[i], f[i-1]);
        }
        return f[n-1];

    }

};



int main() {
    std::cout << "Hello, World!" << std::endl;

    vector<int> test;
//    test = {1, 2, 3, 1};
    test = {2,7,9,3,1};

    Solution a;
    cout << a.rob(test) << endl;




    return 0;
}