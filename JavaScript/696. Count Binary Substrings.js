/**
 * @param {string} s
 * @return {number}
 */
var countBinarySubstrings = function(s) {
    var res=0;
    var temp=0;
    var c=1;
    for(var i = 0; i<s.length-1; i++){
        if(s[i]==s[i+1]){
            c++;
        }
        else{
            res+=Math.min(temp,c);
            temp=c;
            c=1;
        }
    }
    res+=Math.min(temp,c);
    return res;
};
