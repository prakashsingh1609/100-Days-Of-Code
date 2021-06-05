class Solution
{
public:
    int minOperations(vector<int> &nums)
    {
        int cnt = 0;
        pair<int, int> p;
        for (auto it = nums.begin(); it != nums.end() - 1; ++it)
        {
            // if((*it)>=*(it+1)){
            //   *(it+1) = *(it+1) + 1;
            // cnt++;
            //it = nums.begin();
            p = make_pair(*it, *(it + 1));
            if (p.second <= p.first)
            {
                cnt = cnt + abs(p.first - p.second) + 1;
                *(it + 1) = *(it + 1) + abs(p.first - p.second) + 1;
            }
        }
        return cnt;
    }
};