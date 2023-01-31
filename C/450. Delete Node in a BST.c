/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
struct TreeNode* deleteNode(struct TreeNode* root, int key){
        if (root==NULL){return NULL;}
        if(root->val<key){
            root->right=deleteNode(root->right,key);
        }
        else if(root->val>key){
            root->left=deleteNode(root->left,key);
        }
        else{
            if(root->left==NULL && root->right==NULL){
                return NULL;
            }
            else if(root->left==NULL || root->right==NULL){
                if(root->left!=NULL){return root->left;}
                return root->right;
            }
            else{
                struct TreeNode* temp=root->left;
                while(temp->right){
                    temp=temp->right;
                }
                root->val=temp->val;
                root->left=deleteNode(root->left, temp->val);
            }
        }
        return root;
}
