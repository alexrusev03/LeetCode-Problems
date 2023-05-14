/**
 * @param {number} n
 * @param {number} k
 * @return {string}
 */
var getPermutation = function(n, k) {
    var res = "";
    var f=1;
    var arr = new Array();
    for(var i = 1; i<n; i++){
        f*=i;
        arr.push(i);
    }
    arr.push(n);
    k--;
    while(arr.length>0){
        res+=arr[Math.floor(k/f)];
        arr.splice(Math.floor(k/f),1);
        k%=f;
        if(arr.length!=0){
            f=Math.floor(f/arr.length);
        }
    }
    return res;
};
