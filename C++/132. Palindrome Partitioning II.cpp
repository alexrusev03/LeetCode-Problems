class Solution {
public:
    int minCut(string s) {
        int n = s.size();
        vector<int> vec(n+1);
        for(int i = n-1; i >= 0; i--) {
            if(check(s,i,n-1)==false){
                int temp = n;
                for(int j = i; j < n; j++) {
                    if(check(s,i,j)==true) {
                        temp=min(temp, vec[j+1]);
                    }
                }
                vec[i] = temp + 1;
            }
        }
        return vec[0];
    }
    bool check(string& s, int i, int j){
        while (i<=j){
            if(s[i++] !=s[j--]){
                return false;
            }
        }
        return true;
    }
};
