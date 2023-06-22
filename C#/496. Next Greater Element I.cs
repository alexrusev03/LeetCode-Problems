public class Solution {
    public int[] NextGreaterElement(int[] nums1, int[] nums2) {
        int[] res = new int[nums1.Length];
        for(int i = 0; i<nums1.Length; i++){
            int f = -1;
            int pos = p(nums2,nums1[i]);
            for(int j = pos + 1; j<nums2.Length; j++){
                if(nums2[j]>nums1[i]){
                    f=nums2[j];
                    break;
                }
            }
            res[i]=f;
        }
        return res;
    }
    public int p(int[] nums2, int k){
        int n = nums2.Length; 
        for (int i = 0 ; i < n ; i ++){
            if (nums2[i] == k){
                return i; 
            }
        }
        return -1;
    }
}
