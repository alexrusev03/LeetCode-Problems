/**
 * @param {number[]} values
 * @param {number[]} labels
 * @param {number} numWanted
 * @param {number} useLimit
 * @return {number}
 */
var largestValsFromLabels = function(values, labels, numWanted, useLimit) {
    var arr = [];
    var mp = new Map();
    var n = values.length;
    var res = 0;
    for(var i=0; i<n; i++){
        arr.push([values[i], labels[i]]);
    }
    arr.sort((a, b) => a[0] - b[0]);
    for(var i=0; i<n; i++){
        var temp = arr.pop();
        var [value, label] = temp;
        if(!mp.has(label)){
            mp.set(label, 0);
        }
        mp.set(label, mp.get(label) + 1);
        if(numWanted!=0 && mp.get(label) <= useLimit){
            res += value;
            numWanted--;
        }
    }
    return res;
};
