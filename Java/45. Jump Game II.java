class Solution {
    public int jump(int[] nums) {
        int end=0;
        int idx=0;
        int c=0;
        int n=nums.length;
        if(n==1){return 0;}
        for(int i=0;i<n;i++){
            idx=Math.max(idx,i+nums[i]);
            if(i==end){
                end=idx;
                c++;
            }
            if(end>=n-1){
                return c;
            }
        }
        return 0;
    }
}
