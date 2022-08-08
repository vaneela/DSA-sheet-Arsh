class Solution
{
public:
    string substr(string s1, string s2)
    {
        string ans = "";
        int n = min(s1.size(), s2.size());
        for (int i = 0; i < n; i++)
        {
            if (s1[i] == s2[i])
                ans += s1[i];
            else
                break;
        }
        return ans;
    }

    string longestCommonPrefix(vector<string> &strs)
    {
        string ans = strs[0];
        for (int i = 1; i < strs.size(); i++)
        {
            ans = substr(ans, strs[i]);
        }
        return ans;
    }
};