public class Solution {
    public int MaxChunksToSorted(int[] arr) {
        int res=0;
        int m=0;
        for(int i=0; i<arr.Length; i++){
            m=Math.Max(m,arr[i]);
            if(m==i){
                res++;
            }
        }
        return res;
    }
}
