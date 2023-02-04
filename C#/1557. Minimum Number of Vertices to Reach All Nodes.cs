public class Solution {
    public IList<int> FindSmallestSetOfVertices(int n, IList<IList<int>> edges) {
        List<int> ans=new List<int>();
        int[] check= new int[n];
        foreach(var e in edges){
            check[e[1]]++;
        }
        for (int i = 0; i < n; ++i){
            if (check[i] == 0){
                ans.Add(i);
            }
        }
        return ans;
    }
}
