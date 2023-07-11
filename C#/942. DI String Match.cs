public class Solution {
    public int[] DiStringMatch(string s) {
        int n = s.Length;
        int i = 0;
        int j = n;
        int[] res = new int[n+1];
        for(int k = 0; k<n; k++){
            if(s[k]=='D'){
                res[k] = j;
                j--;
            }
            else{
                res[k] = i;
                i++;
            }
        }
        res[n] = j;
        return res;
    }
}
