class Solution {
    public int divide(int dividend, int divisor) {
        if(dividend==Integer.MIN_VALUE && divisor==-1){return Integer.MAX_VALUE;}
        if(dividend==Integer.MIN_VALUE && divisor==1){return Integer.MIN_VALUE;}
        int sign=1;
        if((dividend>0 && divisor<0) || (dividend<0 && divisor>0)){
            sign = -1;
        }
        long dd = Math.abs((long) dividend);
        long dvsr = Math.abs((long) divisor);
        int res=0;
        while(dvsr<=dd) {
            long mul=1;
            long temp=dvsr;
            while(temp<=dd-temp) {
                mul+=mul;
                temp+=temp;
            }
            res+=mul;
            dd-=temp;
        }
        return sign*res;
    }
}
