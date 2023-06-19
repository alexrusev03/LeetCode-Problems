public class Solution {
    public int GetMoneyAmount(int n) {
        int[,] arr = new int[n+1,n+1];
        int res = helper(arr, 1, n);
        return res;
    }
    public int helper(int[,] arr, int l, int r) {
        if(l >= r){
            return 0;
        }
        if(arr[l,r]!=0){
            return arr[l,r];
        }
        int res = Int32.MaxValue;
        for(int i=l; i<=r; i++){
            res = Math.Min(res, i + Math.Max(helper(arr, l, i-1), helper(arr, i+1, r)));
        }
        arr[l,r] = res;
        return res;
    }
}
