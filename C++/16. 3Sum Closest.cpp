class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int diff=INT_MAX;
        int res=0;
        for (int i = 0; i < nums.size()-1; i++){
            int j=i+1;
            int n= nums.size()-1;
            while(j<n){
                if (abs(nums[i] + nums[j] + nums[n] - target) < diff){
                    diff=abs(nums[i] + nums[j] + nums[n] - target);
                    res = nums[i] + nums[j] + nums[n];
                }
                if (nums[i]+nums[j]+nums[n]<target){
                    j++;
                }
                else{
                    n--;
                }
            }
            if(res==target){
                break;
            }
        }
        return res;
    }
};
