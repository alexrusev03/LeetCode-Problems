/**
 * @param {string} s
 * @return {string}
 */
var reverseOnlyLetters = function(s) {
    var string = s.split("");
    var l = 0;
    var r = string.length - 1;
    while(l <= r){
        if(!(/[a-zA-Z]/.test(string[l]))){
            l++;
        }
        else if(!(/[a-zA-Z]/.test(string[r]))){
            r--;
        }
        else{
            var temp = string[l];
            string[l++] = string[r];
            string[r--] = temp;
        }
    }
    return string.join('');
};
