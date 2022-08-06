class Solution {
public:
    int height(TreeNode* root){
        if(root==NULL)
            return 0;
        return max(height(root->left),height(root->right))+1;
        
    }
    bool isBalanced(TreeNode* root) {
        if(root==NULL)
            return 1;
        int hl = height(root->left);
        int hr = height(root->right);
        if(abs(hl-hr) > 1)
            return 0;
        return isBalanced(root->left) && isBalanced(root->right);
    }
};