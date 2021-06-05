class Solution {
public:
    void sortColors(vector<int>& nums) {
        //sort(nums.begin(),nums.end());
        auto it = nums.begin();
        int zero=0,one=0,two=0;
        while(it!=nums.end()){
            if(*it==0){
                zero++;
            }
            else if(*it==1){
                one++;
            }
            else{
                two++;
            }
            ++it;
            
        }
        vector<int>ans(zero,0);
        for(int j=0;j<one;j++)
        {
            ans.push_back(1);
        }
        for(int j=0;j<two;j++)
        {
            ans.push_back(2);
        }
        nums = ans;
    }
};