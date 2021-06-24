#include <bits/stdc++.h>
using namespace std;

int main()
{
    //code
    int arr[100], i, n, t, k;
    cin >> t;
    for (i = 0; i < t; i++)
    {
        cin >> n >> k;
        for (int j = 0; j < n; j++)
        {
            cin >> arr[j];
        }
        sort(arr, arr + n);
        for (int j = 0; j < n; j++)
        {
            cout << arr[j] << " ";
        }
        cout << endl;
    }
    return 0;
}
