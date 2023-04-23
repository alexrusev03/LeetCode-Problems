public class Solution {
    public int FirstMissingPositive(int[] nums) {
        int n = nums.Length;
        int[] arr = new int[n+1];
        for(int i = 0; i<n; i++){
            arr[i]=nums[i];
        }
        n+=1;
        for(int i = 0; i<n; i++){
            if(arr[i]<0 || arr[i]>n-1){
                arr[i]=0;
            }
        }
        for(int j = 0; j<n; j++){
            arr[arr[j]%n]+=n;
        }
        for(int k = 1; k<n; k++){
            if(arr[k]/n==0){
                return k;
            }
        }
        return n;
    }
}
