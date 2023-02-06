public class Codec {

    // Encodes a tree to a single string.
    string str = "";
    public string serialize(TreeNode root) {
        helper(root);
        return str.Trim(',');
    }

    public void helper(TreeNode root)
    {
        if(root == null)
        {
            str += ",#";
            return;
        }
        str += "," + root.val.ToString();

        helper(root.left);
        helper(root.right);
        return;
    }

    int index = 0;
    string[] lists;
    // Decodes your encoded data to tree.
    public TreeNode deserialize(string data) {
        if(data.Length == 0)
            return null;

        lists = data.Split(',');
        return helper2(lists[index]);
    }

    public TreeNode helper2(string word)
    {
        if(word == "#")
            return null;

        TreeNode p = new TreeNode(Convert.ToInt16(word));
        p.left = helper2(lists[++index]);
        p.right = helper2(lists[++index]);
        return p;
    }
}
