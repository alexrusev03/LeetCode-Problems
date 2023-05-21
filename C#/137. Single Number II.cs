public class Solution {
    public int SingleNumber(int[] nums) {
        Dictionary<int, int> dict = new Dictionary<int, int>();
        for (int i = 0; i<nums.Length; i++){
            if (dict.ContainsKey(nums[i])){
                dict[nums[i]]++;
            }
            else {
                dict[nums[i]]=1;
            }
        }
        for (int i = 0; i<nums.Length; i++){
            if(dict[nums[i]]==1){
                return nums[i];
            }
        }
        return 0;
    }
}
