#include <iostream>

using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

int minDepth(TreeNode* root) {
    if(!root)
        return 0;

    if(!root->left && !root->right)
        return 1;

    if(root->left && root->right)
        return 1+min(minDepth(root->left),minDepth(root->right));

    else if(root->left)
        return 1+minDepth(root->left);
        
    else
        return 1+minDepth(root->right);
}
