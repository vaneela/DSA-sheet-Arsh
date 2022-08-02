class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int ans = 0, minPrice = INT_MAX;
        for (int i = 0; i < prices.size(); i++)
        {
            minPrice = min(minPrice, prices[i]);
            int profit = prices[i] - minPrice;
            ans = max(ans, profit);
        }
        return ans;
    }
};