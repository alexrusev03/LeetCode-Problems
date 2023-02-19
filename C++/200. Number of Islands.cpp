class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int res=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
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
    void helper(vector<vector<char>>& grid,int i,int j){
        if(i<0 || j<0 || i>=grid.size() || j>=grid[0].size()){
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
};
