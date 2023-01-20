class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
       int n=nums.size();
       int count=0;
       unordered_map<int,int>mp;
       mp[k]=1;
       int sum=0;
       for(int i = 0; i<n; i++){
           sum+=nums[i];
           count+=mp[sum];
           mp[sum+k]++;
       }
    return count;
    }
};
