public class Solution {
    public char FindTheDifference(string s, string t) {
        int n = t.Length;
        int m = s.Length;
        char[] sArr = s.ToArray();
        char[] tArr = t.ToArray();
        Array.Sort(sArr);
        Array.Sort(tArr);
        int i = 0;
        while(i<m){
            if(sArr[i]!=tArr[i]){
                return tArr[i];
            }
            i++;
        }
        return tArr[n-1];
    }
}
