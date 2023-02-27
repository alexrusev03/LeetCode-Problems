public class Solution {
    public IList<IList<int>> CombinationSum2(int[] candidates, int target) {
        List<int> temp = new();
        Array.Sort(candidates);
        List<IList<int>> list = new();
        solve(0, candidates, temp, target, list);
        List<IList<int>> res = new();
        for(int i = 0; i<list.Count;i++){
            res.Add(list[i]);
        }
        return res;
    }
    public void solve(int idx, int[] candidates, List<int> temp, int target, List<IList<int>> list){
        if(target == 0) {
            list.Add(new List<int>(temp));
            return;
        } 
        if(target<0){return;}
        for(int i=idx; i<candidates.Length; i++){
            if(i>idx && candidates[i] == candidates[i-1]){
                continue;
            }
            temp.Add(candidates[i]);
            solve(i+1, candidates, temp, target-candidates[i], list);
            temp.RemoveAt(temp.Count-1);
        }
    }
}
