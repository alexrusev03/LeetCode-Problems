class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,int> ms;
        unordered_map<char,int> mt;
        for (int i = 0; i < s.size(); i++) {
            if (ms[s[i]] != mt[t[i]]){
                return false;
            }
            ms[s[i]] = i + 1;
            mt[t[i]] = i + 1;
        }
        return true;
    }
};
