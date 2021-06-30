#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends

class Solution
{
public:
    void rearrangeArray(int arr[], int n)
    {
        // code here
        sort(arr, arr + n);
        int b[n];
        for (int i = 0, j = 0; i < n, j < n; i++, j = j + 2)
        {
            int min = arr[i];
            int max = arr[n - 1 - i];
            b[j] = min;
            b[j + 1] = max;
        }
        for (int i = 0; i < n; i++)
        {
            arr[i] = b[i];
        }
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        Solution obj;
        obj.rearrangeArray(arr, n);
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends