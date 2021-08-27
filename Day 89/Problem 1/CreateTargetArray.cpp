class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
         vector<int> target;
        for(int i = 0; i<nums.size(); i++){
            target.insert(target.begin()+index[i], nums[i]);
        }
        return target;
    }
};
class Solution {
public:
int balancedStringSplit(string s) {
int counter=0,res=0;
for(int i=0;i<s.size();i++)
{
if(s[i] == 'R')
{
counter++;
}
else
{
counter--;
}

    if(counter == 0)
    {
        res++;
    }

        
    }
    return res;
    
}
};
