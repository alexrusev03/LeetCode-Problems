public class Solution {
    public int FindComplement(int num) {
        int t = num;
        int p = 1;
        while(t!=0){
            t = t >> 1;
            p = p << 1;
        }
        return (p-1)^num;
    }
}
