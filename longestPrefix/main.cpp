#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix;
        if (strs.empty()) return prefix;
        if (strs.size() == 1) return strs.at(0);

        char temp;
        int nums = strs.size();

        int minIndex = 0;
        int minLength = strs.at(0).size();
        for (int i = 1; i < nums; ++i) {
            if (minLength > strs.at(i).size()) {
                minIndex = i;
                minLength = strs.at(i).size();
                cout << "i=" << i << "," << minLength << endl;
            }
        }

//        cout << "minIndex=" << minIndex << endl;
//        cout << "minLength=" << minLength << endl;
        bool oneRoundFlag = false;
        for (int j = 0; j < minLength; ++j) {
            temp = strs.at(minIndex).at(j);
            for (int i = 0; i < nums; ++i) {
                if (i != minIndex && temp != strs.at(i).at(j)) {
                    oneRoundFlag = false;
                    return prefix;
                }
                oneRoundFlag = true;
            }
            if (oneRoundFlag) {
                prefix += temp;
            }

        }

        return prefix;
    }

    int shortestLength(vector<string>& strs) {
        int min = strs.at(0).size();
        for (int i = 1; i < strs.size(); ++i) {
            if (min > strs.at(i).size()) {
                min = strs.at(i).size();
            }
        }
        return min;
    }

};


int main() {
    std::cout << "Hello, World!" << std::endl;

//    vector<string> test = {"flower","flow","flight"};
    vector<string> test = {"ca","a"};
    Solution a;
    cout << a.longestCommonPrefix(test) << endl;



    return 0;
}