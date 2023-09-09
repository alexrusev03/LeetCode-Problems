class Solution {
    public int maximumUniqueSubarray(int[] nums) {
        int res = 0;
        int curr = 0;
        int j = 0;
        HashMap<Integer, Integer> mp = new HashMap<>();
        for(int i = 0; i < nums.length; i++){
            mp.put(nums[i], mp.getOrDefault(nums[i],0)+1);
            curr += nums[i];
            while(mp.get(nums[i]) > 1){
                curr -= nums[j];
                mp.put(nums[j], mp.get(nums[j])-1);
                j++;
            }
            res = Math.max(res, curr);
        }
        return res;
    }
}
