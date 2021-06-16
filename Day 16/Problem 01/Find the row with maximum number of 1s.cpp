#include<bits/stdc++.h>
using namespace std;
#define R 4
#define C 4

int main() 
{
    int max=0,r=0;
   bool mat[R][C] = { {0, 0, 0, 1},
                    {0, 1, 1, 1},
                    {1, 1, 1, 1},
                    {0, 0, 0, 0}};
    for(int i=0;i<R;i++)
    {   int c=0;
        for(int j=0;j<C;j++)
        {
            if(mat[i][j]==1)
            {
                c++;
            }
        }
        if(c>max)
        {
            max=c;
            //cout<<max<<" ";
            r=i;
            //cout<<r;
            
        }
    }
    
    cout<<r;
    return 0;
}
