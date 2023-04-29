public class Solution {
    public int[][] Insert(int[][] intervals, int[] newInterval) {
        int n=intervals.Length;
        List<int[]> res = new List<int[]>();
        for(int i = 0; i<n; i++) {
            if(intervals[i][1] < newInterval[0]){
                res.Add(intervals[i]);
            }
            else if(newInterval[1] < intervals[i][0]){
                res.Add(newInterval);
                newInterval=intervals[i];
            }
            else{
                newInterval[0]=Math.Min(newInterval[0],intervals[i][0]);
                newInterval[1]=Math.Max(newInterval[1],intervals[i][1]);
            }    
        }
        res.Add(newInterval);
        return res.ToArray();
    }
}
