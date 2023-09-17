/**
 * @param {string} s
 * @param {string} part
 * @return {string}
 */
var removeOccurrences = function(s, part) {
    var i = s.indexOf(part);
    while(i != -1){
        s = s.slice(0, i) + s.slice(i + part.length);
        i = s.indexOf(part);
    }
    return s;
};
