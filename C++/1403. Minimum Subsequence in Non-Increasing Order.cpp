class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
        int n=nums.size();
        int rest=0;
        int sum=0;
        vector<int> res;
        sort(nums.begin(), nums.end());
        for(int i=0; i<n; i++){
            rest+=nums[i];
        }
        for(int j=n-1; j>=0; j--){
            sum+=nums[j];
            rest-=nums[j];
            res.push_back(nums[j]);
            if(sum>rest){
                break;
            }
        }
        return res;
    }
};
