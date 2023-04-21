/**
 * @param {string} a
 * @param {string} b
 * @return {string}
 */
var reverse = function(s){
    return s.split("").reverse().join("");
}
var addBinary = function(a, b) {
    var res="";
    var c = 0;
    var i = a.length - 1;
    var j = b.length - 1;
    while (i >= 0 || j >= 0 || c==1) {
        if (i >= 0){
            c += parseInt(a[i--]);
        }
        if (j >= 0){
            c += parseInt(b[j--]);
        }
        res = c % 2 + res;
        c = Math.floor(c/2);
    }
    return res;
};
