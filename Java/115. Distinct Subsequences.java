class Solution {
    public int numDistinct(String s, String t) {
        int n1 = s.length();
        int n2 = t.length();
        int[][] arr = new int[n2+1][n1+1];
        for(int j=0; j<=n1; j++) {
            arr[0][j] = 1;
        }
        for(int i=0; i<n2; i++) {
            for(int j=0; j<n1; j++) {
                if(t.charAt(i) == s.charAt(j)) {
                    arr[i+1][j+1] = arr[i][j] + arr[i+1][j];
                }
                else {
                    arr[i+1][j+1] = arr[i+1][j];
                }
            }
        } 
        return arr[n2][n1];
    }
}
