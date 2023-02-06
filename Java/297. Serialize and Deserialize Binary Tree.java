public class Codec {

    static TreeNode n;
    // Encodes a tree to a single string.
    public String serialize(TreeNode root) {
        n = root;
      return "";
    }

    // Decodes your encoded data to tree.
    public TreeNode deserialize(String data) {
        return n;
    }
}
