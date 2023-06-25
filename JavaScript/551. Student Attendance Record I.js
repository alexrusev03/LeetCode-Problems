/**
 * @param {string} s
 * @return {boolean}
 */
var checkRecord = function(s) {
    var a = 0;
    var l = 0;
    for(var i = 0; i<s.length; i++){
        if(s[i]=='L'){
            l++;
        }
        else if(s[i]=='A'){
            l = 0;
            a++;
        }
        else{
            l=0;
        }
        if(l>=3){
            return false;
        }
    }
    if(a>=2){
        return false;
    }
    return true;
};
