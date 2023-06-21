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
    public int MaxDepth(Node root) {
        if(root==null){
            return 0;
        }
        int res = 0;
        foreach(Node i in root.children){
            res = Math.Max(res, MaxDepth(i));
        }
        return res+1;
    }
}
