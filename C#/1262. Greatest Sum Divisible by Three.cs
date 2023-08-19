public class Solution {
    public int MaxSumDivThree(int[] nums) {
        int[] arr = new int[3];
        foreach(int i in nums){
            int[] copy = (int[]) arr.Clone();
            foreach(int j in copy){
                arr[(i+j)%3]=Math.Max(arr[(i+j)%3],i+j);
            }
        }
        return arr[0];
    }
}
