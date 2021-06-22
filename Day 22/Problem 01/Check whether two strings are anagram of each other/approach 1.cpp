#include <bits/stdc++.h>
using namespace std;

int main() {
    string str1 = "test";
    string str2 = "ttew";
    
    int n=str1.length();
    int m=str2.length(); 
    int flag=1;
    
    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());
    
     for (int i = 0; i < n; i++)
        if (str1[i] != str2[i])
        {
            flag=0; 
        }
                   
    if(flag==1)
    {
        cout<<"anagram";
    }
    else
    {
        cout<<"not anagram";
    }
 
    
	return 0;
}
