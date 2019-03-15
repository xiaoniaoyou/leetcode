#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
//    int maxProfit(vector<int>& prices) {
//        int begin, end;
//        int max = 0;
//        int temp;
//        for (int i = 0; i < prices.size(); ++i) {
//            begin = i;
//            end = prices.size() - 1;
//            while (begin < end) {
//                temp = prices[end] - prices[begin];
//                if (temp > max) max = temp;
//                --end;
//            }
//        }
//
//        return max;
//    }

    int maxProfit(vector<int> &prices) {
        int maxPro = 0, minPrice = INT32_MAX;
        for (int i = 0; i < prices.size(); ++i) {
            minPrice = min(minPrice, prices[i]);
            maxPro = max(prices[i] - minPrice, maxPro);
        }
        return maxPro;
    }

};


int main() {
    std::cout << "Hello, World!" << std::endl;
    vector<int> test = {7,1,5,3,6,4};
//    vector<int> test = {7,6,4,3,};
    Solution a;
    cout << a.maxProfit(test) << endl;
    return 0;
}