#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;


class Solution {
    void backtrack(string &s, int i, vector<string> &res) {
        if (i == s.size()) {
            res.push_back(s);
            return;
        }
        backtrack(s, i + 1, res);
        if (isalpha(s[i])) {
            s[i] ^= 32;
            backtrack(s, i + 1, res);
        }

    }

public:
    vector<string> letterCasePermutation(string S){
        vector<string> res;
        backtrack(S, 0, res);
        return res;
    }

};



//class Solution {
//public:
//    vector<string> letterCasePermutation(string S) {
//        vector<string> res;
//        unordered_map<int, char> record;
//        for (int i = 0; i < S.size(); ++i) {
//            if (S[i] >= 'a' && S[i] <= 'z' || (S[i] >= 'A' && S[i] <= 'Z')) {
//                record.insert({i, S[i]});
//            }
//
//            if ((S[i] >= 'a' && S[i] <= 'z') || (S[i] >= 'A' && S[i] <= 'Z')) {
//                res.push_back(temp);
//                temp.at(i) = S.at(i) - 'A' + 'a';
//                res.push_back(temp);
//
//            }
//        }
//
//        for
//
//
//
//    }
//};


int main() {
    std::cout << "Hello, World!" << std::endl;

    char a = 'b';
//    a ^= 32;
    a ^= 32;
    cout << a << endl;

//    cout << std::isalnum(a) << endl;
    return 0;
}