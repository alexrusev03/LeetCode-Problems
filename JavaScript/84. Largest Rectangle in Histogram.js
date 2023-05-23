/**
 * @param {number[]} heights
 * @return {number}
 */
var largestRectangleArea = function(heights) {
    var n = heights.length;
    var l = new Array(n).fill(0);
    var r = new Array(n).fill(0);
    r[n - 1] = n;
    l[0] = -1;
    for (var i = 1; i < n; i++) {
        var temp = i - 1;
        while (temp >= 0 && heights[temp] >= heights[i]) {
            temp = l[temp];
        }
        l[i] = temp;
    }
    for (var i = n - 2; i >= 0; i--) {
        var temp = i + 1;
        while (temp < n && heights[temp] >= heights[i]) {
            temp = r[temp];
        }
        r[i] = temp;
    }
    var res = 0;
    for (var i = 0; i < n; i++) {
        res = Math.max(res, heights[i] * (r[i] - l[i] - 1));
    }
    return res;
};
