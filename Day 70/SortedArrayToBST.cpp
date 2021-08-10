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
   // TreeNode* sortedArrayToBST(vector<int>& nums) {
        TreeNode* sortedArrayToBST(vector<int>& nums) {
        int size=nums.size();
        if (size == 0) {
            return nullptr;
        } else if (size == 1) {
            return new TreeNode(nums.at(0));
        }
        return binarySearchTreeCalc(nums, 0, size-1);
    }
    
    TreeNode* binarySearchTreeCalc(vector<int>& nums, const int leftIndex, const int rightIndex) {
       if (leftIndex <= rightIndex) {
           const int middle{(rightIndex+leftIndex)/2};
           TreeNode *t {new TreeNode(nums.at(middle))};
           t->left=binarySearchTreeCalc(nums, leftIndex, middle-1);
           t->right=binarySearchTreeCalc(nums, middle+1, rightIndex);
           return t;
       } else {
           /* all data processed on this sub-tree */
           return nullptr;
       }
    }
   // }
};