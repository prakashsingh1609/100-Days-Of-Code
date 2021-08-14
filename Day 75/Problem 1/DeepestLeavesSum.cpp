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
int deepestLeavesSum(TreeNode* root) {
        queue<TreeNode*> qu;
        qu.push(root);
        int sum=0;
        while(!qu.empty())
        {
            int s=qu.size();
            sum=0;
            while(s--)
            {
                TreeNode* temp=qu.front();
                qu.pop();
                sum+=temp->val;
                if(temp->left)qu.push(temp->left);
                if(temp->right)qu.push(temp->right);
            }
        }
        return sum;
    }
};