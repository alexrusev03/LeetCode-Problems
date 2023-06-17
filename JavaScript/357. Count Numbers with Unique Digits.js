/**
 * @param {number} n
 * @return {number}
 */
var countNumbersWithUniqueDigits = function(n) {
    if(n==0){
        return 1;
    }
    var arr = new Array(n);
    arr[0]=10;
    var p=9;
    var temp=9;
    for(var i=1; i<n; i++){
        p*=temp;
        arr[i]=arr[i-1]+p;
        temp--;
    }
    return arr[n-1];
};
