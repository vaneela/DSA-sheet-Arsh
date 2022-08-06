/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution
{
public:
    vector<vector<int>> levelOrder(TreeNode *root)
    {
        vector<vector<int>> ans;
        if (root == NULL)
            return ans;
        queue<TreeNode *> pending;
        vector<int> temp;

        pending.push(root);
        pending.push(NULL);
        while (pending.size() != 0)
        {
            TreeNode *cur = pending.front();
            pending.pop();

            if (pending.empty())
            {
                ans.push_back(temp);
                break;
            }
            if (cur != NULL)
            {
                temp.push_back(cur->val);
                if (cur->left != NULL)
                    pending.push(cur->left);

                if (cur->right != NULL)
                    pending.push(cur->right);
            }
            else
            {
                pending.push(NULL);
                ans.push_back(temp);
                temp.clear();
            }
        }
        return ans;
    }
};