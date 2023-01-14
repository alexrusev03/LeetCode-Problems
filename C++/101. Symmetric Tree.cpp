class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        
        if(root==NULL) return true;
        
        return isSymmetricTest(root->left,root->right);
    }
    
    bool isSymmetricTest(TreeNode* left , TreeNode* right){
        if(left == NULL && right == NULL)
            return true; 
        
        else if(left == NULL || right == NULL)
            return false; 
        
        else if(left->val!=right->val) 
            return false;
        
        return isSymmetricTest(left->left,right->right) && isSymmetricTest(left->right,right->left);
    }
};1
