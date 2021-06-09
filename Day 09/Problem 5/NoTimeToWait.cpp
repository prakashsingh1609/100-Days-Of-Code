#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int N, H, x, i, A[100], c = 0;
    cin >> N >> H >> x;
    for (i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    if (H < x)
    {
        cout << "YES";
    }
    else
    {
        for (i = 0; i < N; i++)
        {
            if ((x + A[i]) == H or (x + A[i]) > H)
            {
                c++;
            }
        }
        if (c != 0)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
    }
}
