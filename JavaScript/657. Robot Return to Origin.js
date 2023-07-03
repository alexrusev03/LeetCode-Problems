/**
 * @param {string} moves
 * @return {boolean}
 */
var judgeCircle = function(moves) {
    var u=0, d=0, l=0, r=0;
    for(var i of moves){
        if(i == 'U'){
            u++;
        }
        else if(i == 'D'){
            d++;
        }
        else if(i == 'L'){
            l++;
        }
        else if(i == 'R'){
            r++;
        }
    }
    if(u==d && l==r){
        return true;
    }
    return false;
};
