class Solution
{
public:
    int findNumbers(vector<int> &nums)
    {
        int cnt = 0;
        for (auto i = nums.begin(); i < nums.end(); i++)
        {
            int a = 0;
            while ((*i) > 0)
            {
                (*i) = (*i) / 10;
                a++;
            }
            if (a % 2 == 0)
            {
                cnt++;
            }
        }
        return cnt;
    }
};