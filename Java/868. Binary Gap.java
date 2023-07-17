class Solution {
    public int binaryGap(int n) {
        int res = 0;
        int l = -1;
        for(int i = 0; i<32; i++){
            if((n & (1 << i))!=0){
                if(l != -1){
                    res = Math.max(res, i - l);
                }
                l = i;
            }
        }
        return res;
    }
}
