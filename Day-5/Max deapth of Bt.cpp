class Solution {
public:
    int maxDepth(TreeNode* root) {
        int maxx =0;
        if(root==NULL)
            return 0;
        int r = maxDepth(root->right);
        int l = maxDepth(root->left);
        maxx = max(r,l);
        return maxx +1;
    }
};