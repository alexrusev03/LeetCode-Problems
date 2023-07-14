class Solution {
public:
    int countSubstrings(string s) {
        int res = 0;
        int n = s.size();
        for(int i = 0; i<n; i++){
            int j = i;
            int k = i;
            while(j>=0 && k<n && s[j] == s[k]){
                j--;
                k++;
                res++;
            }
            j = i;
            k = i+1;
            while(j>=0 && k<n && s[j] == s[k]){
                j--;
                k++;
                res++;
            }
        }
        return res;
    }
};
