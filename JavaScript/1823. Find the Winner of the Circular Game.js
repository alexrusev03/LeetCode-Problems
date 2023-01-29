/**
 * @param {number} n
 * @param {number} k
 * @return {number}
 */
var sol = function(n, k){
    if(n==1){
        return 0;
    }
    else{
        return (sol(n-1,k)+k)%n;
    }
};
var findTheWinner = function(n, k) {
    return sol(n,k)+1;
};
