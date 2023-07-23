/**
 * @param {string[]} words
 * @param {string} order
 * @return {boolean}
 */
var isAlienSorted = function(words, order) {
    var dict = new Map();
    for(var i=0; i<order.length; i++){
        dict[order[i]] = i;
    }
    for(var i=0; i<words.length-1; i++){
        var s1 = words[i];
        var s2 = words[i+1];
        for(var j=0; j<s1.length; j++){
            if(j == s2.length){
                return false;
            }
            if(s1[j] != s2[j]){
                if(dict[s1[j]] > dict[s2[j]]){
                    return false;
                }
                break;
            }
        }
    }
    return true;
};
