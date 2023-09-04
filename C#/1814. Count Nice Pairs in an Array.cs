public class Solution {
    public int CountNicePairs(int[] nums) {
        Dictionary<int, int> dict = new Dictionary<int, int>();
        int res = 0;
        foreach(int i in nums){
            if(dict.ContainsKey(i - reverse(i))){
                res = (res + dict[i - reverse(i)]) % 1000000007;
                dict[i - reverse(i)]++;
            }
            else{
                dict[i - reverse(i)] = 1;
            }
        }
        return res;
    }
    int reverse(int i){
        long rev=0;
        while(i!=0){
            rev=rev*10 + i%10;
            i/=10;
        }
        return (int)rev;
    }
}
