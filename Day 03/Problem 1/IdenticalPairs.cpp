class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        vector<pair<int,int>>p;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]==nums[j]){
                    p.push_back({i,j});
                }
            }
        }        
        return p.size();
    }
};