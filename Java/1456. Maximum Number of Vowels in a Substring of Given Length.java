class Solution {
    public int maxVowels(String s, int k) {
        int i = 0;
        int res = 0;
        for(int j = 0; j < s.length(); j++){
            if(j<k-1){
                if(s.charAt(j)=='a'||s.charAt(j)=='e'||s.charAt(j)=='i'||s.charAt(j)=='o'||s.charAt(j)=='u'){
                    i++;
                }
            }
            else{
                if(s.charAt(j)=='a'||s.charAt(j)=='e'||s.charAt(j)=='i'||s.charAt(j)=='o'||s.charAt(j)=='u'){
                    i++;
                }
                res = Math.max(res,i);
                if(s.charAt(j-k+1)=='a'||s.charAt(j-k+1)=='e'||s.charAt(j-k+1)=='i'||s.charAt(j-k+1)=='o'||s.charAt(j-k+1)=='u'){
                    i--;
                }
            }
        }
        return res;
    }
}
