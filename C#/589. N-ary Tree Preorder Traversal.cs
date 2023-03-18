/*
// Definition for a Node.
public class Node {
    public int val;
    public IList<Node> children;

    public Node() {}

    public Node(int _val) {
        val = _val;
    }

    public Node(int _val,IList<Node> _children) {
        val = _val;
        children = _children;
    }
}
*/

public class Solution {
    public IList<int> Preorder(Node root) {
        IList<int> res = new List<int>();
        if(root==null){
            return res;
        }
        helper(root,res);
        return res; 
    }
    public void helper(Node root, IList<int> res){
        res.Add(root.val);
        foreach(Node i in root.children){
            helper(i,res);
        }
    }
}
