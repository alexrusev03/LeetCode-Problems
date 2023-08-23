/**
 * @param {number[]} position
 * @param {number} m
 * @return {number}
 */
var maxDistance = function(position, m) {
    position.sort((a,b) => a-b);
    var l = 1;
    var r = position[position.length-1] - position[0];
    var mid = 0;
    while(l<=r){
        mid = Math.floor((l+r)/2);
        if(helper(position,m,mid)==true){
            l = mid+1;
        }
        else{
            r = mid-1;
        }
    }
    return r;
}
var helper = function(position, m, d){
    var prevpos = position[0];
    m--;
    for(var i=1; i<position.length; i++){
        if(position[i]-prevpos >= d){
            m--;
            prevpos = position[i];
        }
        if(m==0){
            return true;
        }
    }
    return false;
};
