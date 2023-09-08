class Solution {
public:
    vector<int> mostCompetitive(vector<int>& nums, int k) {
        int n = nums.size();
        int j = 0;
        vector<int> res(k);
        for(int i = 0; i < n; i++){
            while(j != 0 && n - i > k - j && res[j - 1] > nums[i]){
                j--;
            }
            if(j < k){
                res[j] = nums[i];
                j++;
            }
        }
        return res;
    }
};
