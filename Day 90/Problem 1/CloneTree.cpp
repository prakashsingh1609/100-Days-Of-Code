class Solution {
public:
    void dfs(TreeNode* original,TreeNode* target,string path,string& targetPath)
    {
        if(!original)
            return;
        if(target==original)
        {
            targetPath=path;
            return;
        }
        dfs(original->left,target,path+"l",targetPath);
        dfs(original->right,target,path+"r",targetPath);
    }
    
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        string targetPath="";
        dfs(original,target,"",targetPath);
        TreeNode* ref=cloned;
        for(int i=0;i<targetPath.size();i++)
            targetPath[i]=='l'?ref=ref->left:ref=ref->right;
        return ref;
    }
};