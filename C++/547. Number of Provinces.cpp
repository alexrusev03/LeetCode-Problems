class Solution {
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n= isConnected.size();
        int sol=0;
        vector<int> vis(n,0);
        for(int i=0;i<n;i++){
            if(vis[i]==0){
                sol++;
                dfs(isConnected, vis,i);
            }
        }
        return sol;
    }
    void dfs(vector<vector<int>>& isConnected, vector<int>& vis,int j){
        int n = isConnected.size();
        vis[j]=1;
        for(int i=0;i<n;i++){
            if(i!=j && vis[i]==0 && isConnected[i][j]==1)
                dfs(isConnected, vis, i);
        }
    }
};
