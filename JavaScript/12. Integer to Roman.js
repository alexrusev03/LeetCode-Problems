/**
 * @param {number} num
 * @return {string}
 */
var intToRoman = function(num) {
    var arr = [1000,900,500,400,100,90,50,40,10,9,5,4,1];
    var str = ["M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"];
    var r = "";
    for (var i = 0; i < arr.length; i++) {
        while (num >= arr[i]) {
            r += str[i];
            num -= arr[i];
        }
    }
    return r;
};
