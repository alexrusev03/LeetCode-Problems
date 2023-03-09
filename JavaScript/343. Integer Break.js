/**
 * @param {number} n
 * @return {number}
 */
var integerBreak = function(n) {
	return helper(n-1,n);
};
var helper = function(i,n){
    if(i==0 || i==1){
        return 1;
    }
    var num=0;
    if(n>=i){
        num=i*helper(i,n-i);
    }
    return Math.max(num,helper(i-1,n));
};
