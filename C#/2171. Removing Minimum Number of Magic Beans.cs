public class Solution {
    public long MinimumRemoval(int[] beans) {
        long n = beans.Length;
        long res = long.MaxValue;
        long sum = 0;
        Array.Sort(beans);
        foreach(int i in beans){
            sum += i;
        }
        for(int i = 0; i<n; i++){
            res = Math.Min(res, sum - (n - i) * beans[i]);
        }
        return res;
    }
}
