class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        for(int i=0,n=nums.size();i<n;nums.push_back(nums[i]),i++);        
        return nums;
    }
};