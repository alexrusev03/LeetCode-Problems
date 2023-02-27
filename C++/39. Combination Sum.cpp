class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int> vec;
        helper(candidates, res, vec, target, 0);
        return res;
    }
    void helper(vector<int>& candidates, vector<vector<int>> &res, vector<int> &vec, int target, int idx){
        if(target < 0){
            return;
        }
        else if(target == 0){
            res.push_back(vec);
        }
        else{
            for(int i=idx; i<candidates.size(); i++){
                vec.push_back(candidates[i]);
                helper(candidates,res,vec,target-candidates[i],i);
                vec.pop_back();
            }
        }
    }
};
