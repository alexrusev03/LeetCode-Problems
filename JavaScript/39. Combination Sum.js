/**
 * @param {number[]} candidates
 * @param {number} target
 * @return {number[][]}
 */
var combinationSum = function(candidates, target) {
    var res = [];
    var list = [];
    helper(candidates, res, list, target, 0);
    return res;
};
var helper = function(candidates,res,list,target,idx){
    if(target < 0){
        return;
    }
    else if(target == 0){
        res.push([...list]);
    }
    else{
        for(var i=idx; i<candidates.length; i++){
            list.push(candidates[i]);
            helper(candidates,res,list,target-candidates[i],i);
            list.pop();
        }
    }
};
