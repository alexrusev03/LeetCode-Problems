/**
 * @param {string} s
 * @return {number}
 */
var lengthOfLastWord = function(s) {
    var count = 0;
    var n = s.length - 1;
    while (n >= 0 && s[n] == ' ') {
        n--;
    }
    for (var j = n; j>=0;j--) {
        if(s[j]==' '){
            return count;
        }
        count++;
    }
    return count;
};
