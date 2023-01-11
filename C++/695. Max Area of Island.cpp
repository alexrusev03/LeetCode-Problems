class Solution {
public:
    void area(vector<vector<int>>& grid,int i, int j, int& count){
        int m = grid.size();
        int n = grid[0].size();
        if(i>=0 && j>=0 && i<m && j<n && grid[i][j]!=0){
            count++;
            grid[i][j]=0;
            area(grid,i+1, j, count);
            area(grid,i-1, j, count);
            area(grid,i, j+1, count);
            area(grid,i, j-1, count);
        }
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int maxArea = 0;
        for(int i = 0; i<m; i++){
            for(int j = 0; j<n; j++){
                if(grid[i][j]!=0){
                    int count = 0;
                    area(grid, i, j, count);
                    maxArea=max(maxArea, count);
                }
            }
        }
        return maxArea;
    }
};
