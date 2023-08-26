/**
 * @param {string} s
 * @param {string} t
 * @return {number}
 */
var minSteps = function(s, t) {
    var arr1 = new Array(26).fill(0);
    var arr2 = new Array(26).fill(0);
    for(var i of s){
        arr1[i.charCodeAt() - 'a'.charCodeAt()]++;
    }
    for(var i of t){
        arr2[i.charCodeAt() - 'a'.charCodeAt()]++;
    }
    var res = 0;
    for(var i=0; i<26; i++){
        res+=Math.abs(arr1[i]-arr2[i]);
    }
    return Math.floor(res/2);
};
