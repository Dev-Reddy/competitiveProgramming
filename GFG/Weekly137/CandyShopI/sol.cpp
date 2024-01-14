class Solution
{
public:
    int candyShop(int n, vector<int> &candies)
    {
        // code here

        unordered_set<int> candy;

        for (int i = 0; i < n; i++)
        {
            candy.insert(candies[i]);
        }

        int cost = 0;

        for (auto itr = candy.begin(); itr != candy.end(); itr++)
        {
            cost += *itr;
        }

        return cost;
    }
};