#include <iostream>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class Solution {
  public:
    int sumOfBinaryTree(TreeNode* root) {
        if(!root)
            return 0;
        
        return root->val+sumOfBinaryTree(root->left)+sumOfBinaryTree(root->right);
    }
};
