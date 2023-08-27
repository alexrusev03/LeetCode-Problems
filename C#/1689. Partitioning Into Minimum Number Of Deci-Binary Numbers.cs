public class Solution {
    public int MinPartitions(string n) {
        int res = 0;
        for(int i = 0; i < n.Length; i++){
            if(res < n[i]-'0'){
                res = n[i]-'0';
            }
        }
        return res;
    }
}
