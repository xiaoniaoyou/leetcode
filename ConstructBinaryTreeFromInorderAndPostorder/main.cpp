#include <iostream>
#include <vector>

using namespace std;


struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};


class Solution {
public:
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        helper(inorder, 0, inorder.size(), postorder, 0, postorder.size());
    }

    TreeNode* helper(vector<int>& inorder, int i, int j, vector<int>& postorder, int ii, int jj) {
        if (i >= j || ii >= jj) return NULL;
        int mid = postorder[jj-1];
        auto f = std::find(inorder.begin()+i, inorder.begin()+j, mid);
        int dis = f - inorder.begin() - i;
        TreeNode* root = new TreeNode(mid);
        root->left = helper(inorder, i, i+dis, postorder, ii, ii + dis);
        root->right = helper(inorder, i+dis+1, j, postorder, ii+dis, jj-1);
        return root;
    }

};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}