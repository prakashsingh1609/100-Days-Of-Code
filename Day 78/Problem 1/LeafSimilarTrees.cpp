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
    vector<int> fun(TreeNode * root){
        vector<int> v;
        stack<TreeNode *> st;
        while(st.size() || root){
            while(root){
                st.push(root);
                root=root->left;
            }
            root=st.top(); st.pop();
            if(!root->left && !root->right) v.push_back(root->val);
            root=root->right;
        }
        return v;
        
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> a=fun(root1);
        vector<int> b=fun(root2);
        return a==b;
    }
};