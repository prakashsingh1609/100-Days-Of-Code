void pathsUtil(Node* root,vector<vector<int>>&v,vector<int>&curr){
     if(!root)return;
     curr.push_back(root->data);
     if(!root->left && !root->right){
         v.push_back(curr);
     }
     pathsUtil(root->left,v,curr);
     pathsUtil(root->right,v,curr);
     curr.pop_back();
 }
int kthAncestor(Node *root, int k, int node)
{
    // Code here
    vector<vector<int>>v,res;
    vector<int>curr;
    pathsUtil(root,v,curr);
    
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[i].size();j++){
            if(v[i][j]==node){
                res.push_back(v[i]);
            }
        }
    }
    vector<int>ans;
    for(int i=0;i<res[0].size();i++){
        if(res[0][i]==node)break;
        ans.push_back(res[0][i]);
    }
    for(int i=ans.size()-1;i>=0;i--){
        k--;
        if(k==0)return ans[i];
    }
    return -1;
    
}
