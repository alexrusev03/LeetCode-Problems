class Solution {
    public int minCut(String s) {
        int n = s.length();
        int[] arr = new int[n+1];
        for(int i = n-1; i >= 0; i--) {
            if(check(s,i,n-1)==false){
                int temp = n;
                for(int j = i; j < n; j++) {
                    if(check(s,i,j)==true) {
                        temp=Math.min(temp, arr[j+1]);
                    }
                }
                arr[i] = temp + 1;
            }
        }
        return arr[0];
    }
    boolean check(String s, int i, int j){
        while (i<=j){
            if(s.charAt(i++) !=s.charAt(j--)){
                return false;
            }
        }
        return true;
    }
}
