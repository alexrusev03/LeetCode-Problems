class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> vec;
        map<int, int> mp;
        for(int i=0; i<n; i++){
            mp[nums[i]]++;
        }

        int freq, num = 0, c = 0;
        while(c < k){
            freq = 0;
            for(auto i=mp.begin(); i!=mp.end(); i++){
                if(i->second > freq){
                    freq= i->second;
                    num = i->first;
                }
            }

            vec.push_back(num);
            mp.erase(num);
            c++;
        }

        return vec;
    }
};
