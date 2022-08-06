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
    TreeNode *solve(vector<int> &pre, vector<int> &post, int pres, int pree, int posts, int poste)
    {
        if (pres > pree || posts > poste)
            return NULL;
        int rootdata = pre[pres];
        TreeNode *root = new TreeNode(rootdata);
        if (pres == pree || posts == poste)
            return root;
        int lpres = pres + 1;
        int lposts = posts;
        int rposte = poste - 1;
        int rpree = pree;
        int leftr = pre[lpres];
        int lposte;
        for (int i = posts; i <= poste; i++)
        {
            if (post[i] == leftr)
            {
                lposte = i;
                break;
            }
        }
        int rposts = lposte + 1;
        int lpree = lpres + (lposte - lposts);
        int rpres = lpree + 1;
        root->left = solve(pre, post, lpres, lpree, lposts, lposte);
        root->right = solve(pre, post, rpres, rpree, rposts, rposte);
        return root;
    }
    TreeNode *constructFromPrePost(vector<int> &preorder, vector<int> &postorder)
    {
        if (preorder.size() == 0)
            return NULL;
        int n = preorder.size();
        return solve(preorder, postorder, 0, n - 1, 0, n - 1);
    }
};