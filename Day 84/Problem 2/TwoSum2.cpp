class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
       
        vector<int>v;
        int n=numbers.size();
        int i=0;int j=n-1;
        while(i<j)
        {
            if(numbers[i]+numbers[j]==target)
            {
                v.push_back(i+1);
                v.push_back(j+1);
                break;
            }
            else if(numbers[i]+numbers[j]<target)
                i++;
            else
                j--;
        }
        return v;
    }
};