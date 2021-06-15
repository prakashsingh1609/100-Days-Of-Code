#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

int main()
{
    int n;
    cin >> n;
    long long int a[n], sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        sum = sum + a[i];
    }
    cout << sum;
}
