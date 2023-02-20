/**
 * @param {number[]} height
 * @return {number}
 */
var trap = function(height) {
    var n= height.length;
    var sol=0;
    l=new Array(n).fill(0);
    r=new Array(n).fill(0);
    l[0]=height[0];
    r[n-1]=height[n-1];
    for(var i=1; i<n; i++){
        l[i]= Math.max(l[i-1],height[i]);
    }
    for(var i=n-2; i>=0; i--){
        r[i]= Math.max(r[i+1],height[i]);
    }
    for(var i=0; i<n; i++){
        sol+= (Math.min(l[i], r[i]))-height[i];
    }
    return sol;
};
