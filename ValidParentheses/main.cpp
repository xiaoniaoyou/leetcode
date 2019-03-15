#include <iostream>
#include <stack>
#include <queue>

using namespace std;

//class Solution {
//public:
//    bool isValid(string s) {
//        stack<char> leftStack;
//        queue<char> rightQueue;
//        int length = s.size();
//        for(int i = 0; i < length; ++i) {
//            if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
//                leftStack.push(s.at(i));
//                cout << "++" << s.at(i) << endl;
//            }
//            if (s[i] == ')' || s[i] == ']' || s[i] == '}') {
//                rightQueue.push(s.at(i));
//                cout << "--" << s.at(i) << endl;
//
//            }
//        }
//        std::cout << leftStack.size() << "," << rightQueue.size() << endl;
//
//        if (leftStack.size() != rightQueue.size()) {
//            return false;
//        }
//
//
//
//        length = leftStack.size();
//        bool flag = false;
//        for(int i = 0; i < length; ++i) {
//            char left = leftStack.top();
//            char right = rightQueue.front();
//            leftStack.pop();
//            rightQueue.pop();
//            if (left == '(' && right == ')') {
//                flag = true;
//            } else if (left == '[' && right == ']') {
//                flag = true;
//            } else if (left == '{' && right == '}') {
//                flag = true;
//            } else {
//                flag = false;
//            }
//        }
//
//        return flag;
//    }
//};

class Solution {
public:
    bool isValid(string s) {
        stack<char> leftStack;
        queue<char> rightQueue;
        int length = s.size();
        char left;
        for (int i = 0; i < length; ++i) {
            if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
                leftStack.push(s[i]);
                cout << "++" << leftStack.top() << endl;
            }
            if (s[i] == ')' || s[i] == ']' || s[i] == '}') {
                // rightQueue.push(s[i]);
                cout << "--" << s[i] << endl;
                if (!leftStack.empty()) {
                    if (isMatch(leftStack.top(), s[i])) {
                        leftStack.pop();
                        continue;
                    } else {
                        return false;
                    }

                }
            }
        }
        return true;
    }
//            if (leftStack.size() != rightQueue.size()) {
//                return false;
//            }

            // length = leftStack.size();
            // bool flag = false;
            // for(int i = 0; i < length; ++i) {
            //     char left = leftStack.top();
            //     char right = rightQueue.front();
            //     leftStack.pop();
            //     rightQueue.pop();
            //     if (left == '(' && right == ')') {
            //         flag = true;
            //     } else if (left == '[' && right == ']') {
            //         flag = true;
            //     } else if (left == '{' && right == '}') {
            //         flag = true;
            //     } else {
            //         flag = false;
            //     }
            // }

//            return flag;
//        }

        bool isMatch(char left, char right) {
            if (left == '(' && right == ')') {
                return true;
            } else if (left == '[' && right == ']') {
                return true;
            } else if (left == '{' && right == '}') {
                return true;
            } else {
                return false;
            }
        }

    };


int main() {
    std::cout << "Hello, World!" << std::endl;


    Solution a;
    string test = "()[]{}";
    std::cout << a.isValid(test);

    return 0;
}