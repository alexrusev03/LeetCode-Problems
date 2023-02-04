class Solution {
    public int findJudge(int n, int[][] trust) {
        if (trust.length == 0 && n == 1){
            return 1;
        }
        int[] trusted = new int[n+1];
        for(int i = 0; i<trust.length; i++){
            trusted[trust[i][0]]-=1;
            trusted[trust[i][1]]+=1;
        }
        for(int i = 0; i<trusted.length;i++){
            if(trusted[i]==n-1){return i;}
        }
        return -1;
    }
}
