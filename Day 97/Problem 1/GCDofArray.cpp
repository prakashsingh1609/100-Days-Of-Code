class Solution {
public:
    int findGCD(vector<int>& nums) {
        int small=nums[0],big=nums[0];
        for (int i=1;i<nums.size();i++) {
            if (small>nums[i]) small=nums[i];
            if (big<nums[i]) big = nums[i];
        }
        while (big%small!=0) {
            int buf = big%small;
            big = small;
            small=buf;
        }
        return small;
    }
};