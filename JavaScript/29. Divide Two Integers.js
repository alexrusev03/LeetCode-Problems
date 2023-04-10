/**
 * @param {number} dividend
 * @param {number} divisor
 * @return {number}
 */
var divide = function(dividend, divisor) {
    if(dividend==-2147483648 && divisor==-1){return 2147483647;}
    if(dividend==Number.MIN_VALUE && divisor==1){return Number.MIN_VALUE;}
    var sign=1;
    if((dividend>0 && divisor<0) || (dividend<0 && divisor>0)){
        sign = -1;
    }
    var dd = Math.abs(dividend);
    var dvsr = Math.abs(divisor);
    var res=0;
    while(dvsr<=dd) {
        var mul=1;
        var temp=dvsr;
        while(temp<=dd-temp) {
            mul+=mul;
            temp+=temp;
        }
        res+=mul;
        dd-=temp;
    }
    return sign*res;
};
