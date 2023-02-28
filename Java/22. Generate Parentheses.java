class Solution {
    public List<String> generateParenthesis(int n) {
        List<String> res = new ArrayList<>();
        helper(n,0,0,"",res);
        return res;
    }
    public void helper(int n , int op , int cl,String p, List<String> res){
        if(p.length() == 2*n){
            res.add(p);
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
