class Solution
{
public:
    bool uniqueOccurrences(vector<int> &arr)
    {
        map<int, int> m;
        vector<int> v;
        for (int i = 0; i < arr.size(); i++)
        {
            m[arr[i]]++;
        }
        for (auto it = m.begin(); it != m.end(); ++it)
        {
            v.push_back(it->second);
        }
        sort(v.begin(), v.end());
        for (int i = 0; i < v.size() - 1; i++)
        {
            if (v[i] == v[i + 1])
            {
                return false;
            }
        }
        return true;
    }
};