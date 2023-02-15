class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int l = 1;
        int r = 1;
        int ans = INT_MIN;
        for(int i = 0; i<n; i++){
            if(l==0){l=1;}
            if(r==0){r=1;}
            l=l*nums[i];
            r=r*nums[n-i-1];
            ans = max(ans, max(l,r));
        }
        return ans;
    }
};
