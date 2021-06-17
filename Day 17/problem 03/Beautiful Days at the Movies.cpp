#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int r1,r2,d,c=0;
    cin>>r1>>r2>>d;
    
    for(long long int i=r1;i<=r2;i++)
    { long long int no=i;
      long long int rev_num = 0;
      while (no > 0)
       {
        rev_num = rev_num * 10 + no % 10;
        no = no / 10;
       }  
       if((abs(i-rev_num))%d==0)
       {
           c++;
          // rev_num=0;
       }
    }
    cout<<c;
    return 0;
}
