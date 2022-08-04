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
    pair<int, int> heightdiameter(TreeNode *root)
    {
        pair<int, int> ans = {0, 0};
        if (root == NULL)
            return ans;
        pair<int, int> lans = heightdiameter(root->left);
        pair<int, int> rans = heightdiameter(root->right);

        int h = max(rans.first, lans.first) + 1;
        int d = max(rans.first + lans.first, max(lans.second, rans.second));
        ans.first = h;
        ans.second = d;

        return ans;
    }
    int diameterOfBinaryTree(TreeNode *root)
    {
        pair<int, int> p = heightdiameter(root);
        return p.second;
    }
};