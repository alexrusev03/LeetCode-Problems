public class Solution {
    public int FindLength(int[] nums1, int[] nums2) {
        int m=nums1.Length;
        int n=nums2.Length;
        int res=0;
        int[,] arr = new int[m+1,n+1];
        for(int i=1; i<m+1; i++){
            for(int j=1; j<n+1; j++){
                if(nums1[i-1]==nums2[j-1]){
                    arr[i,j]=arr[i-1,j-1]+1;
                    res=Math.Max(arr[i,j],res);
                }
            }
        }
        return res;
    }
}
