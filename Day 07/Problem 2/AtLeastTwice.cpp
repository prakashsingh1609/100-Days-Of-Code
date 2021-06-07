class Solution
{
public:
    int dominantIndex(vector<int> &nums)
    {
        vector<int> v;
        int max = *max_element(nums.begin(), nums.end());
        int it;
        if (nums.size() == 1)
        {
            return 0;
        }
        else
        {
            for (int i = 0; i < nums.size(); i++)
            {
                if (nums[i] == max)
                {
                    it = i;
                }
            }
            for (int i = 0; i < nums.size(); i++)
            {
                if (nums[i] != max)
                {
                    v.push_back(2 * nums[i]);
                }
            }
            sort(v.begin(), v.end());
            if (v[v.size() - 1] > max)
            {
                return -1;
            }
            else
            {
                return it;
            }
        }
    }
};