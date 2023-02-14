class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int sol = INT_MAX;
        for(int i = 0; i<n; i++){
            sol=min(sol, nums[i]);
        }
        return sol;
    }
};
//or
class Solution {
public:
    int findMin(vector<int>& nums) {
        int sol=nums[0];
        int l=0;
        int r=nums.size()-1;
        while(l<=r){
            int mid=(l+r)/2;
            if(nums[mid]>=nums[l]){
                if(nums[l]<sol){
                    sol=nums[l];
                }
                l=mid+1;
            }
            else{
                if(nums[mid]<sol){
                    sol=nums[mid];
                }
                r=mid-1;
            }
        }
        return sol;
    }
};
