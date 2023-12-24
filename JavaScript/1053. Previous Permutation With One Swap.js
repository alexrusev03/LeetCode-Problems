/**
 * @param {number[]} arr
 * @return {number[]}
 */
var prevPermOpt1 = function(arr) {
    var n = arr.length;
    var i = n-2;
    var j = n-1;
    while(i>=0 && arr[i+1]>=arr[i]){
        i--;
    }
    if(i==-1){
        return arr;
    }
    while((arr[j]>=arr[i] && j>i) || arr[j-1]==arr[j]){
        j--;
    }
    var t = arr[i];
    arr[i] = arr[j];
    arr[j] = t;
    return arr;
};
