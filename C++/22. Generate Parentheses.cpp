class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        helper(n,0,0,"",res);
        return res;
    }
    void helper(int n , int op , int cl, string p, vector<string> &res){
        if(p.size() == 2*n){
            res.push_back(p);
            return;
        }
        if(op<n){
            helper(n,op+1,cl,p+"(",res);
        }
        if(cl<op){
            helper(n,op,cl+1,p+")",res);
        }
    }
};
