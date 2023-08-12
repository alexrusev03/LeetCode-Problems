class Solution {
    public boolean isPossibleDivide(int[] nums, int k) {
        int n = nums.length;
        if(n%k != 0){
            return false;
        }
        HashMap<Integer,Integer> mp = new HashMap<Integer,Integer>();
        Arrays.sort(nums);
        for(int i = 0; i<n; i++){
            mp.put(nums[i],mp.getOrDefault(nums[i],0)+1);
        }
        for(int i = 0; i<n; i++){
            if(mp.get(nums[i]) > 0){
                for(int j = nums[i] + 1; j < nums[i] + k; j++){
                    if(mp.getOrDefault(j,0) == 0){
                        return false;
                    }
                    mp.put(j,mp.get(j)-1);
                }
                mp.put(nums[i],mp.get(nums[i])-1);
            }
        }
        return true;
    }
}
