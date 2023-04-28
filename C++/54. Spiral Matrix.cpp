class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        int u = 0;
        int d = m - 1;
        int l = 0;
        int r = n - 1;
        int idx = 0;
        vector<int> res(m * n);
        while (u <= d && l <= r) {
            for (int i = l; i <= r; i++) {
                res[idx] = matrix[u][i];
                idx++;
            }
            u++;
            if (u > d) {
                break;
            }
            for (int j = u; j <= d; j++) {
                res[idx] = matrix[j][r];
                idx++;
            }
            r--;
            if (r < l) {
                break;
            }
            for (int i = r; i >= l; i--) {
                res[idx] = matrix[d][i];
                idx++;
            }
            d--;
            if (d < u) {
                break;
            }
            for (int j = d; j >= u; j--) {
                res[idx] = matrix[j][l];
                idx++;
            }
            if (l > r) {
                break;
            }
            l++;
        }
        return res;
    }
};
