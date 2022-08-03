class Solution
{
public:
    vector<vector<int>> tripletsum(vector<int> &arr, int s, int e, int x)
    {
        vector<vector<int>> ans;
        set<vector<int>> st;
        for (int i = s; i < e - 1; i++)
        {
            vector<int> temp;
            int start = i + 1, end = e;
            while (start < end)
            {
                long long sum = (long long)arr[i] + (long long)arr[start] + (long long)arr[end];
                if (sum == x)
                {
                    temp.push_back(arr[i]);
                    temp.push_back(arr[start]);
                    temp.push_back(arr[end]);
                    start++;
                    end--;
                    st.insert(temp);
                    temp.clear();
                }
                else if (sum > x)
                    end--;
                else
                    start++;
            }
        }
        for (auto ele : st)
            ans.push_back(ele);
        return ans;
    }

    vector<vector<int>> fourSum(vector<int> &nums, int target)
    {
        vector<vector<int>> ans;
        if (nums.size() < 4)
            return ans;
        int n = nums.size();
        set<vector<int>> st;
        sort(nums.begin(), nums.end());

        for (int i = 0; i < n - 3; i++)
        {
            int x = target - nums[i];
            vector<vector<int>> temp = tripletsum(nums, i + 1, n - 1, x);
            if (!temp.empty())
            {
                for (auto ele : temp)
                {
                    ele.push_back(nums[i]);
                    st.insert(ele);
                }
            }
        }
        for (auto ele : st)
            ans.push_back(ele);
        return ans;
    }
};