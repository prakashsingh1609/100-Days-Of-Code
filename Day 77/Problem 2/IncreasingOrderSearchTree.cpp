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
    TreeNode * last;
    void solve(TreeNode * &move, TreeNode* root){
        if(!root)return;
        if(root->left !=NULL){
          solve(move, root->left);
        }
        move->val = root->val;
        move->right = new TreeNode();
        last = move;
        move = move->right;   
        if(root->right!=NULL){
          solve(move, root->right);    
        }            
    }
    TreeNode* increasingBST(TreeNode* root) {
        TreeNode *move=new TreeNode();
        TreeNode *res=move;
        solve(move, root);
        delete (last->right);
        last->right = NULL;
        return res;
    }
};