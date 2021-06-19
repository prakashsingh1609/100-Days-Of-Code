#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int n, index;
    int c[6];
    cin >> n;
    int a[n];
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i < 6; i++)
    {
        int s = 0;
        for (int j = 1; j <= n; j++)
        {
            if (a[j] == i)
            {
                s++;
            }
        }
        c[i] = s;
    }
    int max = 1;
    if (c[1] >= c[2] && c[1] >= c[3] && c[1] >= c[4] && c[1] >= c[5])
    {
        cout << 1;
    }

    else if (c[2] >= c[3] && c[2] >= c[4] && c[2] >= c[5])
    {
        cout << 2;
    }
    else if (c[3] >= c[4] && c[3] >= c[5])
    {
        cout << 3;
    }
    else if (c[4] >= c[5])
    {
        cout << 4;
    }
    else
    {
        cout << 5;
    }
}
