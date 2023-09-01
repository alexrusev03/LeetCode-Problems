public class Solution {
    public int ReinitializePermutation(int n) {
        int res = 1;
        int i = n/2;
        while(i > 1){
            if(i%2==0){
                i /= 2;
            }
            else{
                i = n/2+(i-1)/2;
            }
            res++;
        }
        return res;
    }
}
