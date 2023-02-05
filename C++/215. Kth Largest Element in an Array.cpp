class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int c[20001] = {0};
        for(auto x: nums){
            c[x + 10000]++;
        }
        int i = 20000;
        while(k > 0){
            k -= c[i--];
        }
        return i + 1 - 10000;
    }
};
//or
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        return nums[nums.size()-k];
    }
};
