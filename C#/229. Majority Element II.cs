public class Solution {
    public IList<int> MajorityElement(int[] nums) {
        int n = nums.Length;
        IList<int> res = new List<int>();
        Dictionary<int, int> dict = new Dictionary<int,int>();
        for(int i=0; i<n; i++){
            if(!dict.ContainsKey(nums[i])){
                dict.Add(nums[i], 0);
            }
            dict[nums[i]]++;
            if(dict[nums[i]]>n/3){
                res.Add(nums[i]);
                dict[nums[i]]=Int32.MinValue;
            }
        }
        return res;
    }
}
