class Solution
{
public:
    int maximumProduct(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        vector<int> ans;
        ans.push_back(nums[0] * nums[1] * nums[2]);
        ans.push_back(nums[nums.size() - 1] * nums[nums.size() - 2] * nums[nums.size() - 3]);
        ans.push_back(nums[0] * nums[1] * nums[nums.size() - 1]);
        return *max_element(ans.begin(), ans.end());
    }
};