#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
//        int nextStep;
//        int sum = 0;
//        int n = cost.size();
//        for (int i = 1; i < n; ++i) {
//            int temp = min(cost[i], cost[i-1]);
//            sum += temp;
//            if (cost[i] < cost[i-1]) {
//                if (cost[i] + cost[i-1] < cost[i+1])
//            }
//
//        }
        vector<int> res(cost.size() + 1, 0);
        for (int i = 2; i <= cost.size(); ++i) {
            res[i] = min(res[i-1] + cost[i-1], res[i-2] + cost[i-2]);
        }

        return res.back();

    }




};


int main() {
    std::cout << "Hello, World!" << std::endl;
    vector<int> test;
    test = {10, 15, 20};
    Solution a;
    cout << a.minCostClimbingStairs(test) << endl;



    return 0;
}