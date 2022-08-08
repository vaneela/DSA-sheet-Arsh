class Solution
{
public:
    bool ispal(string &str, int s, int e)
    {
        while (s <= e)
        {
            if (str[s] == str[e])
            {
                s++;
                e--;
            }
            else
                return 0;
        }
        return 1;
    }
    bool validPalindrome(string str)
    {
        int s = 0, e = str.size() - 1;
        while (s <= e)
        {
            if (str[s] == str[e])
            {
                s++;
                e--;
            }
            else if (ispal(str, s + 1, e) || ispal(str, s, e - 1))
                return 1;
            else
                return 0;
        }
        return 1;
    }
};