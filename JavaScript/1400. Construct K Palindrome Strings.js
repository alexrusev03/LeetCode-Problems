/**
 * @param {string} s
 * @param {number} k
 * @return {boolean}
 */
var canConstruct = function(s, k) {
    if(s.length<k){
        return false;
    }
    var arr = new Array(26).fill(0);
    var a = 'a'.charCodeAt(0);
    for(var i = 0; i<s.length; i++){
        arr[s.charCodeAt(i)-a]++;
    }
    var res=0;
    for(var i = 0; i<26; i++){
        if(arr[i]%2==1){
            res++;
        }
    }
    return res<=k;
};
