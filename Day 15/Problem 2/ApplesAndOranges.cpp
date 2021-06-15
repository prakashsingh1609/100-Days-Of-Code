#include <bits/stdc++.h>

using namespace std;

int main()
{
    int s, t, a, b, m, n, i, c = 0, d = 0;
    cin >> s >> t;
    cin >> a >> b;
    cin >> m >> n;
    int apple[m], orange[n];
    for (i = 0; i < m; i++)
    {
        cin >> apple[i];
    }
    for (i = 0; i < n; i++)
    {
        cin >> orange[i];
    }
    for (i = 0; i < m; i++)
    {
        if ((a + apple[i]) >= s && (a + apple[i]) <= t)
        {
            c++;
        }
    }
    for (i = 0; i < n; i++)
    {
        if ((b + orange[i]) <= t && (b + orange[i]) >= s)
        {
            d++;
        }
    }
    cout << c << endl
         << d;
}
