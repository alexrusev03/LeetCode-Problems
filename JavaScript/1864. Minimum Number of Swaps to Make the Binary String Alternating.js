/**
 * @param {string} s
 * @return {number}
 */
var minSwaps = function(s) {
    var zeros = 0;
    var ones = 0;
    for(var i = 0; i<s.length; i++){
        if(s[i] == '0'){
            zeros++;
        }
        else{
            ones++;
        }
    }
    if(Math.abs(zeros - ones) > 1){
        return -1;
    }
    if(zeros > ones){
        return helper(s, '0');
    }
    if(zeros < ones){
        return helper(s, '1');
    }
    return Math.min(helper(s, '0'), helper(s, '1'));
}
var helper = function(s, ch) {
    var c = 0;
    for(var i = 0; i < s.length; i += 2){
        if(s[i] != ch){
            c++;
        }
    }
    return c;
};
