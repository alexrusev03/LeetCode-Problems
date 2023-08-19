class Solution {
public:
    int maxSumDivThree(vector<int>& nums) {
        vector<int> vec(3);
        for(int i: nums){
            vector<int> copy = vec;
            for(int j: copy){
                vec[(i+j)%3]=max(vec[(i+j)%3],i+j);
            }
        }
        return vec[0];
    }
};
