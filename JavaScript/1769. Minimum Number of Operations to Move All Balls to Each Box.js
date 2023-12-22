/**
 * @param {string} boxes
 * @return {number[]}
 */
var minOperations = function(boxes) {
        var n = boxes.length;
        var res = new Array(n);
        for(var i = 0; i<n; i++){
            var temp = 0;
            for(var j = 0; j<n; j++){
                if(boxes[j]=='1'){
                    temp+=Math.abs(i-j);
                }
            }
            res[i] = temp;
        }
        return res;
};
