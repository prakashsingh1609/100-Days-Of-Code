class Solution
{
public:
    int mySqrt(int x)
    {
        int a = sqrt(x);
        if (a * a == x)
        {
            return a;
        }
        else
        {
            return floor(a);
        }
    }
};