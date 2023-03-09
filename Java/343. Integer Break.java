class Solution {
    public int integerBreak(int n) {
		return helper(n-1,n);
	}
    public int helper(int i,int n){
        if(i==0 || i==1){
            return 1;
        }
        int num=0;
        if(n>=i){
            num=i*helper(i,n-i);
        }
        return Math.max(num,helper(i-1,n));
    }
}
