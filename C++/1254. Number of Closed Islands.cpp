class Solution {
public:
    int closedIsland(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
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
    bool solve(int i, int j,int m, int n, vector<vector<int>>&grid){
        if(grid[i][j]==1){
            return true;
        }
        if(i==0 || j==0 || i==m-1 || j==n-1){
            return false;
        }
        grid[i][j]=1;
        bool l = solve(i, j - 1, m, n, grid);
        bool r = solve(i, j + 1, m, n, grid);
        bool u = solve(i - 1, j, m, n, grid);
        bool d = solve(i + 1, j, m, n, grid);
        return l && r && u && d;
    }
};
