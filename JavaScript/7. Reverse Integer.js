/**
 * @param {number} x
 * @return {number}
 */
var reverse = function(x) {
    var ans=0;
    if(x >= 0){
        sgn=1;
    }
    else{
        sgn=-1;
    }
    x*=sgn
    while(x>0){
        ans=ans*10+x%10;
        x=Math.floor(x/10);
    }
    if(ans<-Math.pow(2,31) || ans>(Math.pow(2,31)-1)){
        return 0;
    }
    ans*=sgn;
    return ans;
};
