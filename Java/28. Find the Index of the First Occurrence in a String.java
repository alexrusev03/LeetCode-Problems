class Solution {
    public int strStr(String haystack, String needle) {
        int m=haystack.length();
        int n=needle.length();
        for(int i=0;i<m-n+1;i++){
            int j=0;
            while(j<n && haystack.charAt(i+j)==needle.charAt(j)){
                j++;
            }
            if(j==n){
                return i;
            }
        }
        return -1;
    }
}
