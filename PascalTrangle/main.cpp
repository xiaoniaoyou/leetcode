#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res;
        if (numRows < 1) return res;
        vector<int> thRows = {1};
        res.push_back(thRows);

        for (int i = 1; i < numRows; ++i) {
            thRows.clear();
            thRows.push_back(1);
            for (int j = 1; j < i; ++j) {
                thRows.push_back(res[i - 1][j-1] + res[i - 1][j]);
            }
            thRows.push_back(1);
            res.push_back(thRows);
        }
        return res;
    }

//    vector<int> getRow(int rowIndex) {
//        vector<vector<int>> res;
//        if (rowIndex < 1) return {};
//        vector<int> thRows = {1};
//        res.push_back(thRows);
//
//        for (int i = 1; i < rowIndex; ++i) {
//            thRows.clear();
//            thRows.push_back(1);
//            for (int j = 1; j < i; ++j) {
//                thRows.push_back(res[i - 1][j-1] + res[i - 1][j]);
//            }
//            thRows.push_back(1);
//            res.push_back(thRows);
//        }
//        return res[rowIndex-1];
//    }

    vector<int> getRow(int rowIndex) {
        vector<int> vi(rowIndex + 1);
        vi[0] = 1;
        for (int i = 0; i <= rowIndex; ++i) {
            for (int j = i; j > 0; --j) {
                vi[j] = vi[j] + vi[j-1];
            }
        }
        return vi;
    }



};

void printRes(vector<vector<int>> &res) {
    for (int i = 0; i < res.size(); ++i) {
        cout << "[";
        for (int j = 0; j < res[i].size(); ++j) {
            cout << res[i][j];
            if (j != res[i].size()) cout << ",";
        }
        cout << "]," << endl;
    }


}


int main() {
    std::cout << "Hello, World!" << std::endl;
    vector<vector<int>> test;
    Solution a;
    test = a.generate(10);
    printRes(test);


    return 0;
}