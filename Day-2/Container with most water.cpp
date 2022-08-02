class Solution
{
public:
    int maxArea(vector<int> &h)
    {
        int s = 0, e = h.size() - 1;
        int maxh = min(h[s], h[e]);
        int maxA = maxh * (e - s);
        while (s != e)
        {
            int curh = min(h[s], h[e]);
            int curA = curh * (e - s);
            maxh = max(maxh, curh);
            maxA = max(maxA, curA);
            if (h[s] < h[e])
                s++;
            else
                e--;
        }
        return maxA;
    }
};