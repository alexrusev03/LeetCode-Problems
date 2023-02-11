public class Solution {
    public int DeleteAndEarn(int[] nums) {
        int n = 10001;
        int[] sum = new int[n]; 
        int[] arr = new int[n]; 
        foreach(int i in nums){
            sum[i] += i;
        }
        arr[0] = 0; arr[1] = sum[1];
        for(int i=2;i<n;i++){
            arr[i] = Math.Max(arr[i-2] + sum[i], arr[i-1]);
        }
        return arr[n-1];
    }
}
