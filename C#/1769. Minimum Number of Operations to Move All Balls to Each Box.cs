public class Solution {
    public int[] MinOperations(string boxes) {
        int n = boxes.Length;
        int[] res = new int[n];
        for(int i = 0; i<n; i++){
            int temp = 0;
            for(int j = 0; j<n; j++){
                if(boxes[j]=='1'){
                    temp+=Math.Abs(i-j);
                }
            }
            res[i] = temp;
        }
        return res;
    }
}
