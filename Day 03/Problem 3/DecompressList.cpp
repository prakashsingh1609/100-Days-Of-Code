class Solution
{
public:
    vector<int> decompressRLElist(vector<int> &nums)
    {
        vector<int> ans;
        pair<int, int> p;
        for (int i = 0; i < nums.size() - 1; i += 2)
        {
            p.first = nums[i];
            p.second = nums[i + 1];
            for (auto it = 0; it < p.first; it++)
            {
                ans.push_back(p.second);
            }
        }
        return ans;
    }
};