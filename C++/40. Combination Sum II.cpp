class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int> temp;
        sort(candidates.begin(), candidates.end());
        vector<vector<int>> vec;
        solve(0, candidates, temp, target, vec);
        vector<vector<int>> res;
        for(int i = 0; i<vec.size();i++){
            res.push_back(vec[i]);
        }
        return res;
    }
    void solve(int idx, vector<int>& candidates, vector<int>& temp, int target, vector<vector<int>>& vec){
        if(target == 0) {
            vec.push_back(temp);
            return;
        } 
        if(target<0){return;}
        for(int i=idx; i<candidates.size(); i++){
            if(i>idx && candidates[i] == candidates[i-1]){
                continue;
            }
            temp.push_back(candidates[i]);
            solve(i+1, candidates, temp, target-candidates[i], vec);
            temp.pop_back();
        }
    }
};
