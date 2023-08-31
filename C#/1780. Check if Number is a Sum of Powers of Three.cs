public class Solution {
    public bool CheckPowersOfThree(int n) {
        int max = (int)(Math.Log(n)/Math.Log(3));
        int res = 0;
        for(int i = max; i>=0; i--){
            if(res + Math.Pow(3,i) > n){
                continue;
            }
            res += (int)(Math.Pow(3,i));
            if(res==n){
                return true;
            }
            if(res+Math.Pow(3,i)<n){
                break;
            }
        }
        return false;
    }
}
