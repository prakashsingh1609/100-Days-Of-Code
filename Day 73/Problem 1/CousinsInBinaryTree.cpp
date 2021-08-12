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
     int check(TreeNode* root, int value,int &parent,int height)
    {
        if(root==NULL)
            return 0;
        if(root->val==value)
        {
            return height;
        }
        parent=root->val;
        int left=check(root->left,value,parent,height+1);
        if(left!=NULL)
            return left;
        parent=root->val;
        int right=check(root->right,value,parent,height+1);
        return right;
        
    }
    bool isCousins(TreeNode* root, int x, int y) {
    if(root==NULL)
        return false;
    if(root->val==x || root->val==y)
        return false;
    int parent=-1;
    int xheight=check(root,x,parent,0);
        
    int yparent=-1;
    int yheight=check(root,y,yparent,0);
    if(xheight==yheight && parent!=yparent)
    {
        return true;
    }
    else
    {
        return false;
    }
        
    }
};