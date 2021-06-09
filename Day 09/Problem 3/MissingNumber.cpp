class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        int missing = 0;
        for (int i = 0; i < nums.size(); ++i)
            missing ^= ((i + 1) ^ nums[i]);
        return missing;
    }
};