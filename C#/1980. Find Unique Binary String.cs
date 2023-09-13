public class Solution {
    public string FindDifferentBinaryString(string[] nums) {
        StringBuilder res = new StringBuilder();
        for(int i = 0; i < nums.Length; i++){
            if(nums[i][i] == '0'){
                res.Append('1');
            }
            else{
                res.Append('0');
            } 
        }
        return res.ToString();
    }
}
