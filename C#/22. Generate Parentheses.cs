public class Solution {
    public IList<string> GenerateParenthesis(int n) {
        IList<string> res = new List<string>();
        helper(n,0,0,"",res);
        return res;
    }
    public void helper(int n , int op , int cl,string p, IList<string> res){
        if(p.Length == 2*n){
            res.Add(p);
            return;
        }
        if(op<n){
            helper(n,op+1,cl,p+"(",res);
        }
        if(cl<op){
            helper(n,op,cl+1,p+")",res);
        }
    }
}
