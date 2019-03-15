#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        int length = s.size();
        int number = 0;
        vector<int> nums;
        int i = 0;
        for(int i = 0; i < length; ++i) {
            switch (s.at(i)) {
                case 'I':
                    number = 1;
                    if (i+1 < length) {
                        switch (s.at(i+1)) {
                            case 'V':
                                number = 4;
                                i += 1;
                                break;
                            case 'X':
                                number = 9;
                                i += 1;
                                break;

                        }
                    }
                    cout << "-->" << i << "," << s.at(i) << endl;
                    nums.push_back(number);
                    break;

                case 'V':
                    number = 5;
                    nums.push_back(number);
                    break;

                case 'X':
                    number = 10;
                    if (i+1 < length) {
                        switch (s.at(i+1)) {
                            case 'L':
                                number = 40;
                                i += 1;
                                break;
                            case 'C':
                                number = 90;
                                i += 1;
                                break;

                        }
                    }
                    nums.push_back(number);
                    break;

                case 'L':
                    number = 50;
                    nums.push_back(number);
                    break;

                case 'C':
                    number = 100;
                    if (i+1 < length) {
                        switch (s.at(i+1)) {
                            case 'D':
                                number = 400;
                                i += 1;
                                break;
                            case 'M':
                                number = 900;
                                i += 1;
                                break;

                        }
                    }
                    nums.push_back(number);
                    break;

                case 'D':
                    number = 500;
                    nums.push_back(number);
                    break;

                case 'M':
                    number = 1000;
                    nums.push_back(number);
                    break;

            }

        }

        int sum = 0;
        for(int j = 0; j < nums.size(); ++j) {
            cout << nums[j] << "," << endl;
            sum += nums[j];
        }


        return sum;
    }


    int romanToInt1(string s)
    {
        unordered_map<char, int> T = { { 'I' , 1 },
                                       { 'V' , 5 },
                                       { 'X' , 10 },
                                       { 'L' , 50 },
                                       { 'C' , 100 },
                                       { 'D' , 500 },
                                       { 'M' , 1000 } };

        int sum = T[s.back()];
        for (int i = s.length() - 2; i >= 0; --i)
        {
            if (T[s[i]] < T[s[i + 1]])
            {
                cout << "-" << s[i] << "," << T[s[i]] << endl;
                sum -= T[s[i]];
            }
            else
            {
                cout << "+" << s[i] << "," << T[s[i]] << endl;
                sum += T[s[i]];
            }
        }

        return sum;
    }
};


int main() {
    std::cout << "Hello, World!" << std::endl;
    string test = "MCMXCIV";
//    string test = "LV";
    cout << test << endl;
//    cout << test.back() << endl;

    Solution a;
    cout << a.romanToInt1(test) << endl;

    return 0;
}