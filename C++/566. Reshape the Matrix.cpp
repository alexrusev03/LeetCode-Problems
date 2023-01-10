class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        vector<int> v0(c);
        vector<vector<int>> grid(r,v0);
        int m = mat.size();
        int n = mat[0].size();
        if(m*n!=r*c){
            return mat;
        }
        else if(m==r && n==c){
            return mat;
        }
        else{
            for(int i = 0; i<m*n;i++){
                grid[i/c][i%c]=mat[i/n][i%n];
            }
        }
        return grid;
    }
};
