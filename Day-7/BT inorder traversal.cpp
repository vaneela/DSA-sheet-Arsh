class Solution
{
public:
    vector<int> inorderTraversal(TreeNode *root)
    {
        vector<int> ans;
        if (root == NULL)
            return ans;
        int mid = root->val;
        vector<int> temp = inorderTraversal(root->left);
        vector<int> tempr = inorderTraversal(root->right);
        for (int i = 0; i < temp.size(); i++)
            ans.push_back(temp[i]);
        ans.push_back(mid);
        for (int i = 0; i < tempr.size(); i++)
            ans.push_back(tempr[i]);
        return ans;
    }
};