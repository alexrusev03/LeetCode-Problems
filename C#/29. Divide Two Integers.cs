public class Solution {
    public int Divide(int dividend, int divisor) {
        if(dividend==Int32.MinValue && divisor==-1){return Int32.MaxValue;}
        if(dividend==Int32.MinValue && divisor==1){return Int32.MinValue;}
        int sign=1;
        if((dividend>0 && divisor<0) || (dividend<0 && divisor>0)){
            sign = -1;
        }
        long dd = Math.Abs((long) dividend);
        long dvsr = Math.Abs((long) divisor);
        int res=0;
        while(dvsr<=dd) {
            int mul=1;
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
