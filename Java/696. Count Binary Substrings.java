class Solution {
    public int countBinarySubstrings(String s) {
        int res=0;
        int temp=0;
        int c=1;
        for(int i = 0; i<s.length()-1; i++){
            if(s.charAt(i)==s.charAt(i+1)){
                c++;
            }
            else{
                res+=Math.min(temp,c);
                temp=c;
                c=1;
            }
        }
        res+=Math.min(temp,c);
        return res;
    }
}
