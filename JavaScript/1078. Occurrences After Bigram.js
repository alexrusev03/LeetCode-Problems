/**
 * @param {string} text
 * @param {string} first
 * @param {string} second
 * @return {string[]}
 */
var findOcurrences = function(text, first, second) {
    var arr = text.split(" ");
    var l = new Array();
    for(var i=0; i<arr.length; i++){ 
        if(i+2 < arr.length){
            if(arr[i]==first && arr[i+1]==second){
                l.push(arr[i+2]);
            }
        }
    }
    var res = new Array();
    for(var j=0;j<l.length;j++){
        res[j]=l[j];
    }
    return res;
};
