/**
 * @param {number} label
 * @return {number[]}
 */
var pathInZigZagTree = function(label) {
    var res = new Array();
    res.push(label);
    for(var i = Math.floor(Math.log(label)/Math.log(2)); i>0; i--){
        label=Math.floor(Math.pow(2,i-1))+Math.floor(Math.pow(2,i))-Math.floor(label/2)-1;
        res.push(label);
    }
    res.reverse();
    return res;
};
