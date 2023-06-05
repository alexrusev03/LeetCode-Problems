class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int l = 1;
        int r = nums.size() - 1;
        int c = 0;
        while(l <= r){
            int m = (r + l) / 2;
            c = 0;
            for(int i = 0; i<nums.size(); i++){
                if(nums[i] <= m){
                    c++;
                }
            }
            if(c > m){
                r = m - 1;
            }
            else{
                l = m + 1;
            }
        }
        return l;
    }
};
