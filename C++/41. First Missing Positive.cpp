class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size()+1;
        nums.push_back(0);
        for(int i = 0; i<n; i++){
            if(nums[i]<0 || nums[i]>n-1){
                nums[i]=0;
            }
        }
        for(int j = 0; j<n; j++){
            nums[nums[j]%n]+=n;
        }
        for(int k = 1; k<n; k++){
            if(nums[k]/n==0){
                return k;
            }
        }
        return n;
    }
};
