/**
 * @param {number} m
 * @param {number} n
 * @param {number[][]} indices
 * @return {number}
 */
var oddCells = function(m, n, indices) {
	var arr = new Array(m).fill(0).map(x => Array(n).fill(0));
	var res = 0;
	for(var i=0; i<indices.length; i++){
		for(var j=0; j<m; j++){
			arr[j][indices[i][1]]++;
		}
		for(var k=0; k<n; k++){
			arr[indices[i][0]][k]++;
		}
	}
	for(var i=0; i<m; i++){
		for(var j=0; j<n; j++) 
			if(arr[i][j]%2==1){
				res++;
			}
	}
	return res;
};
