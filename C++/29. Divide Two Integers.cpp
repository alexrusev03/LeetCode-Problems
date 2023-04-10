class Solution {
public:
    int divide(int dividend, int divisor) {
        if(dividend==INT_MIN && divisor==-1){return INT_MAX;}
        if(dividend==INT_MIN && divisor==1){return INT_MIN;}
        int sign=1;
        if((dividend>0 && divisor<0) || (dividend<0 && divisor>0)){
            sign = -1;
        }
        long int dd = abs(dividend);
        long int dvsr = abs(divisor);
        int res=0;
        while(dvsr<=dd) {
            long int mul=1;
            long int temp=dvsr;
            while(temp<=dd-temp) {
                mul+=mul;
                temp+=temp;
            }
            res+=mul;
            dd-=temp;
        }
        return sign*res;
    }
};
