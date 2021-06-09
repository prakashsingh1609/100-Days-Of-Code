#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int a, b, c;
    cin >> a >> b >> c;
    if (a == b | b == c | a == c)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}
