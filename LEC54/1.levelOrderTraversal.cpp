#include <iostream>
#include <vector>
#include <queue>


using namespace std;

class TreeNode {
  public:
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};


vector<vector<int>> levelOrder(TreeNode* root) {

    vector<vector<int>>ans;
    if(!root)
        return ans;

    queue<TreeNode*>q;
    q.push(root);

    while(!q.empty()){
        int len = q.size();
        vector<int>result;

        while(len--){
            TreeNode* temp = q.front();
            q.pop();

            result.push_back(temp->val);

            if(temp -> left)
                q.push(temp->left);

            if(temp -> right)
                q.push(temp -> right);
        }

        ans.push_back(result);
    }

    return ans;
}
