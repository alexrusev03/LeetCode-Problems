class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        vector<int> res;
        map<int,int> map;
        for(int i=0; i<n; i++){
            map[nums[i]]++;
            if(map[nums[i]]>n/3){
                res.push_back(nums[i]);
                map[nums[i]]=INT_MIN;
            }
        }
        return res;
    }
};
