/**
 * @param {number[][]} points
 * @return {number}
 */
var maxPoints = function(points) {
    var n = points.length;
    if(n <= 2){
        return n;
    }
    var res= 0;
    for(var i = 0; i < n; i++){
        for(var j = i+1; j < n; j++){ 
            var x1 = points[i][0];
            var x2 = points[j][0];
            var y1 = points[i][1];
            var y2 = points[j][1];
            var num = 2;
            for(var k = 0; k < n && k!=i && k!=j; k++){
                var x3 = points[k][0];
                var y3 = points[k][1];
                if((y2-y1)*(x3-x1)==(x2-x1)*(y3-y1)){
                    num++;
                }
            }
            res = Math.max(res , num);
        }
    }
    return res;
};
