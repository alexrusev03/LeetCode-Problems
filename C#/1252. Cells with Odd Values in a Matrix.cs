public class Solution {
    public int OddCells(int m, int n, int[][] indices) {
		int[,] arr = new int[m,n];
		int res = 0;
		for(int i=0; i<indices.Length; i++){
			for(int j=0; j<m; j++){
				arr[j,indices[i][1]]++;
			}
			for(int k=0; k<n; k++){
				arr[indices[i][0],k]++;
			}
		}
		for(int i=0; i<m; i++){
			for(int j=0; j<n; j++) 
				if(arr[i,j]%2==1){
					res++;
				}
		}
		return res;
    }
}
