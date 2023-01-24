public class Solution {
    public string LongestPalindrome(string s) {
        int n=s.Length;
        int len=1;
        int begin=0;
        for(int i=1;i<=n;i++){
            int l=i-1;
            int r=i;
            while(l>=0 && r<n && s[l]==s[r]){
                if(r-l+1>len){
                    len=r-l+1;
                    begin=l;
                }
                l--;
                r++;
            }
            l=i-1;
            r=i+1;
            while(l>=0 && r<n && s[l]==s[r]){
                if(r-l+1>len){
                    len=r-l+1;
                    begin=l;
                }
                l--;
                r++;
            }
        }
        return s.Substring(begin,len);
    }
}
