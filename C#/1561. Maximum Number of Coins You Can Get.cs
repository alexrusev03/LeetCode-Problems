public class Solution {
    public int MaxCoins(int[] piles) {
        int n = piles.Length;
        Array.Sort(piles);
        int res=0;
        for(int i = n/3; i<n; i+=2){
            res += piles[i];
        }
        return res;
    }
}
