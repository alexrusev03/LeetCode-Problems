class Solution {
public:
    int sumOfBeauties(vector<int>& nums) {
        int n = nums.size();
        vector<int> r(n);
        vector<int> l(n);
        r[n - 1] = nums[n - 1];
        l[0] = nums[0];
        for(int i = n - 2; i >= 0; i--){
            r[i] = min(r[i + 1], nums[i]);
        }
        for(int i = 1; i < n; i++){
            l[i] = max(l[i - 1], nums[i]);
        }
        int res = 0;
        for(int i = 1; i < n - 1; i++){
            if(nums[i] > l[i - 1] && nums[i] < r[i + 1]){
                res += 2;
            }
            else if(nums[i] > nums[i - 1] && nums[i] < nums[i + 1]){
                res++;
            }
        }   
        return res;
    }
};
