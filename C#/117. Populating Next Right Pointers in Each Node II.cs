/*
// Definition for a Node.
public class Node {
    public int val;
    public Node left;
    public Node right;
    public Node next;

    public Node() {}

    public Node(int _val) {
        val = _val;
    }

    public Node(int _val, Node _left, Node _right, Node _next) {
        val = _val;
        left = _left;
        right = _right;
        next = _next;
    }
}
*/

public class Solution {
    public Node Connect(Node root) {
        if(root==null){return root;}
        var q = new Queue<Node>();
        q.Enqueue(root);
        int size = 1;
        while(q.Any()){
            Node prev = new Node();
            int c = 0;
            for(int i=0; i< size; i++){
                Node n = q.Dequeue();
                if(i<size-1){
                    n.next = q.Peek();
                }
                if(n.left!=null){
                    q.Enqueue(n.left);
                    c++;
                }
                if(n.right!=null){
                    q.Enqueue(n.right);
                    c++;
                }
                prev = n;
            }
            size=c;
        }
        return root;
    }
}
