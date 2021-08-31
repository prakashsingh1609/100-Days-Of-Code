class Solution
{
public:
int subsetXORSum(vector <int>&nums)
{

    vector<int> v = {0};

    if (nums.size() == 1)
    {
        for (auto i : nums)
        {
            v.push_back(i);
        }
    }
    else if (nums.size() > 2)
    {
        vector<int> temp;
        for (auto &&i : nums)
        {
            temp = v;
            for (int j = 0; j < temp.size(); j++)
            {
                temp[j] ^= i;
            }
            for (int k : temp)
            {
                v.push_back(k);
            }
        }
    }
    else
    {
        for (auto &&i : nums)
        {
            v.push_back(i);
        }

        int cont_1 = 0;
        for (auto &&i : nums)
        {
            cont_1 ^= i;
        }
        v.push_back(cont_1);
    }

    int ans = accumulate(v.begin(), v.end(), 0);
    return ans;
}
};