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
    bool checkLeaf(TreeNode *root)
{
    if(root == NULL)
        return false;
    if(!root->left and !root->right)
        return true;
    return false;
}
int sumOfLeftLeaves(TreeNode* root) {
    int res = 0;
    
    if(root != NULL)
    {
        if(checkLeaf(root->left))
            res += root->left->val;
        else
            res += sumOfLeftLeaves(root->left);
        res += sumOfLeftLeaves(root->right);
            
    }
    
    return res;
}
};