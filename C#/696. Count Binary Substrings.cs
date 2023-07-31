public class Solution {
    public int CountBinarySubstrings(string s) {
        int res=0;
        int temp=0;
        int c=1;
        for(int i = 0; i<s.Length-1; i++){
            if(s[i]==s[i+1]){
                c++;
            }
            else{
                res+=Math.Min(temp,c);
                temp=c;
                c=1;
            }
        }
        res+=Math.Min(temp,c);
        return res;
    }
}
