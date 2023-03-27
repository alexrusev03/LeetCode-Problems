public class Solution {
    public int Reverse(int x) {
        long ans=0;
        while(x!=0){
            ans=ans*10+x%10;
            x=x/10;
        }
        if(ans>Int32.MaxValue || ans<-Int32.MaxValue){
            return 0;
        }
        return (int)ans;
    }
}
