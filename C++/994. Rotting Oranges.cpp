class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        vector<int> dir={-1,0,1,0,-1};
        int m = grid.size();
        int n = grid[0].size();
        queue <pair<int,int>> q;
        int fresh=0;
        for(int i = 0;i<m;i++){
            for(int j = 0; j<n; j++){
                if(grid[i][j]==2){
                    q.push({i,j});
                }
                if(grid[i][j]==1){
                    fresh++;
                }
            }
        }
        int min=-1;
        while(!q.empty()){
            int size=q.size();
            while(size--){
                pair<int, int> p = q.front();
                q.pop();
                for(int i = 0; i<4;i++){
                    int row = p.first + dir[i];
                    int col = p.second + dir[i+1];
                    if(row>=0 && row<m && col>=0 && col<n && grid[row][col]==1){
                        grid[row][col]=2;
                        q.push({row,col});
                        fresh--;
                    }
                }
            }
            min++;
        }
        if(fresh>0) return -1; 
        if(min==-1) return 0; 
        return min;
    }
};
