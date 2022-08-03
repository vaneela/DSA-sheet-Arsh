class Solution
{
public:
    int maxScore(vector<int> &cardPoints, int k)
    {
        int n = cardPoints.size();
        int w = n - k;
        long long sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += cardPoints[i];
        }
        if (k == n)
            return sum;
        int i = 0, j = 0;
        int maxsum = INT_MIN;
        int cursum = 0;

        while (j < n)
        {
            cursum += cardPoints[j];

            if ((j - i + 1) == w)
            {
                int s = sum - cursum;
                maxsum = max(maxsum, s);
                cout << s << " ";
                cursum -= cardPoints[i++];
            }
            ++j;
        }
        return maxsum;
    }
};