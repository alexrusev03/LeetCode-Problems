public class Solution {
    public int[] TwoSum(int[] numbers, int target) {
        int l = 0;
        int n = numbers.Length;
        int r = n-1;
        while(l<=r){
            if (numbers[l]+numbers[r]==target){
                return new int[]{l+1,r+1};
            }
            else if(numbers[l]+numbers[r]<target){
                l=l+1;
            }
            else{
                r=r-1;
            }
        }
        return new int[]{};
    }
}
