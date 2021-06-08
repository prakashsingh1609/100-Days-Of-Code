class Solution
{
public:
    int subtractProductAndSum(int n)
    {
        vector<int> v;
        while (n > 0)
        {
            int rem = n % 10;
            v.push_back(rem);
            n /= 10;
        }
        int pro = 1;
        int product = accumulate(v.begin(), v.end(), pro, multiplies<int>());
        int sum = accumulate(v.begin(), v.end(), 0);
        return product - sum;
    }
};