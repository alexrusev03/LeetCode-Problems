public class Solution {
    public int MinCostConnectPoints(int[][] points) {
        int n = points.Length;
        int ans = 0;
        int j = 0;
        int k = 1;
        int[] cost = new int[n];
        for(int i = 0; i < n; i++){
            cost[i] = 10000000;
        }
        while(k < n){
            cost[j] = Int32.MaxValue;
            int min_j = j;
            for(int i = 0; i < n; i++){
                if(cost[i] != Int32.MaxValue){
                    cost[i] = Math.Min(cost[i], Math.Abs(points[j][0] - points[i][0]) + Math.Abs(points[j][1] - points[i][1]));
                    if(cost[i] < cost[min_j]){
                        min_j = i;
                    }
                }
            }
            ans += cost[min_j];
            j = min_j;
            k++;
        }
        return ans;
    }
}
