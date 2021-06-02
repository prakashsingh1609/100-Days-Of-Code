class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int m = accounts.size();
        int n = accounts[0].size();
        vector<int> v;
        for(int i=0;i<m;i++){
            int sum = 0;
            sum = accumulate(accounts[i].begin(), accounts[i].end(), 0);
            v.push_back(sum);
        }
        return *max_element(v.begin(),v.end());

    }
};