class Solution {
public:
    long long minimumRemoval(vector<int>& beans) {
        long n = beans.size();
        long res = LONG_MAX;
        long sum = 0;
        sort(beans.begin(), beans.end());
        for(int i : beans){
            sum += i;
        }
        for(int i = 0; i<n; i++){
            res = min(res, sum - (n - i) * beans[i]);
        }
        return res;
    }
};
