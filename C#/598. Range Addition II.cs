public class Solution {
    public int MaxCount(int m, int n, int[][] ops) {
        int r = m;
        int c = n;
        for(int i = 0; i<ops.Length; i++){
            if(ops[i][0] < r){
                r = ops[i][0];
            }
            if(ops[i][1] < c){
                c = ops[i][1];
            } 
        }
        return r*c;
    }
}
