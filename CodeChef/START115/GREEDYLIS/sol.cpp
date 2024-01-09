#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;

        if (x == n || (x == n - 1 && n != 1))
        {
            cout << -1 << endl;
        }
        else if (n == 1)
        {
            cout << 1 << endl;
        }
        else
        {
            for (int i = n; i >= x + 2; i--)
            {
                cout << i << " ";
            }
            for (int i = 1; i <= x + 1; i++)
            {
                cout << i << " ";
            }
            cout << endl;
        }
    }
}
