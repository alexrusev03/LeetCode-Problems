class Solution {
public:
    vector<int> arr;
    int n;
    Solution(vector<int>& nums) {
		arr = nums;
		n = arr.size();
	}
    
    vector<int> reset() {
        return arr;
    }
    
    vector<int> shuffle() {
        vector<int> shuffle= arr;	
		int l = n;
		for(int i = n-1; i>=0; i--) {
			int p = rand()%l;
			swap(shuffle[i], shuffle[p]);
			l--;
		}
		return shuffle;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * vector<int> param_1 = obj->reset();
 * vector<int> param_2 = obj->shuffle();
 */
