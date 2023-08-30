public class Solution {
    int f = 0;
    public int CountSubIslands(int[][] grid1, int[][] grid2) {
        int m = grid2.Length;
        int n = grid2[0].Length;
        int res = 0;
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(grid2[i][j] == 1){
                    f = 1;
                    helper(grid1, grid2, i, j);
                    res+=f;
                }
            }
        }
        return res;
    }
    public void helper(int[][] grid1, int[][] grid2, int i, int j) {
        int m = grid2.Length;
        int n = grid2[0].Length;
        if(i < 0 || i == m || j < 0 || j == n || grid2[i][j] == 0){
            return;
        }
        if(grid1[i][j]==0 && grid2[i][j] == 1){
            f = 0;
        }
        grid2[i][j] = 0;
        helper(grid1, grid2, i - 1, j);
        helper(grid1, grid2, i + 1, j);
        helper(grid1, grid2, i, j - 1);
        helper(grid1, grid2, i, j + 1);
    }
}
