class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector <int> index;
        int size = nums.size();
        for (int i = 0; i<size; i++){
            int k = target -  nums[i];
            for (int j = i+1; j>i && j<size; j++){
                if (nums[j]==k){
                    index.push_back(i);
                    index.push_back(j);
                    break;
                }
            }
        }
        return index;
    }
};
