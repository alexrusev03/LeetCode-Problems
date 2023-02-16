/**
 * @param {number[][]} firstList
 * @param {number[][]} secondList
 * @return {number[][]}
 */
var intervalIntersection = function(firstList, secondList) {
    ans=[];
    var n1=firstList.length;
    var n2=secondList.length;
    var j = 0;
    for (var i = 0; i<n1; i++){
        while(j<n2) {
            if (secondList[j][0]>firstList[i][1]){
                break;
            }
            else if (secondList[j][1]<firstList[i][0]){
                j++;
            }
            else {
                ans.push([Math.max(firstList[i][0], secondList[j][0]), Math.min(firstList[i][1], secondList[j][1])]);
                if (firstList[i][1]>secondList[j][1]){
                    j++;
                }
                else{
                    break;
                }
            } 
        }
    }
    return ans;
};
