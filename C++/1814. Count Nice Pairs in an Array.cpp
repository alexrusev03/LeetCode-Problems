class Solution {
public:
    int countNicePairs(vector<int>& nums) {
        map<int, int> mp;
        int res = 0;
        for(int i : nums){
            res = (res + mp[i - reverse(i)]) % 1000000007;
            mp[i - reverse(i)]++;
        }
        return res;
    }
    int reverse(int i){
        long rev=0;
        while(i!=0){
            rev=rev*10 + i%10;
            i/=10;
        }
        return rev;
    }
};
