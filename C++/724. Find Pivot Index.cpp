class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        vector<int>vec;
        int sum=0;
        for(int i = 0; i<nums.size(); i++){
            sum+=nums[i];
            vec.push_back(sum);
        }
        int n = vec.size();
        if(sum==vec[0]){
            return 0;
        }
        for(int i=1;i<n;i++){
            if(vec[i-1]==vec[n-1]-vec[i]){
                return i;
            }
        }
        return -1;
    }
};
