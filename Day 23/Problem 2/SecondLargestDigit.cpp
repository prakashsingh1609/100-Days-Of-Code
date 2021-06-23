class Solution
{
public:
    int secondHighest(string s)
    {
        set<int> set;
        vector<int> v;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] >= 48 and s[i] <= 57)
            {
                set.insert(s[i] - '0');
            }
        }
        if (set.size() == 1 || set.size() == 0)
        {
            return -1;
        }
        else
        {
            for (auto it : set)
            {
                v.push_back(it);
            }
            return v[v.size() - 2];
        }
    }
};