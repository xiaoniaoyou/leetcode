#include <iostream>
#include <unordered_map>

using namespace std;

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> cmpLeft;
        unordered_map<char, char> cmpRight;
        for (int i = 0; i < s.size(); ++i) {
            if (cmpLeft.find(s.at(i)) == cmpLeft.end()) {
                cmpLeft.insert({s.at(i), t.at(i)});
                continue;
            } else {
                if (cmpLeft.at(s.at(i)) != t.at(i)) {
                    return false;
                }
            }
        }

        for (auto x : cmpLeft) {
            cmpRight.insert({x.second, x.first});
        }


        for (int j = 0; j < s.size(); ++j) {
            if (cmpRight.at(cmpLeft.at(s.at(j))) != s.at(j) ) return false;
        }

        return true;
    }
};


class abc {
    void f() {cout << "Hello" << endl;};
    void g();
    int x;
};

class abcd {
public:
    static int x;
    int i;

    abcd() {
        i = ++x;
    }
};
int abcd::x;


class abcde {

public:
    int i;

    abcde(int i) {
        i = i;
    }
};



int main() {
    std::cout << "Hello, World!" << std::endl;
    string test1 = "ac";
    string test2 = "ac";

    Solution a;
    cout << a.isIsomorphic(test1, test2) << endl;

    cout<< "Here:" << sizeof(abc)<<endl;
//    abc b;
//    cout << b.x << endl;

//    abcd m, n, p;
//    cout<<m.x<<" "<<m.i<<endl;


    abcde mm(5);
    cout << mm.i << endl;

    return 0;
}