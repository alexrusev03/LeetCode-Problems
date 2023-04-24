public class Solution {
    public int[][] Merge(int[][] intervals) {
        int n = intervals.Length;
        List<int[]> res = new List<int[]>();
        Array.Sort(intervals, (a,b)=>{return a[0]-b[0];});
        for(int i = 0; i<n; i++){
            if(res.Count == 0 || res[res.Count - 1][1] < intervals[i][0]){
                res.Add(intervals[i]);
            }
            else{
                res[res.Count - 1][1] = Math.Max(res[res.Count - 1][1], intervals[i][1]);
                res[res.Count - 1][0] = Math.Min(res[res.Count - 1][0], intervals[i][0]);
            }
        }
        return res.ToArray();
    }
}
