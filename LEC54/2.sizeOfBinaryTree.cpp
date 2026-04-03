#include <iostream>

using namespace std;

class TreeNode {
  public:
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class Solution {
  public:
    int sizeOfBinaryTree(TreeNode* root) {
        if(!root)
            return 0;
        
        return 1+sizeOfBinaryTree(root->left)+sizeOfBinaryTree(root->right);
    }
};
