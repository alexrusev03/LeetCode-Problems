class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        int count=0;
        int min=INT_MAX;
        long long res=0;
        for(int i=0; i<matrix.size(); i++){
            for(int j=0; j<matrix[0].size(); j++){
                if(matrix[i][j]<0){
                    count+=1;
                }
                res+=abs(matrix[i][j]);
                if(abs(matrix[i][j])<min){
                    min=abs(matrix[i][j]);
                }
            }
        }
        if(count%2==1){
            return res-(2*min);
        }
        else{
            return res;
        }
    }
};
