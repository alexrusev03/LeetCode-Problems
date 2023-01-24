class Solution {
    public String longestPalindrome(String s) {
        int n=s.length();
        int len=1;
        int begin=0;
        for(int i=1;i<=n;i++){
            int l=i-1;
            int r=i;
            while(l>=0 && r<n && s.charAt(l)==s.charAt(r)){
                if(r-l+1>len){
                    len=r-l+1;
                    begin=l;
                }
                l--;
                r++;
            }
            l=i-1;
            r=i+1;
            while(l>=0 && r<n && s.charAt(l)==s.charAt(r)){
                if(r-l+1>len){
                    len=r-l+1;
                    begin=l;
                }
                l--;
                r++;
            }
        }
        return s.substring(begin,begin+len);
    }
}
