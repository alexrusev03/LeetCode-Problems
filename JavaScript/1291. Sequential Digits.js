/**
 * @param {number} low
 * @param {number} high
 * @return {number[]}
 */
var sequentialDigits = function(low, high) {
    var res = new Array();
    for(var i=1; i<10; i++){
        helper(res, low, high, i, 0);
    }
    res.sort((a, b) => (a - b));
    return res;
}
var helper = function(res, low, high, i, num){
    if(num>=low && num<=high){
        res.push(num);
    }
    if(num>high || i>9){
        return;
    }
    helper(res, low, high, i+1, num*10 + i);
};
