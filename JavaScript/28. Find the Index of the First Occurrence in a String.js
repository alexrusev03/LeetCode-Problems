/**
 * @param {string} haystack
 * @param {string} needle
 * @return {number}
 */
var strStr = function(haystack, needle) {
    var m=haystack.length;
    var n=needle.length;
    for(var i=0;i<m-n+1;i++){
        var j=0;
        while(j<n && haystack[i+j]==needle[j]){
            j++;
        }
        if(j==n){
            return i;
        }
    }
    return -1;
};
