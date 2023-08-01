class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& indices) {
		vector<vector<int>> vec(m,vector<int>(n));
		int res = 0;
		for(int i=0; i<indices.size(); i++){
			for(int j=0; j<m; j++){
				vec[j][indices[i][1]]++;
			}
			for(int k=0; k<n; k++){
				vec[indices[i][0]][k]++;
			}
		}
		for(int i=0; i<m; i++){
			for(int j=0; j<n; j++) 
				if(vec[i][j]%2==1){
					res++;
				}
		}
		return res;
    }
};
