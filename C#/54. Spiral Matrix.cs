public class Solution {
    public IList<int> SpiralOrder(int[][] matrix) {
        int m = matrix.Length;
        int n = matrix[0].Length;
        int u = 0;
        int d = m - 1;
        int l = 0;
        int r = n - 1;
        int idx = 0;
        int[] res = new int[m*n];
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
            l++;
            if (l > r) {
                break;
            }
        }
        return res.ToList();
    }
}
