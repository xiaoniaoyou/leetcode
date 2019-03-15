#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> record;
        for (int i = 0; i < s.size(); ++i) {
            if (record.find(s.at(i)) != record.end()) {
                ++ record[s.at(i)];
            } else {
                record.insert({s.at(i), 1});
            }
        }

        for (int j = 0; j < t.size(); ++j) {
            if (record.find(t.at(j)) == record.end()) {
                return false;
            } else {
                -- record[t.at(j)];
            }
        }

        for (auto x : record) {
            if (x.second != 0) {
                return false;
            }
        }

        return true;
    }
};

//! 922
class SolutionA {
public:
    vector<int> sortArrayByParityII(vector<int>& A) {
        vector<int> odd, even, res;
        for (int i = 0; i < A.size(); ++i) {
            if (A.at(i) % 2 == 0) {
                even.push_back(A.at(i));
            } else {
                odd.push_back(A.at(i));
            }

        }

        for (int i = 0; i < A.size(); ++i) {
            if (i % 2 == 0) {
                res.push_back(even.back());
                even.pop_back();
            } else {
                res.push_back(odd.back());
                odd.pop_back();
            }
        }


        return res;

    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    Solution a;
    string s = "anagram";
    string t = "nagaram";
    cout << a.isAnagram(s, t) << endl;

    cout << "----\n";
    SolutionA aa;
    vector<int> test = {4, 2, 5, 7};
    vector<int> result = aa.sortArrayByParityII(test);
    for (int i = 0; i < result.size(); ++i) {
        cout << result.at(i) << endl;
    }


    return 0;
}