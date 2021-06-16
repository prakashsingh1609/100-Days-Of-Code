#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x2,x1,v1,v2;
    cin >> x1 >> v1 >> x2 >> v2;
    if((x2-x1) * (v2-v1) < 0 && (x2-x1)%(v2-v1) == 0)
    {
        cout << "YES";
    }
    else 
    
    {
        cout << "NO";
    }
    
}
