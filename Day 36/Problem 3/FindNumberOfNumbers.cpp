int num(int a[], int n, int k);
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int k;
        cin >> k;
        cout << num(a, n, k) << endl;
    }
} // } Driver Code Ends

/*Complete the function given below*/
int num(int a[], int n, int k)
{
    int s = 0;
    for (int i = 0; i < n; i++)
    {
        int rem = 0;
        while (a[i] > 0)
        {
            rem = a[i] % 10;
            if (rem == k)
                s++;
            a[i] = a[i] / 10;
        }
    }
    return s;
}
