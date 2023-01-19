class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int n = nums.size();
        int ni= INT_MAX;
        int nj= INT_MAX;
        for(int k = 0; k<n; k++){
            if(nums[k]<=ni){ni=nums[k];}
            else if(nums[k]<=nj){nj=nums[k];}
            else{return true;}
        }
        return false;
    }
};
