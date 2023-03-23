class Solution {
public:
    int characterReplacement(string s, int k) {
        int j=0;
        int m=0;
        int res=0;
        unordered_map<char, int>map;
        for(int i=0;i<s.size();i++){
            map[s[i]]++;
            m=max(m,map[s[i]]);
            if(i-j+1-m>k){
                map[s[j]]--;
                j++;
            }
            res=max(res, i-j+1);
        }
        return res;
    }
};
