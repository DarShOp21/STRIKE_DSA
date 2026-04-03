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
    void addLeaf(TreeNode* root , int& count){

        if(!root->left && !root->right)
            count++;

        if(root->left)
            addLeaf(root->left , count);

        if(root->right)
            addLeaf(root->right , count);
    }

    int countLeaves(TreeNode* root) {
        if(!root)
            return 0;

        int count = 0; 

        addLeaf(root,count);

        return count;   
    }
};
