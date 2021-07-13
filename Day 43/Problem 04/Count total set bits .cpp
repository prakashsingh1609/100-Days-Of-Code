// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


//User function Template for C++

// Function to count set bits in the given number x
// n: input to count the number of set bits

int countSetBits(int n)
{
    // Your logic here
   


int res=(n+1)/2, num=2, denom=4;
while((n+1)/denom > 0)
{
int tmp = (n+1)%denom - num;
res+= ((n+1)/denom)*num + (tmp>=0?tmp:0);
denom*=2;
num*=2;
}
res+=((n+1)%denom - num);
return res;
  
}



// { Driver Code Starts.

// Driver code
int main()
{
	 int t;
	 cin>>t;// input testcases
	 while(t--) //while testcases exist
	 {
	       int n;
	       cin>>n; //input n
	       
	       cout << countSetBits(n) << endl;// print the answer
	  }
	  return 0;
}
  // } Driver Code Ends
