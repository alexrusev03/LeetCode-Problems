/**
 * @param {string} n
 * @return {number}
 */
var minPartitions = function(n) {
    var res = 0;
    for(var i = 0; i < n.length; i++){
        if(res < n[i]-'0'){
            res = n[i]-'0';
        }
    }
    return res;
};
