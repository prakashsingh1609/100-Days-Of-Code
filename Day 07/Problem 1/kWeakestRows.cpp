class Solution
{
public:
    vector<int> kWeakestRows(vector<vector<int>> &mat, int k)
    {
        multimap<int, int> m;
        vector<int> v;
        for (int i = 0; i < mat.size(); i++)
        {
            int sum = accumulate(mat[i].begin(), mat[i].end(), 0);
            m.insert({sum, i});
        }
        auto it = m.begin();
        while (k > 0 and it != m.end())
        {
            v.push_back(it->second);
            k--;
            it++;
        }
        return v;
    }
};