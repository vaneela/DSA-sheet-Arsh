class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int profit = 0;
        for (int i = 0; i < prices.size() - 1; i++)
        {
            // adding all +ve diff
            int cur = prices[i + 1] - prices[i];
            if (cur > 0)
                profit += cur;
        }
        return profit;
    }
};