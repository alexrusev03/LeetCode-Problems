/**
 * @param {number} n
 * @return {number}
 */
var tribonacci = function(n) {
    var tri= new Array(n+1).fill(0);
    if(n==0){return 0;}
    if(n==1){return 1;}
    if(n==2){return 1;}
    tri[0]=0;
    tri[1]=1;
    tri[2]=1;
    for(var i = 3; i<=n; i++){
        tri[i]=tri[i-1]+tri[i-2]+tri[i-3];
    }
    return tri[n];
};
