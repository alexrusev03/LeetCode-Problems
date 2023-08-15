/**
 * @param {string} s
 * @return {number}
 */
var minimumDeletions = function(s) {
    var stk = [];
    var res=0;
        for(var i=0;i<s.length;i++){
        if(s[i] == 'a'){
            if(stk.length!=0){
                stk.pop();
                res++;
            }
        }
        else{
           stk.push(s[i]);
        }
    }
    return res;
};
