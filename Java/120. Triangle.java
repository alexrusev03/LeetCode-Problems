class Solution {
    public int minimumTotal(List<List<Integer>> triangle) {
        int n=triangle.size();
        int[] dp = new int[n];
        for(int i=0; i<n; i++){
            dp[i]=triangle.get(n-1).get(i);
        }
        for(int i=n-2; i>=0; i--){
            int[] arr = new int[n];
            for(int j=i; j>=0; j--){
                arr[j]=Math.min(triangle.get(i).get(j)+dp[j], triangle.get(i).get(j)+dp[j+1]);
            }
            dp=arr;
        }
        return dp[0];
    }
}
