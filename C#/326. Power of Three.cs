public class Solution {
    public bool IsPowerOfThree(int n) {
        if(n==1){
            return true;
        }
        if(n%3==0 && n>0){
            return IsPowerOfThree(n/3);
        }
        return false;
    }
}