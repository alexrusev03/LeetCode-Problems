/**
 * @param {number} n
 * @return {number[]}
 */
var lexicalOrder = function(n) {
    var res = new Array();
    var curr = 1;
    for(var i=0; i<n; i++){
        res.push(curr);
        curr*=10;
        while(curr>n){
            curr = Math.floor(curr/10);
            curr++;
            while(curr%10==0){
                curr = Math.floor(curr/10);
            }
        }
    }
    return res;
};
