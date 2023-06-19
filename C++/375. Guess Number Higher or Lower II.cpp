class Solution {
public:
    int getMoneyAmount(int n) {
        vector<vector<int>> vec(n+1, vector<int>(n+1));
        int res = helper(vec, 1, n);
        return res;
    }
    int helper(vector<vector<int>>& vec, int l, int r) {
        if(l >= r){
            return 0;
        }
        if(vec[l][r]){
            return vec[l][r];
        }
        int res = INT_MAX;
        for(int i=l; i<=r; i++){
            res = min(res, i + max(helper(vec, l, i-1), helper(vec, i+1, r)));
        }
        return vec[l][r] = res;
    }
};
