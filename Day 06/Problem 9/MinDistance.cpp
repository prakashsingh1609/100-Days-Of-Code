class Solution
{
public:
    int getMinDistance(vector<int> &nums, int target, int start)
    {
        //auto it = lower_bound(nums.begin(),nums.end(),target);
        vector<int> v;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == target)
            {
                v.push_back(abs(i - start));
            }
        }
        return *min_element(v.begin(), v.end());
    }
};