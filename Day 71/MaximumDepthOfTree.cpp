/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
      int result = INT_MIN;
    void solve(TreeNode*& root,int i)
    {
        if(root == nullptr)
            return;
        if(root->left == nullptr && root->right == nullptr)
        {
            result = max(result,i+1);
        }
        solve(root->left,i+1);
        solve(root->right,i+1);
    }
    int maxDepth(TreeNode* root) {
        solve(root,0);
        return result==INT_MIN?0:result;
    }
};