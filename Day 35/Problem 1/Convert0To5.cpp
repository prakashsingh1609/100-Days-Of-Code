#include <bits/stdc++.h>
using namespace std;

int convertFive(int n);

// Driver program to test above function
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        cout << convertFive(n) << endl;
    }
} // } Driver Code Ends

/*you are required to complete this method*/
int convertFive(int n)
{
    // Your code here
    int power = 1;
    int newNum = 0;

    while (n)
    {
        int digit = n % 10;

        if (digit == 0)
        {
            newNum += 5 * power;
        }
        else
        {
            newNum += digit * power;
        }

        power *= 10;
        n /= 10;
    }

    return newNum;
}
