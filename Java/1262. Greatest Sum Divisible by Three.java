class Solution {
    public int maxSumDivThree(int[] nums) {
        int[] arr = new int[3];
        for(int i: nums){
            int[] copy = arr.clone();
            for(int j: copy){
                arr[(i+j)%3]=Math.max(arr[(i+j)%3],i+j);
            }
        }
        return arr[0];
    }
}
