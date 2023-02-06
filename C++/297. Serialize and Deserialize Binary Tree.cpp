class Codec {
public:

    // Encodes a tree to a single string.
     string serialize(TreeNode* root) {
         if(!root){
             return "null,";
         }
         string s=to_string(root->val)+",";
         string s1=serialize(root->left);
         string s2=serialize(root->right);
         return s+s1+s2;
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        queue<string> q;
        string s="";
        for(char c:data)
        {
            if(c==',')
            {
                q.push(s);
                s="";
            }
            else
                s+=c;
        }
        return createTree(q);
    }
    TreeNode* createTree(queue<string> & q){
        string s=q.front();
        q.pop();
        if(s=="null")
            return NULL;
        TreeNode* tree=new TreeNode(stoi(s));
        tree->left=createTree(q);
        tree->right=createTree(q);
        return tree;
    }
};
