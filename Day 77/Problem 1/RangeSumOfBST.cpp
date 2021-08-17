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
    int rangeSumBST(TreeNode* root, int low, int high) {
        int x,y;
    
    if(root == NULL) return 0;

     x = rangeSumBST(root->left , low , high);
     y = rangeSumBST(root->right , low , high);
        
     if(root->val >= low && root->val <= high) return x+y+root->val;
    else return x+y;
    }
};