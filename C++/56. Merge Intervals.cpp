class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n = intervals.size();
        vector<vector<int>> res;
        sort(intervals.begin(), intervals.end());
        for(int i = 0; i<n; i++){
            if(res.empty() || res.back()[1] < intervals[i][0]){
                res.push_back(intervals[i]);
            }
            else{
                res.back()[1] = max(res.back()[1], intervals[i][1]);
                res.back()[0] = min(res.back()[0], intervals[i][0]);
            }
        }
        return res;
    }
};
