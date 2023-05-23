class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        vector<int> l(n);
        vector<int> r(n);
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
            res = max(res, heights[i] * (r[i] - l[i] - 1));
        }
        return res;
    }
};
