#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
//    int smallestRepunitDivByK(int K) {
//        int64_t N = 1;
//        int length = 1;
//        while (N < INT64_MAX && N > 0) {
//            if (N % K == 0) return length;
//            N = N * 10 + 1;
//            ++length;
//            cout << "N=" << N << endl;
//        }
//        return -1;
//    }
    int smallestRepunitDivByK(int K) {
        int N = 0, length = 1;
        while (length <= K) {
            N = (N * 10 + 1) % K;
            if (N == 0) return length;
            ++ length;
        }
        return -1;
    }
//    int smallestRepunitDivByK(int K) {
//        for (int r = 0, N = 1; N <= K; ++N) {
//            cout << "N=" << N << endl;
//            if ((r = (r * 10 + 1) % K) == 0)
//                return N;
//        }
//        return -1;
//    }
};


int main() {
    std::cout << "Hello, World!" << std::endl;
    Solution a;
    int test = 5;
    cout << a.smallestRepunitDivByK(test) << endl;


    return 0;
}