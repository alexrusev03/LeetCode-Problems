class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if(n == 0){
            return 0;
        }
        sort(nums.begin(), nums.end());
        int curr = 1;
        int maxs = 0;
        for(int i=0; i<n-1; i++){
            if(nums[i+1] != nums[i]){
                if(nums[i+1] == nums[i] + 1){
                    curr++;
                }
                else{
                    maxs = max(maxs, curr);
                    curr = 1;
                }
            }
        }
        return max(maxs, curr);
    }
};
