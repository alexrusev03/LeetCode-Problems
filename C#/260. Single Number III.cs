public class Solution {
    public int[] SingleNumber(int[] nums) {
        Dictionary<int, int> mp = new Dictionary<int, int>();
        int[] res = new int[2];
        foreach(int i in nums){
            if(mp.ContainsKey(i)){
                mp[i]++;
            }
            else{
                mp[i] = 1;
            }
        }
        int idx = 0;
        foreach(int i in nums){
            if(mp[i]==1){
                res[idx] = i;
                idx++;
            }
        }
        return res;
    }
}
