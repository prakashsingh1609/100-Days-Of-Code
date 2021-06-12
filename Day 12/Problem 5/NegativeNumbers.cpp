class Solution
{
public:
    int countNegatives(vector<vector<int>> &grid)
    {
        int ans = 0;
        for (vector<int> &row : grid)
            for (int &i : row)
                if (i < 0)
                    ans++;
        return ans;
    }
};