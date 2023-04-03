class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        if(n == 0){
            return 0;
        }
        int num = 1;
        for(int i = 0; i < n - 1; i++) {
            if(nums[i] != nums[i + 1]){
                nums[num] = nums[i + 1];
                num++;
            }
        }
        return num;
    }
};
