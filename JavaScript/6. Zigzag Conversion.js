/**
 * @param {string} s
 * @param {number} numRows
 * @return {string}
 */
var convert = function(s, numRows) {
    var n = s.length;
    if(numRows==1){
        return s;
    }
    var ans="";
    for(var i=0;i<numRows;i++){
        var j=i;
        var k=2*(numRows-1-i);
        while(j<n){
            ans+=s[j];
            if(i>0 && i<numRows-1 && j+k<n){
                ans+=s[j+k];
            }
            j+=2*(numRows-1);
        }
    }
    return ans;
};
