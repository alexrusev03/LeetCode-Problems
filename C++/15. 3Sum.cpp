class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        vector<vector<int>>sol;
        for(int i=0;i<n-1;i++){
            int l=i+1;
            int r=n-1;
            if(i>0 && nums[i]==nums[i-1]){continue;}
            while(l<r){ 
                if(nums[i]+nums[l]+nums[r]==0){
                    sol.push_back({nums[i],nums[l],nums[r]});
                    while(l<r && nums[l]==nums[l+1]){l++;}
                    while(l<r && nums[r]==nums[r-1]){r--;}
                    l++;
                    r--;
                }
                else if(nums[i]+nums[l]+nums[r]<0){
                    l++;
                }
                else{
                    r--;
                }
            }
          
        }
        return sol;
    }
};
