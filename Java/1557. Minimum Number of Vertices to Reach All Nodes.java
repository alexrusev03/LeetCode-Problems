class Solution {
    public List<Integer> findSmallestSetOfVertices(int n, List<List<Integer>> edges) {
        List<Integer> ans=new ArrayList<>();
        boolean[] check=new boolean[n];
        for (List<Integer> e: edges){
            check[e.get(1)]=true;
        }
        for (int i = 0; i < n; ++i){
            if (check[i] == false){
                ans.add(i);
            }
        }
        return ans;
    }
}
