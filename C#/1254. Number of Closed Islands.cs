public class Solution {
    public int ClosedIsland(int[][] grid) {
        int m=grid.Length;
        int n=grid[0].Length;
        int res=0;
        for(int i=1;i<m-1;i++){
            for(int j=1;j<n-1;j++){
                if(grid[i][j] == 0 && solve(i, j, m, n, grid)==true){
                    res++;
                }
            }
        }
        return res;
    }
    public bool solve(int i, int j,int m, int n, int[][] grid){
        if(grid[i][j]==1){
            return true;
        }
        if(i==0 || j==0 || i==m-1 || j==n-1){
            return false;
        }
        grid[i][j]=1;
        bool left = solve(i, j - 1, m, n, grid);
        bool right = solve(i, j + 1, m, n, grid);
        bool up = solve(i - 1, j, m, n, grid);
        bool down = solve(i + 1, j, m, n, grid);
        return left && right && up && down;
    }
}
