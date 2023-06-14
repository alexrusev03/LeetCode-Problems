class Solution {
public:
    char findTheDifference(string s, string t) {
        int n = t.size();
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        int i = 0;
        while(i<n){
            if(s[i]!=t[i]){
                break;
            }
            i++;
        }
        return t[i];
    }
};
