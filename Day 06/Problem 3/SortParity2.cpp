class Solution
{
public:
    vector<int> sortArrayByParityII(vector<int> &nums)
    {
        vector<int> odd;
        vector<int> even;
        vector<int> ans;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] % 2 == 0)
            {
                even.push_back(nums[i]);
            }
            else
            {
                odd.push_back(nums[i]);
            }
        }
        for (int i = 0; i < nums.size() / 2; i++)
        {
            ans.push_back(even[i]);
            ans.push_back(odd[i]);
        }
        return ans;
    }
};