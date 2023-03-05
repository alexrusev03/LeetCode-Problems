/**
 * @param {string} text1
 * @param {string} text2
 * @return {number}
 */
var longestCommonSubsequence = function(text1, text2) {
    var n1 = text1.length;
    var n2 = text2.length;
    var arr = new Array(n1+1).fill(0).map(() => new Array(n2+1).fill(0));
    for(var i=1; i<=n1; i++){
        for(var j=1; j<=n2; j++){
            if(text1[i-1] == text2[j-1]){
                arr[i][j] = arr[i-1][j-1] + 1;
            }
            else{
                arr[i][j] = Math.max(arr[i-1][j], arr[i][j-1]);
            }
        }
    }
    return arr[n1][n2];
};
