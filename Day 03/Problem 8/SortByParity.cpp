class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int>a;
        vector<int>b;
        //sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0){
                a.push_back(nums[i]);
            }
            else{
                b.push_back(nums[i]);
            }
        }
        for(int i=0;i<b.size();i++){
            a.push_back(b[i]);
        }
        return a;
    }
};