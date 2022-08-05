class Solution
{
public:
    int rangeSumBST(TreeNode *root, int low, int high)
    {
        if (root == NULL)
            return 0;
        int leftsum = 0, rightsum = 0;
        if (root->val >= low && root->val <= high)
        {
            leftsum += root->val;
        }
        if (root->left != NULL)
            leftsum += rangeSumBST(root->left, low, high);
        if (root->right != NULL)
            rightsum += rangeSumBST(root->right, low, high);
        return leftsum + rightsum;
    }
};