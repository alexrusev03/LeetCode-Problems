public class Solution {
    public int FindContentChildren(int[] g, int[] s) {
        int res = 0;
        int ch = 0;
        int co = 0;
        Array.Sort(g);
        Array.Sort(s);
        while(ch < g.Length && co < s.Length){
            if(s[co] >= g[ch]){
                res++;
                ch++;
            }
            co++;
        }
        return res;
    }
}
