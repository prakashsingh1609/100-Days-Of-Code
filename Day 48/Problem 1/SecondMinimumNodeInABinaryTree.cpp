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
    void ans(TreeNode* root,set<int>&s){
        if(!root)return;
        ans(root->left,s);
        s.insert(root->val);
        ans(root->right,s);
    }
    int findSecondMinimumValue(TreeNode* root) {
        set<int>s;
        ans(root,s);
        int c=0,b;
        if(s.size()==1)return -1;
        for(auto it:s){
            c++;
            if(c==2){
                b=it;
                break;
            }
        }
        return b;
    }
};