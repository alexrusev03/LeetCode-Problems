/*
// Definition for a Node.
public class Node {
    public int val;
    public IList<Node> children;

    public Node() {}

    public Node(int _val) {
        val = _val;
    }

    public Node(int _val, IList<Node> _children) {
        val = _val;
        children = _children;
    }
}
*/

public class Solution {
    List<int> res = new List<int>();
    public IList<int> Postorder(Node root) {
        if(root==null){
            return res;
        }
        foreach(Node n in root.children){
            Postorder(n);
        }
        res.Add(root.val);
        return res;
    }
}
