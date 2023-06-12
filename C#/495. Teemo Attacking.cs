public class Solution {
    public int FindPoisonedDuration(int[] timeSeries, int duration) {
        int res = 0;
        for (int i = 0; i < timeSeries.Length; i++){
            if(i < timeSeries.Length - 1){
                if (timeSeries[i] + duration - 1 < timeSeries[i+1]){
                    res += duration; 
                }
                else{res += timeSeries[i+1] - timeSeries[i];}
            }
            else{res += duration;}
        }
        return res;
    }
}
