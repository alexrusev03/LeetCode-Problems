class Solution {
    public List<String> summaryRanges(int[] nums) {
        int n = nums.length;
        List<String> res = new ArrayList();
        for(int i = 0; i < n; i++){
            int j = i;
            while(j + 1 < n && nums[j + 1] == nums[j] + 1){
                j++;
            }
            if(j > i){
                res.add(String.valueOf(nums[i]) + "->" + String.valueOf(nums[j]));
            }
            else{
                res.add(String.valueOf(nums[i]));
            }
            i = j;
        }
        return res;
    }
}
