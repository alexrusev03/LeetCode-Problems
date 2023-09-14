class Solution {
public:
    int minDeletions(string s) {
        vector<int> vec(26);
        for(char c : s){
            vec[c - 'a']++;
        }
        int res = 0;
        sort(vec.begin(), vec.end());
        for(int i = 24; i >= 0; i--){
            if(vec[i] == 0){
                break;
            }
            if(vec[i] >= vec[i+1]){
                int temp = vec[i];
                vec[i] = max(0, vec[i+1] -1);
                res += temp - vec[i];
            }
        }
        return res;
    }
};
