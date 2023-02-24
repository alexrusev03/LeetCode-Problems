class Solution {
public:
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<int>temp;
        vector<vector<int>> res;
        int vis=graph.size()-1;
        solve(graph,0,res,temp,vis);
        return res;
    }
    void solve(vector<vector<int>>& graph,int n,vector<vector<int>> &res,vector<int>&temp,int vis){
        temp.push_back(n);
        for(int j:graph[n]){
            if(j==vis){
                temp.push_back(vis);
                res.push_back(temp);
                temp.pop_back();
                continue;
            }      
            solve(graph,j,res,temp,vis);        
            temp.pop_back();
        }
    }
};
