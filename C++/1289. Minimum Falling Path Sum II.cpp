class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<vector<int>> vec(n,vector<int>(n));
        for(int i=0;i<n;i++){
            vec[0][i]=grid[0][i];
        }
        int res=INT_MAX;
        for(int i=1;i<n;i++){
            for(int j=0;j<n;j++){
                int temp=INT_MAX;
                for(int k=0;k<n;k++){
                    if(k==j){
                        continue;
                    }
                    temp=min(temp,grid[i][j]+vec[i-1][k]);
                }
                vec[i][j]=temp;
            }
        }
        for(auto i: vec[n-1]){
            res=min(res,i);
        }
        return res;
    }
};
