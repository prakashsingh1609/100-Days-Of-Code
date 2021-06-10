class Solution
{
public:
    int arrangeCoins(int n)
    {
        long long i = 1, c = 0;
        int ans = 0;
        while (true)
        {
            if (n > c)
            {
                c = c + i;
                ans++;
            }
            else
            {
                if (c == n)
                {
                    return ans;
                }
                else
                {
                    return ans - 1;
                }
            }
            i++;
        }
    }
};