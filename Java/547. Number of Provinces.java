class Solution {
    public int findCircleNum(int[][] isConnected) {
        int n= isConnected.length;
        int sol=0;
        int[] vis = new int[n];
        for(int i=0;i<n;i++){
            if(vis[i]==0){
                sol++;
                dfs(isConnected, vis,i);
            }
        }
        return sol;
    }
    public void dfs(int[][] isConnected, int[] vis,int j){
        int n = isConnected.length;
        vis[j]=1;
        for(int i=0;i<n;i++){
            if(i!=j && vis[i]==0 && isConnected[i][j]==1)
                dfs(isConnected, vis, i);
        }
    }
}
