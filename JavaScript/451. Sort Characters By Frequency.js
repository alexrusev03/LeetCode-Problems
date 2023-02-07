/**
 * @param {string} s
 * @return {string}
 */
var frequencySort = function(s) {
    var num = {};
    var max = 1;
    for(let c of s) {
        num[c] = (num[c] || 0) + 1;
        max = Math.max(max, num[c]);
    }
    let res = Array(max+1).fill('');
    for(let c of Object.keys(num)){
        res[res.length-num[c]] = res[res.length-num[c]] + c.repeat(num[c]);
    }
    return res.join('');
};
