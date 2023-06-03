class Solution {
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> res;
		vector<int> temp;
        combination(res, temp, k, 1, n);
        return res;
    }
    void combination(vector<vector<int>>& res, vector<int> temp, int k,  int b, int n) {
	    if (temp.size() == k && n == 0) {
	    	res.push_back(temp);
	    }
	    for (int i = b; i <= 9; i++) {
		    temp.push_back(i);
		    combination(res, temp, k, i+1, n-i);
		    temp.pop_back();
        }
    }
};
