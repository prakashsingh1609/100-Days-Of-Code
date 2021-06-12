class Solution
{
public:
    int repeatedNTimes(vector<int> &nums)
    {
        int a = 0;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == nums[i + 1])
            {
                a = nums[i];
                break;
            }
        }
        return a;
    }
};