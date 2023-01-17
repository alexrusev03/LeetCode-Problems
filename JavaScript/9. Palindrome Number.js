/**
 * @param {number} x
 * @return {boolean}
 */
var isPalindrome = function(x) {
    if((x<0 || x%10==0) && x!=0){return false;}
    var num = x;
    var rem;
    var rev = 0;
    while(x!=0){
        rem = x%10;
        rev=rev*10+rem;
        x=Math.floor(x/10);
    }
    if (rev==num && num>=0){
        return true;
    }
    else{
        return false;
    }
};
