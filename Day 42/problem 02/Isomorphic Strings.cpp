// { Driver Code Starts
// C++ program to check if two strings are isomorphic
#include<iostream>
#include<string.h>

using namespace std;
#define MAX_CHARS 256

bool areIsomorphic(string, string);

// Driver program
int main()
{
    int t;
    cin>>t;
    string s1,s2;
    while (t--) {
        cin>>s1;
        cin>>s2;
        cout<<areIsomorphic(s1,s2)<<endl;
    }
    
    return 0;
}// } Driver Code Ends


// This function returns true if str1 and str2 are ismorphic
// else returns false
bool areIsomorphic(string str1, string str2)
{
 if(str1.length()!=str2.length())
     return false;
int a[256]={0};
int b[256]={0};
for(int i=0;i<str1.length();i++)
{ 
    if(a[str1[i]]!=b[str2[i]])
    {
       return false; 
    }
     a[str1[i]]++;
     b[str2[i]]++;
}
 return true;
}
