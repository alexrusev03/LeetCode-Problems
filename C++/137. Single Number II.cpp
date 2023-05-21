class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> map;
        for (int i = 0; i<nums.size(); i++){
            if (map.count(nums[i])>0){
                map[nums[i]]++;
            }
            else {
                map[nums[i]] = 1;
            }
        }
        for (int i = 0; i<nums.size(); i++){
            if(map[nums[i]]==1){
                return nums[i];
            }
        }
        return 0;
    }
};
