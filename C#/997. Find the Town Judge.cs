public class Solution {
    public int FindJudge(int n, int[][] trust) {
        if (trust.Length == 0 && n == 1){
            return 1;
        }
        int[] trusted=new int[n+1];
        for(int i = 0; i<trust.Length; i++){
            trusted[trust[i][0]]--;
            trusted[trust[i][1]]++;
        }
        for(int i = 0; i<trusted.Length;i++){
            if(trusted[i]==n-1){return i;}
        }
        return -1;
    }
}
