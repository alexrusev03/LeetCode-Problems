class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int i = 0;
        while(i<n){
            for(int j = 0; j<n; j++){
                if(nums[j]==0){
                    swap(nums[j], nums[i]);
                    i++;
                }
            }
            for(int j = 0; j<n; j++){
                if(nums[j]==1){
                    swap(nums[j], nums[i]);
                    i++;
                }
            }
            for(int j = 0; j<n; j++){
                if(nums[j]==2){
                    swap(nums[j], nums[i]);
                    i++;
                }
            }
        }
    }
};
