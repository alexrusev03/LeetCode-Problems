/**
 * @param {string} s
 * @param {string} goal
 * @return {boolean}
 */
var rotateString = function(s, goal) {
    if (s.length != goal.length){
        return false;
    }
    for (var i = 0; i < s.length; i++){
        if (s==goal){
            return true;
        }
        s = s.substring(1) + s[0];
    }
    return false;
};
