/**
 * @param {string} s
 * @param {number} k
 * @return {number}
 */
var maxVowels = function(s, k) {
    var i = 0;
    var res = 0;
    for(var j = 0; j < s.length; j++){
        if(j<k-1){
            if(s[j]=='a'||s[j]=='e'||s[j]=='i'||s[j]=='o'||s[j]=='u'){
                i++;
            }
        }
        else{
            if(s[j]=='a'||s[j]=='e'||s[j]=='i'||s[j]=='o'||s[j]=='u'){
                i++;
            }
            res = Math.max(res,i);
            if(s[j-k+1]=='a'||s[j-k+1]=='e'||s[j-k+1]=='i'||s[j-k+1]=='o'||s[j-k+1]=='u'){
                i--;
            }
        }
    }
    return res;
};
