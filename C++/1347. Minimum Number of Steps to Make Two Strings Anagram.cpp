class Solution {
public:
    int minSteps(string s, string t) {
        vector<int> v1(26);
        vector<int> v2(26);
        for(char i: s){
            v1[i-'a']++;
        }
        for(char i: t){
            v2[i-'a']++;
        }
        int res = 0;
        for(int i=0; i<26; i++){
            res+=abs(v1[i]-v2[i]);
        }
        return res/2;
    }
};
