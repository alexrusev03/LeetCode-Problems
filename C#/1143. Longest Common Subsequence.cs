public class Solution {
    public int LongestCommonSubsequence(string text1, string text2) {
        int n1 = text1.Length;
        int n2 = text2.Length;
        int[,] arr = new int[n1+1,n2+1];
        for(int i=1; i<=n1; i++){
            for(int j=1; j<=n2; j++){
                if(text1[i-1] == text2[j-1]){
                    arr[i,j] = arr[i-1,j-1] + 1;
                }
                else{
                    arr[i,j] = Math.Max(arr[i-1,j], arr[i,j-1]);
                }
            }
        }
        return arr[n1,n2];
    }
}
