class Solution {
public:
    int countSubIslands(vector<vector<int>>& grid1, vector<vector<int>>& grid2) {
        int m = grid2.size();
        int n = grid2[0].size();
        int res = 0;
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(grid2[i][j] == 1){
                    int f = 1;
                    helper(grid1, grid2, i, j, f);
                    res+=f;
                }
            }
        }
        return res;
    }
    void helper(vector<vector<int>>& grid1, vector<vector<int>>& grid2, int i, int j, int& f) {
        int m = grid2.size();
        int n = grid2[0].size();
        if(i < 0 || i == m || j < 0 || j == n || grid2[i][j] == 0){
            return;
        }
        if(grid1[i][j]==0 && grid2[i][j] == 1){
            f = 0;
        }
        grid2[i][j] = 0;
        helper(grid1, grid2, i - 1, j, f);
        helper(grid1, grid2, i + 1, j, f);
        helper(grid1, grid2, i, j - 1, f);
        helper(grid1, grid2, i, j + 1, f);
    }
};
