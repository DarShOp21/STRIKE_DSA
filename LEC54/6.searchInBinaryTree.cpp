#include <iostream>

using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

TreeNode* searchBST(TreeNode* root, int val) {
    if(!root || (root->val == val))
        return root;
    
    TreeNode* leftNode = searchBST(root->left , val);
    if(leftNode)
        return leftNode;

    return searchBST(root->right , val);
}
