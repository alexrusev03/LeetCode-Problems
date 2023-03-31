/**
 * @param {string[]} strs
 * @return {string}
 */
var longestCommonPrefix = function(strs) {
    strs.sort();
    var n=strs.length;
    var str1=strs[0];
    var str2=strs[n-1];
    var res="";
    for(var i=0;i<str1.length;i++){
        if(str1[i]==str2[i]){
            res+=str1[i];
        }
        else{
            break;
        }
    }
    return res;
};
