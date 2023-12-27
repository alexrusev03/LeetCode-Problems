/**
 * @param {number[]} arr
 * @return {number}
 */
var mctFromLeafValues = function(arr) {
    var res = 0;
    var stk = new Array();
    stk.push(Number.MAX_VALUE);
    for(var i of arr){
        while(stk.at(-1)<=i){
            var m = stk.pop();
            res += m*Math.min(stk.at(-1),i);
        }
        stk.push(i);
    }
    while(stk.length>2){
        res += stk.pop()*stk.at(-1);
    }
    return res;
};
