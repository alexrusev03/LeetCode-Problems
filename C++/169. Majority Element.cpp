class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        map<int,int> mp;
        for(int i = 0; i<n;i++){
            mp[nums[i]]++;
        }
        int j = 0;
        while(j<nums.size()){
            if(n%2==0){
                if(mp[nums[j]]>=n/2){
                    return nums[j];
                    break;
                }
            }
            if(n%2!=0){
                if(mp[nums[j]]>n/2){
                    return nums[j];
                    break;
                }
            }
            j++;
        }
        return 0;
    }
};
