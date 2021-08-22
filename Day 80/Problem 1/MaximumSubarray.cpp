class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=nums[0],res=nums[0];
        for (int i=1;i<nums.size();++i) {
            if (sum<0) sum=0;
            sum+=nums[i];
            if (sum>res) res = sum;
        }
        return res;
    }
};