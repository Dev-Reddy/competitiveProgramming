#include <bits/stdc++.h>
using namespace std;

void solve(vector<int> a, int n)
{
    vector<int> prefixMinArr;

    int mn = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        mn = min(mn, a[i]);

        if (mn == a[i])
        {
            prefixMinArr.push_back(a[i]);
        }
    }

    reverse(prefixMinArr.begin(), prefixMinArr.end());

    int ans = n;
    for (int i = 0; i < prefixMinArr.size(); i++)
    {
        ans = min(ans, n - i - 1 + prefixMinArr[i]);
    }

    cout << ans << endl;
}

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        solve(a, n);
    }
}
