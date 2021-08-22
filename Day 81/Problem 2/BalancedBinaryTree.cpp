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
    bool result = true;
     int differenceheight(TreeNode* p)
    {
        int x,y;
        if(p)
        {
            int x=differenceheight(p->left);
            int y=differenceheight(p->right);
            if(abs(x-y)>1)
                result=false;
            if(x>y)
                return  x+1;
            else 
                return y+1;
        }
        return 0;
    }
    bool isBalanced(TreeNode* root) 
    {
        differenceheight(root);
        return result;
        
    }
};