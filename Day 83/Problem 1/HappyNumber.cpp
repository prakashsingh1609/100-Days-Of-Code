class Solution {
public:
    bool isHappy(int n) 
{
	if(n==1)
		return true;
	unordered_set<int> s;
	int sum=0;
	while(!(n==1))
	{
		if(s.find(n)==s.end())
		s.insert(n);
		else
		return false;
		sum=0;
		while(n>0)
		{
		sum+=pow(n%10,2);
		n=n/10;
		}
		n=sum;
	}
	return true;
}
};