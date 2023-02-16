class Solution {
    public int maxScoreSightseeingPair(int[] values) {
        int j= values[0];
        int res= 0;
        for(int i=1;i<values.length;i++){
            res=Math.max(res, j+values[i]-i);
            j=Math.max(j, values[i]+i);
        }
        return res;
    }
}
