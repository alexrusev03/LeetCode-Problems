class Solution {
public:
    vector<int> diStringMatch(string s) {
        int n = s.size();
        int i = 0;
        int j = n;
        vector<int> res(n+1);
        for(int k = 0; k<n; k++){
            if(s[k]=='D'){
                res[k] = j;
                j--;
            }
            else{
                res[k] = i;
                i++;
            }
        }
        res[n] = j;
        return res;
    }
};
