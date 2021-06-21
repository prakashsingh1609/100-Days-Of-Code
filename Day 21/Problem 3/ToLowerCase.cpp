class Solution
{
public:
    string toLowerCase(string s)
    {
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] >= 65 and s[i] <= 90)
            {
                s[i] = s[i] + 32;
            }
        }
        return s;
    }
};