// { Driver Code Starts Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


//User function Template for C++

// Function to check power of two
bool isPowerofTwo(long long n){
    // if a number N is a power of 2 then bitwise-AND(&) of N and N-1 will be zero.
    // Your code here   
  long long  int arr[100000];
  int count=0;
for(int i=0;n>0;i++){
    arr[i]=n%2;
    n=n/2;
    if(arr[i]==1){
        count++;
    }
}
if(count==1)
{
    return 1;
}
else{
    return 0;
}
}

// { Driver Code Starts.

// Driver code
int main()
{

    int t;
    cin>>t;//testcases

    for(int i=0;i<t;i++)
    {
        long long n; //input a number n
        cin>>n;
        if(n<=0) // if n is less than equal to zero then it can't be a power of 2
        {
            cout<<"NO"<<endl; //so we print No
            continue; //continue and check for other values
        }

         if(isPowerofTwo(n))//Now, if log2 produces an integer not decimal then we are sure raising 2 to this value
             cout<<"YES"<<endl;
         else
            cout<<"NO"<<endl;

    }

    return 0;
}
  // } Driver Code Ends
