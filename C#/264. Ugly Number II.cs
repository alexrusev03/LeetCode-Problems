public class Solution {
    public int NthUglyNumber(int n) {
        if(n <= 0){return 0;}
        if(n == 1){return 1;}
        int a = 0;
        int b = 0;
        int c = 0;
        int[] seq=new int[n];
        seq[0] = 1;
        for(int i  = 1; i < n ; i ++){
            seq[i] = Math.Min(seq[a]*2, Math.Min(seq[b]*3,seq[c]*5));
            if(seq[i] == seq[a]*2) a++; 
            if(seq[i] == seq[b]*3) b++;
            if(seq[i] == seq[c]*5) c++;
        }
        return seq[n-1];
    }
}
