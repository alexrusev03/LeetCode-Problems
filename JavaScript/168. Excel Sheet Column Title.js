/**
 * @param {number} columnNumber
 * @return {string}
 */
var convertToTitle = function(columnNumber) {
        var res="";    
        while(columnNumber>0) {
            columnNumber--;
            var  i = columnNumber%26;
            res = String.fromCharCode(i+65) + res;
            columnNumber=Math.floor(columnNumber/26);
        }
        return res;
};
