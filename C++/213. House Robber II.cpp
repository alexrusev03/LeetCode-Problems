class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n==1){return nums[0];}
        else{
            vector<int> vec1(n,0);
            vector<int> vec2(n,0);
            vec1[1]=nums[0];
            vec2[1]=nums[1];
            for(int i = 2; i<n; i++){
                vec1[i] = max(vec1[i-1], vec1[i-2] + nums[i-1]);
                vec2[i] = max(vec2[i-1], vec2[i-2] + nums[i]);
            }
            return max(vec1[n-1], vec2[n-1]);
        }
    }
};
