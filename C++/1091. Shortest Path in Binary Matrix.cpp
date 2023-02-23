class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int r = grid.size();
        int c = grid[0].size();
        queue<pair<pair<int,int>,int>> q;
        if(grid[0][0]!=0 || grid[r-1][c-1]!=0){return -1;}
        q.push({{0,0},0});
        vector<vector<int>> visited(r,vector<int>(c,0));
        visited[0][0]=1;
        while(!q.empty()){
            int qr = q.front().first.first;
            int qc = q.front().first.second;
            int d = q.front().second;
            q.pop();
            if(qr==r-1 && qc== c-1){return d+1;}
            int delr[] = {1,0,-1,-1,-1,0,1,1};
            int delc[] = {-1,-1,-1,0,1,1,1,0};
            for(int i=0;i<8;i++){
                int dr = qr + delr[i];
                int dc = qc + delc[i];
                if(dr>= 0 && dr<r && dc>=0 && dc<c && 
                grid[dr][dc]==0 && visited[dr][dc]==0){
                    q.push({{dr,dc},d+1});
                    visited[dr][dc]=1;
                }
            }
        }
        return -1;
    }
};
