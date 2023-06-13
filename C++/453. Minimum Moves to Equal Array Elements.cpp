class Solution {
public:
    int minMoves(vector<int>& nums) {
        int res = 0;
		int m = INT_MAX;
		for(int i = 0; i<nums.size(); i++){
            m = min(m,nums[i]);
        }
		for(int i = 0; i<nums.size(); i++){
            res+=nums[i]-m;
        }
		return res;
    }
};
