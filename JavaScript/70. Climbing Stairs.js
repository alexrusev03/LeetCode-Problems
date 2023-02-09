/**
 * @param {number} n
 * @return {number}
 */
var climbStairs = function(n) {
    var prev=1,prev2=1;
    for(var i=2;i<=n;i++){
        var cur=prev+prev2;
        prev2=prev;
        prev=cur;
    }
    return prev;
};
//or

/**
 * @param {number} n
 * @return {number}
 */
var climbStairs = function(n) {
    var ways = new Array(n+1).fill(0);
    ways[0]=0;
    ways[1]=1;
    ways[2]=2;
    ways[3]=3;
    for(var i = 4; i<=n; i++){
        ways[i]=ways[i-1]+ways[i-2];
    }
    return ways[n];
};
