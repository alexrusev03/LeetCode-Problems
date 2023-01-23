public class Solution {
    public double FindMedianSortedArrays(int[] nums1, int[] nums2) {
        int n1=nums1.Length;
        int n2=nums2.Length;
        for(int i=n1; i<n1+n2;i++){
            nums1=nums1.Append(nums2[i-n1]).ToArray();
        }
        Array.Sort(nums1);
        if((n1+n2)%2==0){
            int num1=(n1+n2)/2-1;
            int num2=(n1+n2)/2;
            double med1=(nums1[num1]+nums1[num2])/2.0;
            return med1;
        }
        else{
            int med2=(n1+n2)/2;
            return nums1[med2];
        }
        return 0;
    }
}
