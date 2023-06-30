/**
 * @param {number[]} arr
 * @return {number}
 */
var maxChunksToSorted = function(arr) {
    var res=0;
    var m=0;
    for(var i=0; i<arr.length; i++){
        m=Math.max(m,arr[i]);
        if(m==i){
            res++;
        }
    }
    return res;
};
