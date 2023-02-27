class Solution {
    public List<List<Integer>> combinationSum2(int[] candidates, int target) {
        List<Integer> temp = new ArrayList<>();
        Arrays.sort(candidates);
        List<List<Integer>> list = new ArrayList<>();
        solve(0, candidates, temp, target, list);
        List<List<Integer>> res = new ArrayList<>();
        for(int i = 0; i<list.size();i++){
            res.add(list.get(i));
        }
        return res;
    }
    public void solve(int idx, int[] candidates, List<Integer> temp, int target, List<List<Integer>> list){
        if(target == 0) {
            list.add(new ArrayList<>(temp));
            return;
        } 
        if(target<0){return;}
        for(int i=idx; i<candidates.length; i++){
            if(i>idx && candidates[i] == candidates[i-1]){
                continue;
            }
            temp.add(candidates[i]);
            solve(i+1, candidates, temp, target-candidates[i], list);
            temp.remove(temp.size()-1);
        }
    }
}
