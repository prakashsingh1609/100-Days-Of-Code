#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, c = 0, sum = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int d, m;
    cin >> d >> m;
    if (n == 1 && a[0] == d)
    {
        cout << 1;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            sum = 0;
            for (int j = i, k = 0; k < m; k++, j++)
            {
                sum = sum + a[j];
            }
            if (sum == d)
            {
                c++;
            }
        }
        cout << c;
    }
}
