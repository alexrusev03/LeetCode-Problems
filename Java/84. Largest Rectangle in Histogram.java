class Solution {
    public int largestRectangleArea(int[] heights) {
        int n = heights.length;
        int[] l = new int[n];
        int[] r = new int[n];
        r[n - 1] = n;
        l[0] = -1;
        for (int i = 1; i < n; i++) {
            int temp = i - 1;
            while (temp >= 0 && heights[temp] >= heights[i]) {
                temp = l[temp];
            }
            l[i] = temp;
        }
        for (int i = n - 2; i >= 0; i--) {
            int temp = i + 1;
            while (temp < n && heights[temp] >= heights[i]) {
                temp = r[temp];
            }
            r[i] = temp;
        }
        int res = 0;
        for (int i = 0; i < n; i++) {
            res = Math.max(res, heights[i] * (r[i] - l[i] - 1));
        }
        return res;
    }
}
