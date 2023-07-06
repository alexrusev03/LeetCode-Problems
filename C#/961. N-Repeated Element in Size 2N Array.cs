public class Solution {
    public int RepeatedNTimes(int[] nums) {
        Dictionary<int, int> dict = new Dictionary<int,int>();
        foreach(int i in nums){
            if(!dict.ContainsKey(i)){
                dict[i] = 1;
            }
            else{
                dict[i]++;
            }
            if(dict[i]>1){
                return i;
            }
        }
        return 0;
    }
}
