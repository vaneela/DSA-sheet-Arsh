
class Solution
{
public:
    bool isValid(string s)
    {
        if (s.size() == 1)
            return 0;
        stack<char> st;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[')
                st.push(s[i]);
            else
            {
                if (st.empty())
                    return 0;
                char temp = st.top();
                switch (s[i])
                {
                case ')':
                    if (temp == '(')
                        st.pop();
                    else
                        return 0;
                    break;
                case ']':
                    if (temp == '[')
                        st.pop();
                    else
                        return 0;
                    break;
                case '}':
                    if (temp == '{')
                        st.pop();
                    else
                        return 0;
                }
            }
        }
        if (st.empty())
            return 1;
        return 0;
    }
};