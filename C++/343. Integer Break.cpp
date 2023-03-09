class Solution {
public:
    int integerBreak(int n) {
		return helper(n-1,n);
	}
    int helper(int i,int n){
        if(i==0 || i==1){
            return 1;
        }
        int num=0;
        if(n>=i){
            num=i*helper(i,n-i);
        }
        return max(num,helper(i-1,n));
    }
};
