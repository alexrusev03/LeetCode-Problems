class Solution {
    public String convert(String s, int numRows) {
        int n = s.length();
        if(numRows==1){
            return s;
        }
        String ans="";
        for(int i=0;i<numRows;i++){
            int j=i;
            int k=2*(numRows-1-i);
            while(j<n){
                ans+=s.charAt(j);
                if(i>0 && i<numRows-1 && j+k<n){
                    ans+=s.charAt(j+k);
                }
                j+=2*(numRows-1);
            }
        }
        return ans;
    }
}
