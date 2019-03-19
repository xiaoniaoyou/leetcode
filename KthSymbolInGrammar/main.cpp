#include <iostream>
#include <vector>
using namespace std;


class Solution {
public:
    int kthGrammar(int N, int K) {
        if (N == 1) return 0;
        if (K % 2 == 0) return (kthGrammar(N-1, K/2) == 0) ? 1 : 0;
        else
            return (kthGrammar(N-1, (K+1)/2)) == 0 ? 0 : 1;

    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    Solution a;
    int N = 5;
    int K = 5;
    cout << a.kthGrammar(N, K) << endl;

    return 0;
}