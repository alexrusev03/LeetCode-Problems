/**
 * @param {number[]} g
 * @param {number[]} s
 * @return {number}
 */
var findContentChildren = function(g, s) {
    var res = 0;
    var ch = 0;
    var co = 0;
    g.sort((a,b) => a-b);
    s.sort((a,b) => a-b);
    while(ch < g.length && co < s.length){
        if(s[co] >= g[ch]){
            res++;
            ch++;
        }
        co++;
    }
    return res;
};
