class Solution {
    public List<List<Integer>> generate(int numRows) {
        int[][] arr = new int[numRows][];
        for(int i = 0; i<numRows;i++){
            int[] row = new int[i + 1];
            row[0] = 1;
            row[i] = 1;
            for (int j = 1; j<i;j++){
                row[j]=arr[i-1][j-1]+arr[i-1][j];
            }
            arr[i] = row;
        }
        return (List)Arrays.asList(arr);
    }
}
