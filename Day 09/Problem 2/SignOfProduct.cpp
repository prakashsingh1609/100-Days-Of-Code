class Solution
{
public:
    int arraySign(vector<int> &nums)
    {
        int c = 0, d = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] < 0)
            {
                c++;
            }
            if (nums[i] == 0)
            {
                d++;
            }
        }
        if (d != 0)
        {
            return 0;
        }
        else
        {
            if (c % 2 == 0)
            {
                return 1;
            }
            else
            {
                return -1;
            }
        }
    }
};