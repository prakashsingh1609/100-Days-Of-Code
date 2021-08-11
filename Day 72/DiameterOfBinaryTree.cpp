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
int result = 0;
    
    int solve(TreeNode* root)
    {
        // base condtion
        if (root == nullptr) 
            return 0;
        
        // hypothesis
        int l = solve(root->left);
        int r = solve(root->right);
        
        // induction
        int temp = 1 + max(l, r);
        int cur = max(temp, 1 + l + r);
        result = max(result, cur);
        return temp;
    }
    
    int diameterOfBinaryTree(TreeNode* root) 
    {
        solve(root);
        return result - 1;
    }
};