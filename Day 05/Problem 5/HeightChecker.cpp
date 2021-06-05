class Solution
{
public:
    int heightChecker(vector<int> &heights)
    {
        vector<int> height = heights;
        vector<int> a;
        sort(heights.begin(), heights.end());
        if (height == heights)
        {
            return 0;
        }
        else
        {
            pair<int, int> p;
            for (int i = 0; i < heights.size(); i++)
            {
                p = make_pair(heights[i], height[i]);
                if (p.first != p.second)
                {
                    a.push_back(i);
                }
            }
            return a.size();
        }
    }
};