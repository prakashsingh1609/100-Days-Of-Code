//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

int main()
{
    //code
    int t;
    cin >> t;
    while (t--)
    {
        int n, sum1 = 0, sum2 = 0;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];

        cout << multiply(a, n) << endl;
    }
    return 0;
} // } Driver Code Ends

//User function Template for C++

int multiply(int arr[], int n)
{
    // Complete the function
    int k = n / 2, p1 = 0, p2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (i < k)
        {
            p1 = p1 + arr[i];
        }
        else
        {
            p2 = p2 + arr[i];
        }
    }
    return p1 * p2;
}