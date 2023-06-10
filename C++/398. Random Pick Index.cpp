class Solution {
public:
    vector<int> vec;
    Solution(vector<int>& nums) {
        vec=nums;
    }
    
    int pick(int target) {
        vector<int> res;
        for(int i=0;i<vec.size();i++){
            if(vec[i]==target){
                res.push_back(i);
            }
        }
        return res[rand()%res.size()];
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * int param_1 = obj->pick(target);
 */
