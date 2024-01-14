class Solution
{
public:
    const int modulo = 1e9 + 7;
    int totalCount(int n, string s)
    {
        // code here
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == s[0])
            {
                count += n - i;
                count %= modulo;
            }
        }

        return count;
    }
};