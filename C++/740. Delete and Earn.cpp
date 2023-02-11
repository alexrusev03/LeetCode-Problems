class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        vector<int> vec(20001);
        unordered_map<int, int> count;
        for(int i:nums){
            count[i]++;
        }
        vec[0]=0;
        vec[1]=count[1];
        for(int i=2;i<20001;i++)
        {
            vec[i]=max(vec[i-1], vec[i-2]+i*count[i]);
        }
        return vec[20000];
    }
};
