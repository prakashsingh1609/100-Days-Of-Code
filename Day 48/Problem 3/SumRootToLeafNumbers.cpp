class Solution {
public:
    void ans(TreeNode* root,vector<int>&v,string s){
        if(!root)return;
        s=s+to_string(root->val);
        if(!root->left && !root->right){
            v.push_back(stoi(s));
            return;
        }
        ans(root->left,v,s);
        ans(root->right,v,s);
    }
    int sumNumbers(TreeNode* root) {
        vector<int>v;
        string s = "";
        ans(root,v,s);
        return accumulate(v.begin(),v.end(),0);
    }
};