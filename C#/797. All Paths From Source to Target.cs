public class Solution {
    public IList<IList<int>> AllPathsSourceTarget(int[][] graph) {
        IList<IList<int>> res = new List<IList<int>>();
        IList<int> temp = new List<int>();
        int vis=graph.Length-1;
        temp.Add(0);
        solve(graph,0,res,temp,vis);
        return res;
    }
    public void solve(int[][] graph,int n,IList<IList<int>> res,IList<int> temp,int vis){
        foreach(int j in graph[n]){
            temp.Add(j);
            if(j==vis){
                res.Add(new List<int>(temp));
            }      
            solve(graph,j,res,temp,vis);        
            temp.RemoveAt(temp.Count-1); 
        }
    }
}
