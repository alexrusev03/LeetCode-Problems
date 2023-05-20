public class Solution {
    public int MinCut(string s) {
        int n = s.Length;
        int[] arr = new int[n+1];
        for(int i = n-1; i >= 0; i--) {
            if(check(s,i,n-1)==false){
                int min = n;
                for(int j = i; j < n; j++) {
                    if(check(s,i,j)==true) {
                        min=Math.Min(min, arr[j+1]);
                    }
                }
                arr[i] = min + 1;
            }
        }
        return arr[0];
    }
    bool check(string s, int i, int j){
        while (i<=j){
            if(s[i++] !=s[j--]){
                return false;
            }
        }
        return true;
    }
}
