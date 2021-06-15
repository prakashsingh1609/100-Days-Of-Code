#include <bits/stdc++.h>

using namespace std;
int main()
{
    long long int a[5];
    cin >> a[0] >> a[1] >> a[2] >> a[3] >> a[4];
    sort(a, a + 5);
    long long int min = a[0] + a[1] + a[2] + a[3];
    long long int max = a[1] + a[2] + a[3] + a[4];
    cout << min << " " << max;
}
