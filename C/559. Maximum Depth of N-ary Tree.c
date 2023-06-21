/**
 * Definition for a Node.
 * struct Node {
 *     int val;
 *     int numChildren;
 *     struct Node** children;
 * };
 */

int maxDepth(struct Node* root) {
    if(root==NULL){
        return 0;
    }
    int res = 0;
    for(int i = 0; i<root->numChildren; i++){
        res = fmax(res, maxDepth(root->children[i]));
    }
    return res+1;
}
