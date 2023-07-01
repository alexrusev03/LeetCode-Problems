public class Solution {
    public int DistributeCandies(int[] candyType) {
        int n = candyType.Length;
        Dictionary<int, int> dict = new Dictionary<int, int>();
        int res = 0;
        foreach(int i in candyType) {
            if (!dict.ContainsKey(i)) {
                if (res == n/2) {
                    return n/2;
                }
                res++;
            }
            dict[i]=1;
        }
        return res;
    }
}
