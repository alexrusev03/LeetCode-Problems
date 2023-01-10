class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k=k%n;
        reverse(nums.begin(),nums.end());
        for (int i = 0; i<k;i++){
            nums.push_back(nums[i]);
        }
        reverse(nums.begin(),nums.end());
        nums.erase(nums.begin()+n,nums.begin()+n+k);
    }
};
