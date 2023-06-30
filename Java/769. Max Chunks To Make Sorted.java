class Solution {
    public int maxChunksToSorted(int[] arr) {
        int res=0;
        int m=0;
        for(int i=0; i<arr.length; i++){
            m=Math.max(m,arr[i]);
            if(m==i){
                res++;
            }
        }
        return res;
    }
}
