class Solution {
    public boolean checkPowersOfThree(int n) {
        int max = (int)(Math.log(n)/Math.log(3));
        int res = 0;
        for(int i = max; i>=0; i--){
            if(res + Math.pow(3,i) > n){
                continue;
            }
            res += Math.pow(3,i);
            if(res==n){
                return true;
            }
            if(res+Math.pow(3,i)<n){
                break;
            }
        }
        return false;
    }
}
