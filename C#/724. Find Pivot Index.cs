public class Solution {
    public int PivotIndex(int[] nums) {
        List<int> list = new List<int>();
        int sum=0;
        for(int i = 0; i<nums.Length; i++){
            sum+=nums[i];
            list.Add(sum);
        }
        int n = list.Count;
        if(sum==list[0]){
            return 0;
        }
        for(int i=1;i<n;i++){
            if(list[i-1]==list[n-1]-list[i]){
                return i;
            }
        }
        return -1;
    }
}
