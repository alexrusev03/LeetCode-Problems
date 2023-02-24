class Solution {
    public List<List<Integer>> allPathsSourceTarget(int[][] graph) {
        List<List<Integer>> res = new ArrayList<>();
        List<Integer> temp = new ArrayList<>();
        int vis=graph.length-1;
        temp.add(0);
        solve(graph,0,res,temp,vis);
        return res;
    }
    public void solve(int[][] graph,int n,List<List<Integer>> res,List<Integer> temp,int vis){
        for(int j:graph[n]){
            temp.add(j);
            if(j==vis){
                res.add(new ArrayList<>(temp));
            }      
            solve(graph,j,res,temp,vis);        
            temp.remove(temp.size()-1); 
        }
    }
}
