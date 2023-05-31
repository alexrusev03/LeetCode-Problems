/**
 * @param {number} ax1
 * @param {number} ay1
 * @param {number} ax2
 * @param {number} ay2
 * @param {number} bx1
 * @param {number} by1
 * @param {number} bx2
 * @param {number} by2
 * @return {number}
 */
var computeArea = function(ax1, ay1, ax2, ay2, bx1, by1, bx2, by2) {
    var area1 = (ax2-ax1)*(ay2-ay1);
    var area2 = (bx2-bx1)*(by2-by1);
    var intersection = 0;
    if(ax2>bx1 && bx2>ax1 && by2>ay1 && ay2>by1){
        intersection = (Math.min(bx2 , ax2) - Math.max(bx1,ax1))*(Math.min(ay2 , by2) - Math.max(by1,ay1));
    }
    return area1+area2-intersection;
};
