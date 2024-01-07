#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        float n;
        cin >> n;
        if (n == 1)
        {
            cout << 1 << " " << 1 << endl;
        }
        else
        {
            int max = n;
            int min = ceil(n / 2);
            cout << min << " " << max << endl;
        }
    }
}
