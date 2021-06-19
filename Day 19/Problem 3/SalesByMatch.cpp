#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n, fc = 0, c = 0, r;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != 0)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (a[i] == a[j])
                {
                    count++;
                    a[j] = 0;
                    break;
                }
            }
        }
    }
    cout << count;
}
