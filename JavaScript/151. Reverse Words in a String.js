/**
 * @param {string} s
 * @return {string}
 */
var reverseWords = function(s) {
    var ans = "";
    var w = "";
    var i = 0;
    while(i < s.length){
        while(i < s.length && s[i] != ' '){
            w += s[i];
            i++;
        }
        if (w.length != 0) {
            if (ans.length != 0) {
                ans = w + " " + ans;
            }
            else {
                ans = w;
            }
            w = "";
        }
        i++;
    }
    return ans;
};
