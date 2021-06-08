class Solution
{
public:
    string restoreString(string s, vector<int> &indices)
    {
        map<int, char> m;
        for (int i = 0; i < indices.size(); i++)
        {
            m.insert({indices[i], s[i]});
        }
        string st = "";
        for (auto it = m.begin(); it != m.end(); ++it)
        {
            st = st + (*it).second;
        }
        return st;
    }
};