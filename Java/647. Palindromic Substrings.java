class Solution {
    public int countSubstrings(String s) {
        int res = 0;
        int n = s.length();
        for(int i = 0; i<n; i++){
            int j = i;
            int k = i;
            while(j>=0 && k<n && s.charAt(j) == s.charAt(k)){
                j--;
                k++;
                res++;
            }
            j = i;
            k = i+1;
            while(j>=0 && k<n && s.charAt(j) == s.charAt(k)){
                j--;
                k++;
                res++;
            }
        }
        return res;
    }
}
