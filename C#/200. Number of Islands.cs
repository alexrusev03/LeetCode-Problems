public class Solution {
    public int NumIslands(char[][] grid) {
        int res=0;
        for(int i=0;i<grid.Length;i++){
            for(int j=0;j<grid[0].Length;j++){
                if(grid[i][j]=='0' || grid[i][j]=='2'){
                    continue;
                }
                else{
                    res++;
                    helper(grid,i,j+1);
                    helper(grid,i,j-1);
                    helper(grid,i-1,j);
                    helper(grid,i+1,j);
                }
            }
        }
        return res;
    }
    void helper(char[][] grid,int i,int j){
        if(i<0 || j<0 || i>=grid.Length || j>=grid[0].Length){
            return;
        }
        if(grid[i][j]=='0' || grid[i][j]=='2'){
            return;
        }
        if(grid[i][j]=='1'){
            grid[i][j]='2';
            helper(grid,i,j+1);
            helper(grid,i,j-1);
            helper(grid,i-1,j);
            helper(grid,i+1,j);
        }
    }
}
