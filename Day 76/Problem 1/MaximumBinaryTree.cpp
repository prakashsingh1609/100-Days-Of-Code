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
    int findMaxIndex(int left, int right, vector<int> &nums)
{
    int index = -1;
    int maxi = INT_MIN;
    for (int i = left; i <= right; i++)
    {
        if (maxi < nums[i])
        {
            maxi = nums[i];
            index = i;
        }
    }
    return index;
}

TreeNode* BST(vector<int> &nums, int left, int right)
{
    if (left > right)
        return NULL;
    if (left == right)
        return new TreeNode(nums[left]);
    int index = findMaxIndex(left, right, nums);
    TreeNode* root = new TreeNode(nums[index]);
    root->left = BST(nums, left, index - 1);
    root->right = BST(nums, index + 1, right);
    return root;
}

TreeNode* constructMaximumBinaryTree(vector<int>& nums)
{
    return BST(nums, 0, nums.size() - 1);
}
};