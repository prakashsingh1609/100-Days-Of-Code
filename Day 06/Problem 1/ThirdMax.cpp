class Solution {
public:
    int thirdMax(vector<int>& nums) {
        vector<int>v;
        sort(nums.begin(),nums.end());
        reverse(nums.begin(),nums.end());
        v.push_back(nums[0]);
        for(int i=1;i<nums.size();i++){
            if(v[v.size()-1]!=nums[i]){
                v.push_back(nums[i]);
            }
        }
        //return v.size();
        if(v.size()<3){
            int h=*max_element(v.begin(),v.end());
            return h;
        }
        return v[2];
    }
};