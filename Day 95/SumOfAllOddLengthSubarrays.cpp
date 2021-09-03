class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
int n = arr.size();
int sum = 0;
for(int i=0;i<n;i++)
{
int x=0;
x = ((i+1)*(n-i)); 
if(x%2 != 0)
x = x/2 +1;
else
x = x/2;
sum += arr[i]*x ;
}
return sum;
}
};