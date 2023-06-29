class Solution {
    public int[] constructArray(int n, int k) {
        int[] res = new int[n];
        int r = 0;
        int d = k+1;
        for(int i=0; i<k+1; i++){
            if(i%2==1){
                res[i]= d--;
            }
            else{
                res[i] = ++r;
            }
        }
        for(int i = k+1; i<n; i++){
            res[i] = i+1;
        }
        return res;
    }
}
