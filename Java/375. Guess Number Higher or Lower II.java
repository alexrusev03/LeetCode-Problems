class Solution {
    public int getMoneyAmount(int n) {
        Integer[][] arr = new Integer[n+1][n+1];
        int res = helper(arr, 1, n);
        return res;
    }
    public int helper(Integer[][] arr, int l, int r) {
        if(l >= r){
            return 0;
        }
        if(arr[l][r]!=null){
            return arr[l][r];
        }
        int res = Integer.MAX_VALUE;
        for(int i=l; i<=r; i++){
            res = Math.min(res, i + Math.max(helper(arr, l, i-1), helper(arr, i+1, r)));
        }
        return arr[l][r] = res;
    }
}
