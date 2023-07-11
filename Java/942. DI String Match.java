class Solution {
    public int[] diStringMatch(String s) {
        int n = s.length();
        int i = 0;
        int j = n;
        int[] res = new int[n+1];
        for(int k = 0; k<n; k++){
            if(s.charAt(k)=='D'){
                res[k] = j;
                j--;
            }
            else{
                res[k] = i;
                i++;
            }
        }
        res[n] = j;
        return res;
    }
}
