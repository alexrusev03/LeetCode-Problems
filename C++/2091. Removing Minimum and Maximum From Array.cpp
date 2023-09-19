class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();
        int maxidx = 0;
        int minidx = 0;
        for(int i = 0; i < n; i++){
            if(nums[i] > nums[maxidx]){
                maxidx = i;
            }
            if(nums[i] < nums[minidx]){
                minidx = i;
            }
        }
        int fr  = max(maxidx,minidx) + 1;
        int bc = n - min(minidx,maxidx);
        int both = min(minidx,maxidx) + 1 + (n - max(minidx,maxidx));
        return min(fr,min(bc,both));
    }
};
