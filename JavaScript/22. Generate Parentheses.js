/**
 * @param {number} n
 * @return {string[]}
 */
var generateParenthesis = function(n) {
    var res = [];
    helper(n,0,0,"",res);
    return res;
}
var helper = function(n ,op,cl,p,res){
    if(p.length == 2*n){
        res.push(p);
        return;
    }
    if(op<n){
        helper(n,op+1,cl,p+"(",res);
    }
    if(cl<op){
        helper(n,op,cl+1,p+")",res);
    }
};
