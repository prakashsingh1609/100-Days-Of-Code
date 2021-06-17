#include <bits/stdc++.h>
using namespace std;
#define R 3
#define C 6

void spiralPrint(int m,int n,int a[R][C])
{
    int i,first_row=0,first_col=0;
    int last_row=m-1,last_col=n-1;
    
    while(first_row<=last_row && first_col<=last_col)
    {
        for(i=first_col;i<=last_col;i++)
        {
            cout<< a[first_row][i]<<" ";
        }
        first_row++;
        
        for(i=first_row;i<=last_row;i++)
        {
            cout<<a[i][last_col]<<" ";
        }
        last_col--;
        
      
        
        if(first_row<=last_row)
        {
            for(i=last_col;i>=first_col;i--)
            {
                cout<<a[last_row][i]<<" ";
            }
            last_row--;
        }
        
        if(first_col<=last_col)
        {
            for(i=last_row;i>=first_row;i--)
            {
                cout<<a[i][first_col]<<" ";
            }
            last_col--;
        }
}
}

int main() {
int a[R][C] = { { 1, 2, 3, 4, 5, 6 },
                    { 7, 8, 9, 10, 11, 12 },
                    { 13, 14, 15, 16, 17, 18 } };
     
    spiralPrint(R, C, a);
    return 0;
}
