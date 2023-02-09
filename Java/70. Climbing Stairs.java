class Solution {
    public int climbStairs(int n) {
        int prev=1,prev2=1;
        for(int i=2;i<=n;i++){
            int cur=prev+prev2;
            prev2=prev;
            prev=cur;
        }
        return prev;
    }
}
//or
class Solution {
    public int climbStairs(int n) {
        int[] ways = new int[n+10];
        ways[0]=0;
        ways[1]=1;
        ways[2]=2;
        ways[3]=3;
        for(int i = 4; i<=n; i++){
            ways[i]=ways[i-1]+ways[i-2];
        }
        return ways[n];
    }
}
