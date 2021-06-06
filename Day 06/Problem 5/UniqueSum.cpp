class Solution
{
public:
    int sumOfUnique(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        if (nums.size() > 1 and nums[0] == nums[nums.size() - 1])
        {
            return 0;
        }
        else if (nums.size() == 1)
        {
            return nums[0];
        }
        else
        {
            vector<int> ans;
            for (int i = 0; i < nums.size(); i++)
            {
                auto it1 = lower_bound(nums.begin(), nums.end(), nums[i]);
                auto it2 = upper_bound(nums.begin(), nums.end(), nums[i]);
                if (it2 - it1 == 1)
                {
                    ans.push_back(nums[i]);
                }
            }
            int sum = accumulate(ans.begin(), ans.end(), 0);
            return sum;
        }
    }
};