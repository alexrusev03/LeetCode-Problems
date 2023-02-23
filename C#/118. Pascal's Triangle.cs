public class Solution {
    public IList<IList<int>> Generate(int numRows) {
        List<IList<int>> arr= new List<IList<int>>();
        for(int i = 0; i<numRows;i++){
            var row = new List<int>();
            for (int j = 0; j<=i;j++){
                if((j-1)<0 || (j+1)>i){
                    row.Add(1);
                }
                else{
                    row.Add(arr[i-1][j-1] + arr[i-1][j]);
                }
            }
            arr.Add(row);
        }
        return arr;
    }
}
