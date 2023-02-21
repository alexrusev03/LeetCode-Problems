/**
 * @param {number} n
 * @return {number}
 */
var nthUglyNumber = function(n) {
    if(n <= 0){return 0;}
    if(n == 1){return 1;}
    var a = 0;
    var b = 0;
    var c = 0;
    var seq=new Array(n).fill(0);
    seq[0] = 1;
    for(var i  = 1; i < n ; i ++){
        seq[i] = Math.min(seq[a]*2, Math.min(seq[b]*3,seq[c]*5));
        if(seq[i] == seq[a]*2) a++; 
        if(seq[i] == seq[b]*3) b++;
        if(seq[i] == seq[c]*5) c++;
    }
    return seq[n-1];
};
