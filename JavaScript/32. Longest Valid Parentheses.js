/**
 * @param {string} s
 * @return {number}
 */
var longestValidParentheses = function(s) {
    var n = s.length;
    var res = 0;
    var l = -1;
    var stk = [];
    for(var i = 0; i < n; i++){
        if(s[i] == '('){
            stk.push(i);
        }
        else{
            if(stk.length==0){
                l = i;
            }
            else{
                stk.pop();
                if(stk.length==0){
                    res=Math.max(res,i-l);
                }
                else{
                    res=Math.max(res,i-stk[stk.length-1]);
                }
            }
        }
    }
    return res;
};
