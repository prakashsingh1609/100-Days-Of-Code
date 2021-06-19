#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, sum = 0;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int d;
    cin >> d;
    for (int j = 0; j < n; j++)
    {
        if (j != k)
            sum = sum + a[j];
    }
    sum = sum / 2;
    if (sum == d)
    {
        cout << "Bon Appetit";
    }
    else
    {
        cout << d - sum;
    }
}
