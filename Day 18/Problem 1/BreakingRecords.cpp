#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int small = arr[0], large = arr[0], sc = 0, lc = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > large)
        {
            large = arr[i];
            lc++;
        }
        if (arr[i] < small)
        {
            small = arr[i];
            sc++;
        }
    }
    cout << lc << " " << sc;
}
