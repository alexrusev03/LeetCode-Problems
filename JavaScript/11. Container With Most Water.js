/**
 * @param {number[]} height
 * @return {number}
 */
var maxArea = function(height) {
    var S=0;
    var l=0;
    var r = height.length-1;
    while(l<r){
        var h=Math.min(height[l],height[r]);
        S=Math.max(S,h*(r-l)); 
        if(height[l]<height[r]){
            l++;
        }
        else{
            r--;
        }
    }
    return S;
};
