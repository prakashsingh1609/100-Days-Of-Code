class Solution
{
public:
    string replaceDigits(string s)
    {
        for (auto i = 1; i < s.length(); i = i + 2)
        {
            s[i] = s[i - 1] + s[i] - '0';
        }
        return s;
    }
};
