#include <iostream>
#include <math.h>
#include <unordered_set>
#include <vector>


using namespace std;





class Solution {
public:
    int countPrimes(int n) {
        if (n <= 2) return 0;

        int count = 0;
        for (int i = 2; i < n; i += 1) {
            if (isPrime(i)) {
                ++ count;
//                 cout << "-->" << i << endl;
            }
        }

        return count;
    }

    bool isPrime(int n) {
        int sqrtNum = sqrt(n) + 1;
//        cout << "sqrtNum=" << sqrtNum << endl;
        for (int i = 2; i < sqrtNum; ++i) {
            if (n % i == 0) {
                return false;
            }
        }

        return true;
    }

};

int main() {
    std::cout << "Hello, World!" << std::endl;

    Solution a;
    int test = 3;
    cout << a.countPrimes(test) << endl;


    return 0;
}