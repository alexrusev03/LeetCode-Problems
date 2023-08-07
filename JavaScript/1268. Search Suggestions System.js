/**
 * @param {string[]} products
 * @param {string} searchWord
 * @return {string[][]}
 */
var suggestedProducts = function(products, searchWord) {
    var res = new Array();
    var l = 0;
    var r = products.length - 1;
    products.sort();
    for(var i = 0; i < searchWord.length; i++){
        var temp = new Array();
        while(l <= r && (products[l].length == i || products[l][i] < searchWord[i])){
            l++;
        }
        while(l <= r && (products[r].length == i || products[r][i] > searchWord[i])){
            r--;
        }
        for(var j = 0; j < 3; j++){
            if(l+j<=r){
                temp.push(products[l+j]);
            }
        }
        res.push(temp);
    }
    return res;
};
