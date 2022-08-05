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
    TreeNode *tobst(vector<int> &arr, int s, int e)
    {
        if (s > e)
            return NULL;
        int mid = s + (e - s) / 2;
        TreeNode *root = new TreeNode(arr[mid]);
        TreeNode *left = tobst(arr, s, mid - 1);
        TreeNode *right = tobst(arr, mid + 1, e);
        root->left = left;
        root->right = right;
        return root;
    }
    TreeNode *sortedArrayToBST(vector<int> &nums)
    {
        return tobst(nums, 0, nums.size() - 1);
    }
};