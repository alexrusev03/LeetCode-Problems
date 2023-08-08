/**
 * @param {number[]} arr
 * @return {number[][]}
 */
var minimumAbsDifference = function(arr) {
    var n = arr.length;
    var res = new Array();
    arr.sort((a,b)=>(a-b));
    var diff = Number.MAX_VALUE;
    for(var i=0;i<n-1;i++){
        diff = Math.min(diff,arr[i+1]-arr[i]);
    }
    for(var i=0;i<n-1;i++){
        if(arr[i+1]-arr[i] == diff){
            res.push([arr[i],arr[i+1]]);
        }
    }
    return res;
};
