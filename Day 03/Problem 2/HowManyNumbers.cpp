class Solution
{
public:
    vector<int> smallerNumbersThanCurrent(vector<int> &nums)
    {
        vector<int> a;
        int b = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            b = 0;
            for (int j = 0; j < nums.size(); j++)
            {
                if (i != j and nums[i] > nums[j])
                {
                    b++;
                }
            }
            a.push_back(b);
        }
        return a;
    }
};