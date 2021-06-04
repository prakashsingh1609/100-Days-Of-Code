class Solution
{
public:
    bool isMonotonic(vector<int> &nums)
    {
        vector<int> temp = nums;
        sort(nums.begin(), nums.end());
        vector<int> temp1 = nums;
        reverse(nums.begin(), nums.end());
        vector<int> temp2 = nums;
        if (temp == temp1 or temp == temp2)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};