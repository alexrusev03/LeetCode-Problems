/**
 * @param {string} s
 * @param {number} k
 * @return {number}
 */
var characterReplacement = function(s, k) {
    var j=0;
    var m=0;
    var res=0;
    var map = {};
    for(var i=0;i<s.length;i++){
        if(map[s[i]] = map[s[i]]){
            map[s[i]]+=1;
        } 
        else{
            map[s[i]]=1;
        }
        m=Math.max(m,map[s[i]]);
        if(i-j+1-m>k){
            map[s[j]]--;
            j++;
        }
        res=Math.max(res, i-j+1);
    }
    return res;
};
