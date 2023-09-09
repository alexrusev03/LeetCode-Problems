public class Solution {
    public int MaximumUniqueSubarray(int[] nums) {
        int res = 0;
        int curr = 0;
        int j = 0;
        Dictionary<int, int> mp = new Dictionary<int, int>();
        for(int i = 0; i < nums.Length; i++){
            if(!mp.ContainsKey(nums[i])){
                mp[nums[i]] = 1;
            }
            else{
                mp[nums[i]]++;
            }
            curr += nums[i];
            while(mp[nums[i]] > 1){
                curr -= nums[j];
                mp[nums[j]]--;
                j++;
            }
            res = Math.Max(res, curr);
        }
        return res;
    }
}
