#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here

    int t;
    cin >> t;
    while (t--)
    {
        int x, y, n;
        cin >> n >> x >> y;
        int k = min(x, y / 3);
        int totalLeaves = k + ((x - k) / 2);
        if (totalLeaves < n)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
}
