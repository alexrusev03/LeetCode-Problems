public class Solution {
    public int MaxScoreSightseeingPair(int[] values) {
        int j= values[0];
        int res= 0;
        for(int i=1;i<values.Length;i++){
            res=Math.Max(res, j+values[i]-i);
            j=Math.Max(j, values[i]+i);
        }
        return res;
    }
}
