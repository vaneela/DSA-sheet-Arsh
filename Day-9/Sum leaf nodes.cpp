class Solution {
public:
    int sumOfLeftLeaves(TreeNode* root) {
        int sum = 0;
        if(root==nullptr)
            return 0;
        TreeNode * cur = nullptr;
        if(root)
        cur = root->left; 
        
        if(cur==nullptr)
            sum = 0;
        if(cur){
            
        if(cur->left == nullptr && cur->right == nullptr)
            sum += cur->val;
        cout << cur->val << " ";
        }
        
        sum += sumOfLeftLeaves(root->left);
        
        sum += sumOfLeftLeaves(root->right);

        return sum;
    }
};