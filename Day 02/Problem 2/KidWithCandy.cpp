class Solution
{
public:
    vector<bool> kidsWithCandies(vector<int> &candies, int extraCandies)
    {
        vector<bool> a;
        for (int i = 0; i < candies.size(); i++)
        {
            int k = candies[i] + extraCandies;
            if (k >= *max_element(candies.begin(), candies.end()))
            {
                a.push_back(true);
            }
            else
            {
                a.push_back(false);
            }
        }
        return a;
    }
};