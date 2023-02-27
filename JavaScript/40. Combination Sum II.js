/**
 * @param {number[]} candidates
 * @param {number} target
 * @return {number[][]}
 */
var combinationSum2 = function(candidates, target) {
    var temp = [];
    candidates.sort((a,b)=>a-b);
    var list = [];
    solve(0, candidates, temp, target, list);
    var res = [];
    for(var i = 0; i<list.length;i++){
        res.push(list[i]);
    }
    return res;
}
var solve = function(idx,candidates,temp,target,list){
    if(target == 0) {
        list.push([...temp]);
        return;
    } 
    if(target<0){return;}
    for(var i=idx; i<candidates.length; i++){
        if(i>idx && candidates[i] == candidates[i-1]){
            continue;
        }
        temp.push(candidates[i]);
        solve(i+1, candidates, temp, target-candidates[i], list);
        temp.pop();
    }
};
