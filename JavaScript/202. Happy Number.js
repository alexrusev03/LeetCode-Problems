/**
 * @param {number} n
 * @return {boolean}
 */
var isHappy = function(n) {
    if(n==1 || n==7){
        return true;
    }
    if(n == 2 || n == 3 || n == 4 || n == 5 || n == 6 || n == 8 || n == 9){
        return false;
    }
    var num=0;
    while(n!=0){
        num+=(n%10)*(n%10);
        n=Math.floor(n/10);
    }
    if(isHappy(num)==true){
        return true;
    }
    return false;
};
