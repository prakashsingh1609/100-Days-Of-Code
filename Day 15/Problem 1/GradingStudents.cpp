#include <bits/stdc++.h>

using namespace std;
int main(){
int t,i,c=0;
cin >> t;
while(t--)
{
    int n;
    cin >> n;
    if(n<38 || n%5==0)
    {
        cout<<n<<endl;
    }
    else{
        for(i=1;i<5;i++)
        {
            if((n+i)%5==0)
            {
                c = i;
            }
            
        }
        if(c<3)
            {
                cout<<n+c<<endl;
            }
         else{
                cout<<n<<endl;
            }
    }
}

}
