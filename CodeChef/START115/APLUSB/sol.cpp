#include <bits/stdc++.h>
using namespace std;

void print(vector<int> v)
{
    for (int x : v)
        cout << x << " ";
    cout << endl;
}

int main()
{

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
        vector<int> b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end(), greater<int>());

        int sum = a[0] + b[0];
        for (int i = 1; i < n; i++)
        {
            if (a[i] + b[i] != sum)
            {
                sum = -1;
                break;
            }
        }
        if (sum == -1)
        {
            cout << -1 << endl;
        }
        else
        {
            print(a);
            print(b);
        }
    }
}
