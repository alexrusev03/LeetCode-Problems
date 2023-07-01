class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int n = candyType.size();
        unordered_map<int, int> mp;
        int res = 0;
        for (auto i: candyType) {
            if (mp[i]==0) {
                if (res == n/2) {
                    return n/2;
                }
                res++;
            }
            mp[i]++;
        }
        return res;
    }
};
