class Solution {
    public int findContentChildren(int[] g, int[] s) {
        int res = 0;
        int ch = 0;
        int co = 0;
        Arrays.sort(g);
        Arrays.sort(s);
        while(ch < g.length && co < s.length){
            if(s[co] >= g[ch]){
                res++;
                ch++;
            }
            co++;
        }
        return res;
    }
}
