class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> pos;
        vector<int> fail={-1,-1};
        int n = nums.size();
        int idx=0;
        for(int i = 0; i<n; i++){
            if(nums[i]==target){
                idx=max(i,idx);
                if(pos.empty()){
                    pos.push_back(i);
                }
            }
        }
        if(!pos.empty()){
            pos.push_back(idx);
            return pos;
        }
        return fail;
    }
};
